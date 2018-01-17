%{
#include <string.h>
#include "structuri.h"
#include <stdio.h>
#include <stdlib.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
int yylex();
int yyerror(char * s);
struct IntNode intnodes[100];
int nr_inodes = 0;
struct StringNode stringnodes[100];
int nr_snodes = 0;
struct FloatNode floatnodes[100];
int nr_fnodes = 0;
struct BoolNode boolnodes[100];
int nr_bnodes = 0;
int FindIntNode(char* name);
int AddIntNode(char *name);
int UpdateIntVal(char *name,int val);

int FindStringNode(char* name);
int AddStringNode(char *name);
int UpdateStringVal(char *name,char* val);

int FindFloatNode(char* name);
int AddFloatNode(char *name);
int UpdateFloatVal(char *name,double val);

int FindBoolNode(char* name);
int AddBoolNode(char *name);
int UpdateBoolVal(char *name,int val);
%}
%union {
int intval;
double floatval;
char* strval;
char boolval[6];
struct  
{
	char name[100];
	int val;
} intnode;

struct  
{
	char name[100];
	char val[100];
} stringnode;

struct  
{
	char name[100];
	double val;
} floatnode;

struct  
{
	char name[100];
	char val[6];
} boolnode;
}
%token TIPi TIPf TIPs TIPb TIPstruct
%token IDint IDfloat IDstring IDbool IDstruct
%token CIDint CIDfloat CIDstring CIDbool
%token BGIN END ASSIGN PRINT
%token IF ELSE ENDIF FOR ENDFOR WHILE ENDWHILE 
%token COMP EQUAL DIFF NOT AND OR
%token ADD MIN POW MUL DIV
%token BEGIN_FUNCTION END_FUNCTION
%start progr
%token <strval> STRING
%token <intval> INT
%token <floatval> FLOAT
%token <boolval> BOOL
%type <intval>numberint
%type <strval>estring
%type <intnode>IDint
%type <stringnode>IDstring
%type <boolnode>IDbool
%type <floatnode>IDfloat
%type <intnode>CIDint
%type <stringnode>CIDstring
%type <boolnode>CIDbool
%type <floatnode>CIDfloat
%left  AOPERATOR
%left '+'
%left '*'
%left AND
%left OR
%left NOT

%%
progr: declarations body test {printf("Program corect sintactic\n");}
     ;

declarations:  declaration ';'
	   | declarations declaration ';'
	   ;

declaration: function_decl
		   | variable_decl
		   | const_decl
		   | array_decl
		   | struct_decl
		   ;

variable_decl: TIPi IDint {if(AddIntNode($2.name)) printf("%s declared\n",$2.name); else {printf("%s redeclaration\n",$2.name);exit(0);}}
             | TIPs IDstring {if(AddStringNode($2.name)) printf("%s declared\n",$2.name); else {printf("%s redeclaration\n",$2.name);exit(0);}}
			 | TIPf IDfloat {if(AddFloatNode($2.name)) printf("%s declared\n",$2.name); else {printf("%s redeclaration\n",$2.name);exit(0);}}
			 | TIPb IDbool
             ;

array_decl: TIPi IDint '[' INT ']'
          | TIPs IDstring '[' INT ']'
     	  | TIPf IDfloat '[' INT ']'
	      | TIPb IDbool '[' INT ']'
          ;

struct_decl: TIPstruct IDstruct '{' struct_var_decl '}'
		   ;

struct_var_decl: variable_decl ';'
			   | struct_var_decl variable_decl ';'
			   ;

data_id_type: IDint
			| IDbool
			| IDfloat
			| IDstring
			| econst
			;

const_decl: TIPi CIDint ASSIGN numberint
          | TIPs CIDstring ASSIGN estring
		  | TIPb CIDbool ASSIGN ebool
		  | TIPf CIDfloat ASSIGN numberfl
		  ;

param_list_decl: 
               | params_decl 
               ;

params_decl: param_decl
	       | params_decl ',' param_decl 
	       ;
            
param_decl: variable_decl
          | TIPi CIDint
          | TIPs CIDstring
		  | TIPb CIDbool 
		  | TIPf CIDfloat
		  ;

function_decl: variable_decl '(' param_list_decl ')' BEGIN_FUNCTION list END_FUNCTION
			 ;

param_list: 
          | params 
          ;

params: param
	  | params ',' param 
	  ;
            
param: gnumber
	 | ebool
	 | estring
	 | function_call
     ;

/* body */
body: BGIN list END  
    ;
     
/* lista instructiuni */
list: statement 
	| list statement
	;

statement: assgnst ';' 
         | assgnint ';'
         | assgnfl ';'
         | assgnbl ';'
         | control 
         | print ';'
	   | function_call ';'
         ;

test:  
    ;

/*INVOCARE de FUnCtIe*/
function_call: data_id_type '(' param_list ')'
			 ;

/*instructiuni de control*/
control: IF '(' exprlog ')''?' list else ENDIF {printf("Recunoscut if.\n");}
       | FOR '(' exprfor ')' list ENDFOR {printf("Recunoscut for. \n");}
       | WHILE '(' exprlog ')' list ENDWHILE {printf("Recunoscut while. \n");}
       ;

else: 
	| ELSE list
	;

/*expresii logice*/
exprlog: exprlognr 
      |  exprlogst 
      |  ebool
      |  '(' exprlog ')'
      |  NOT exprlog
      |  exprlog AND exprlog
      |  exprlog OR exprlog
      ;

      
/*expresii logice cu numere*/
exprlognr: exprfl COMP exprfl
      |    exprfl EQUAL exprfl
      |    exprfl DIFF exprfl
      ;

/*expresii logice cu stringuri*/
exprlogst: exprst EQUAL exprst
      |   exprst DIFF exprst
      ;        

	      
/*expresii for*/
exprfor: assgnint ';' exprlognr ';' assgnint
       ;

/* assgn la stringuri */
assgnst:  IDstring ASSIGN exprst
      ;
        
/* assgn la intregi */
assgnint: IDint ASSIGN exprint
      ;


/*assgn la bool */
assgnbl:   IDbool ASSIGN exprlog
      ;

/*assgn la float */
assgnfl:   IDfloat ASSIGN exprfl
      ;


/*tipul de date numere intregi*/
numberint: IDint
         | INT
	   | CIDint
         | IDint '[' numberint ']'

         ;

/*tipul de date numere float*/
numberfl: IDfloat
        | FLOAT  
	  | CIDfloat
        | IDfloat '[' numberint ']'
        ;

/*tipul de date numar*/
gnumber: numberfl
      | numberint
      ;

/*tipul de date bool*/      
ebool: IDbool
     | BOOL
     | CIDbool
     | IDbool '[' numberint ']'
     ;

/*tipul de date string*/
estring: IDstring
       | STRING
	 | CIDstring
       | IDstring '[' numberint ']'
       ;

/*tipul de date constante*/
econst: CIDint
	  | CIDbool
	  | CIDfloat
	  | CIDstring
	  ;


/*expresii algebrice cu numere intregi*/
exprint:   numberint
      | IDint '(' param_list ')'
      | exprint AOPERATOR exprint
      | '(' exprint ')'
     ;


/*expresii algebrice cu  numere */
exprfl:   gnumber
      | IDfloat '(' param_list ')'
      | IDint '(' param_list ')'
      | exprfl AOPERATOR exprfl
      | '(' exprfl ')'
      ; 
       

/*expresii algebrice cu stringuri*/
exprst: estring
      | exprst '+' exprst
      | '(' exprst ')'
      | exprst '*' numberint
      ;    


/*functia de printare*/
print: PRINT '(' IDstring ')' {printf("S-a recunoscut: %s\n",$<strval>$);}
     |  PRINT '(' IDint ')' {printf("S-a recunoscut: %d\n",$<intval>$);}
     ;

%%
int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int FindIntNode(char* name)
{
	int i;
	for (i = 0;i<nr_inodes;i++)
	{
		if (!strcmp(name,intnodes[i].name))
		return i;
	}
	return -1;
}

int AddIntNode(char *name)
{
	if (FindIntNode(name)!=-1)
	return 0;
	strcpy(intnodes[nr_inodes].name,name);
	intnodes[nr_inodes].val = 0;
	nr_inodes++;
	return 1;
}

int UpdateIntVal(char *name,int val)
{
	int i;
	i =FindIntNode(name);
	if (i == -1)
	return 0;
	intnodes[i].val = val;
}

int FindStringNode(char* name)
{
	int i;
	for (i = 0;i<nr_snodes;i++)
	{
		if (!strcmp(name,stringnodes[i].name))
		return i;
	}
	return -1;
}

int AddStringNode(char *name)
{
	if (FindStringNode(name)!=-1)
	return 0;
	strcpy(stringnodes[nr_snodes].name,name);
	strcpy(stringnodes[nr_snodes].val,"");
	nr_snodes++;
	return 1;
}

int UpdateStringVal(char *name,char * val)
{
	int i;
	i =FindStringNode(name);
	if (i == -1)
	return 0;
	strcpy(stringnodes[i].val,val);
}

int FindFloatNode(char* name)
{
	int i;
	for (i = 0;i<nr_fnodes;i++)
	{
		if (!strcmp(name,floatnodes[i].name))
		return i;
	}
	return -1;
}

int AddFloatNode(char *name)
{
	if (FindFloatNode(name)!=-1)
	return 0;
	strcpy(floatnodes[nr_fnodes].name,name);
	floatnodes[nr_fnodes].val = 0;
	nr_fnodes++;
	return 1;
}

int UpdateFloatVal(char *name,double val)
{
	int i;
	i =FindFloatNode(name);
	if (i == -1)
	return 0;
	floatnodes[i].val = val;
}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
yyparse();
} 