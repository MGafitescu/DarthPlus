%{
#include <string.h>
#include "structuri.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
int yylex();
int yyerror(char * s);

int last_func_type;
int last_func_nr;
struct IntNode intnodes[100];
int nr_inodes = 0;
struct StringNode stringnodes[100];
int nr_snodes = 0;
struct FloatNode floatnodes[100];
int nr_fnodes = 0;
struct BoolNode boolnodes[100];
int nr_bnodes = 0;
struct IntFuncNode intfuncnodes[100];
int nr_ifnodes = 0;
struct StringFuncNode stringfuncnodes[100];
int nr_sfnodes = 0;
struct FloatFuncNode floatfuncnodes[100];
int nr_ffnodes = 0;
struct BoolFuncNode boolfuncnodes[100];
int nr_bfnodes = 0;
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
int UpdateBoolVal(char *name,int  val);

int FindIntFuncNode(char* name);
int AddIntFuncNode(char *name);

int FindStringFuncNode(char* name);
int AddStringFuncNode(char *name);

int FindFloatFuncNode(char* name);
int AddFloatFuncNode(char *name);

int FindBoolFuncNode(char* name);
int AddBoolFuncNode(char *name);

%}
%union {
int intval;
double floatval;
char* strval;
int boolval;
struct  IND
{
	char name[100];
	int val;
} intnode;

struct  SND
{
	char name[100];
	char val[100];
} stringnode;

struct  FND
{
	char name[100];
	double val;
} floatnode;

struct BND
{
	char name[100];
	int val;
} boolnode;

struct 
{
	char name[100];
	int nr_inodes;
	int nr_snodes;
	int nr_fnodes;
	int nr_bnodes;
	struct IND intnodes[10];
	struct SND stringnodes[10];
	struct BND boolnodes[10];
	struct FND floatnodes[10];
} intfuncnode;

struct 
{
	char name[100];
	int nr_inodes;
	int nr_snodes;
	int nr_fnodes;
	int nr_bnodes;
	struct IND intnodes[10];
	struct SND stringnodes[10];
	struct BND boolnodes[10];
	struct FND floatnodes[10];
}stringfuncnode;

struct 
{
	char name[100];
	int nr_inodes;
	int nr_snodes;
	int nr_fnodes;
	int nr_bnodes;
	struct IND intnodes[10];
	struct SND stringnodes[10];
	struct BND boolnodes[10];
	struct FND floatnodes[10];
}floatfuncnode;

struct 
{
	char name[100];
	int nr_inodes;
	int nr_snodes;
	int nr_fnodes;
	int nr_bnodes;
	struct IND intnodes[10];
	struct SND stringnodes[10];
	struct BND boolnodes[10];
	struct FND floatnodes[10];
}boolfuncnode;
}
%token TIPi TIPf TIPs TIPb TIPstruct
%token IDint IDfloat IDstring IDbool IDstruct
%token CIDint CIDfloat CIDstring CIDbool
%token BGIN END ASSIGN PRINT
%token IF ELSE ENDIF FOR ENDFOR WHILE ENDWHILE 
%token LE GE EQUAL DIFF NOT AND OR
%token UMINUS
%token BEGIN_FUNCTION END_FUNCTION ENDL
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
%type <boolval>ebool
%type <floatval>numberfl
%type <strval>exprst
%type <intval>exprint
%type <boolval>exprlog
%type <boolval>exprlogst
%type <boolval>exprlognr
%type <floatval>exprfl
%type <floatval>gnumber
%right '='
%left  '+' '-'
%left  '*' '/' '%'
%left  '^'
%left UMINUS
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

			 | TIPb IDbool  {if(AddBoolNode($2.name)) printf("%s declared\n",$2.name); else {printf("%s redeclaration\n",$2.name);exit(0);}}
             | TIPs IDstring {if(AddStringNode($2.name)) printf("%s declared\n",$2.name); else {printf("%s redeclaration\n",$2.name);exit(0);}}
			 | TIPf IDfloat {if(AddFloatNode($2.name)) printf("%s declared\n",$2.name); else {printf("%s redeclaration\n",$2.name);exit(0);}}
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

const_decl: TIPi CIDint ASSIGN numberint {if(AddIntNode($2.name)) printf("%s declared\n",$2.name); else {printf("%s redeclaration\n",$2.name);exit(0);}
											UpdateIntVal($2.name,$4);}
          | TIPs CIDstring ASSIGN estring{if(AddStringNode($2.name)) printf("%s declared\n",$2.name); else {printf("%s redeclaration\n",$2.name);exit(0);}
											UpdateStringVal($2.name,$4);}
		  | TIPb CIDbool ASSIGN ebool{if(AddBoolNode($2.name)) printf("%s declared\n",$2.name); else {printf("%s redeclaration\n",$2.name);exit(0);}
											UpdateBoolVal($2.name,$4);}
		  | TIPf CIDfloat ASSIGN numberfl{if(AddFloatNode($2.name)) printf("%s declared\n",$2.name); else {printf("%s redeclaration\n",$2.name);exit(0);}
											UpdateFloatVal($2.name,$4);}
		  ;

param_list_decl: 
               | params_decl 
               ;

params_decl: param_decl
	       | params_decl ',' param_decl 
	       ;
            
param_decl: TIPi IDint 
          | TIPi CIDint
		  | TIPs IDstring
          | TIPs CIDstring
		  | TIPb IDbool
		  | TIPb CIDbool 
		  | TIPf IDfloat
		  | TIPf CIDfloat
		  ;

function_decl: TIPi IDint '(' param_list_decl ')' BEGIN_FUNCTION list END_FUNCTION 
					{
						int i = AddIntFuncNode($2.name);
						if(i != -1)  
							{
								printf("function %s declared\n",$2.name); 
								last_func_nr = i;
								last_func_type = 1;
							}
						else {
								printf("function %s redeclaration\n",$2.name);
								exit(0);
							}
					}
				| TIPs IDstring '(' param_list_decl ')' BEGIN_FUNCTION list END_FUNCTION 
					{
						int i;
						if((i = AddStringFuncNode($2.name)) >= 0)  
							{
								printf("function %s declared\n",$2.name); 
								last_func_nr = i;
								last_func_type = 2;
							}
						else {
								printf("function %s redeclaration\n",$2.name);
								exit(0);
							}
					}
				| TIPf IDfloat '(' param_list_decl ')' BEGIN_FUNCTION list END_FUNCTION 
					{
						int i;
						if((i = AddFloatFuncNode($2.name)) >= 0)  
							{
								printf("function %s declared\n",$2.name); 
								last_func_nr = i;
								last_func_type = 3;
							}
						else {
								printf("function %s redeclaration\n",$2.name);
								exit(0);
							}
					}
				| TIPb IDbool '(' param_list_decl ')' BEGIN_FUNCTION list END_FUNCTION 
					{
						int i;
						if((i = AddBoolFuncNode($2.name)) >= 0)  
							{
								printf("function %s declared\n",$2.name); 
								last_func_nr = i;
								last_func_type = 4;
							}
						else {
								printf("function %s redeclaration\n",$2.name);
								exit(0);
							}
					}
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
control: IF '(' exprlog ')''?' list else ENDIF {printf("Conditie logica din if se evalueaza la: %d.\n",$3);}
       | FOR '(' exprfor ')' list ENDFOR 
       | WHILE '(' exprlog ')' list ENDWHILE {printf("Conditie logica din while se evalueaza la: %d. \n",$3);}
       ;

else: 
	| ELSE list
	;

/*expresii logice*/
exprlog: exprlognr {$$=$1;}
      |  exprlogst {$$=$1;}
      |  ebool {$$=$1;}
      |  '(' exprlog ')' {$$=$2;}
      |  NOT exprlog {$$=!$2;}
      |  exprlog AND exprlog {$$=$1&&$3;}
      |  exprlog OR exprlog {$$=$1||$3;}
      ;

      
/*expresii logice cu numere*/
exprlognr: exprfl LE exprfl {$$=$1<=$3;}
	  |    exprfl GE exprfl {$$=$1>=$3;}
	  |    exprfl '<' exprfl {$$=$1<$3;}
	  |    exprfl '>' exprfl {$$=$1>$3;}
      |    exprfl EQUAL exprfl {$$=$1==$3;}
      |    exprfl DIFF exprfl {$$=$1!=$3;}
      ;

/*expresii logice cu stringuri*/
exprlogst: exprst EQUAL exprst {$$=!strcmp($1,$3);}
      |   exprst DIFF exprst {$$=strcmp($1,$3);}
      ;        

	      
/*expresii for*/
exprfor: assgnint ';' exprlognr ';' assgnint {printf("Conditia logica din for se evalueaza la: %d\n",$3);}
       ;

/* assgn la stringuri */
assgnst:  IDstring ASSIGN exprst {if(!UpdateStringVal($1.name,$3)) {printf("%s nu a fost declarat\n",$1.name);exit(0);} 
									else printf("%s primeste \"%s\"\n",$1.name,$3);}
      ;
        
/* assgn la intregi */
assgnint: IDint ASSIGN exprint {if(!UpdateIntVal($1.name,$3)) {printf("%s nu a fost declarat\n",$1.name);exit(0);} 
									else printf("%s primeste %d\n",$1.name,$3);}
      ;


/*assgn la bool */
assgnbl:   IDbool ASSIGN exprlog {if(!UpdateBoolVal($1.name,$3)) {printf("%s nu a fost declarat\n",$1.name);exit(0);} 
									else printf("%s primeste %d\n",$1.name,$3);}
      ;

/*assgn la float */
assgnfl:   IDfloat ASSIGN exprfl {if(!UpdateFloatVal($1.name,$3)) {printf("%s nu a fost declarat\n",$1.name);exit(0);} 
									else printf("%s primeste %f\n",$1.name,$3);}
      ;


/*tipul de date numere intregi*/
numberint: IDint {int i = FindIntNode($1.name);
					if(i>=0)
						if (!intnodes[i].init) {printf("%s nu a fost initializat\n",$1.name);exit(0);}
						else $$ = intnodes[i].val;
					else {printf("%s not previously declared\n",$1.name);exit(0);}}
         | INT {$$ = $1;}
	     | CIDint {int i = FindIntNode($1.name);
					if(i>=0)
							$$ = intnodes[i].val;
					else {printf("%s not previously declared\n",$1.name);exit(0);}}
         | IDint '[' numberint ']'

         ;

/*tipul de date numere float*/
numberfl: IDfloat {int i = FindFloatNode($1.name);
					if(i>=0)
						if (!floatnodes[i].init) {printf("%s nu a fost initializat\n",$1.name);exit(0);}
						else $$ = floatnodes[i].val;
					else {printf("%s not previously declared\n",$1.name);exit(0);}}
        | FLOAT  {$$ = $1;}
	  	| CIDfloat {int i = FindFloatNode($1.name);
					if(i>=0)
						$$ = floatnodes[i].val;
					else {printf("%s not previously declared\n",$1.name);exit(0);}}
        | IDfloat '[' numberint ']'
        ;

/*tipul de date numar*/
gnumber: numberfl {$$ = $1;}
      | numberint {$$ = $1;}
      ;

/*tipul de date bool*/      
ebool: IDbool {int i = FindBoolNode($1.name);
					if(i>=0)
						if (!boolnodes[i].init) {printf("%s nu a fost initializat\n",$1.name);exit(0);}
						else $$=boolnodes[i].val;
					else {printf("%s not previously declared\n",$1.name);exit(0);}}
     | BOOL {$$=$1;}
     | CIDbool{int i = FindBoolNode($1.name);
					if(i>=0)
						$$=boolnodes[i].val;
					else {printf("%s not previously declared\n",$1.name);exit(0);}}
     | IDbool '[' numberint ']'
     ;

/*tipul de date string*/
estring: IDstring {int i = FindStringNode($1.name);
					if(i>=0)
						if (!stringnodes[i].init) {printf("%s nu a fost initializat\n",$1.name);exit(0);}
						else $$ =stringnodes[i].val;
					else {printf("%s not previously declared\n",$1.name);exit(0);}}
       | STRING {$$=$1;}
	   | CIDstring{int i = FindStringNode($1.name);
					if(i>=0)
						$$=stringnodes[i].val;
					else {printf("%s not previously declared\n",$1.name);exit(0);}}
       | IDstring '[' numberint ']'
       ;

/*tipul de date constante*/
econst: CIDint 
	  | CIDbool
	  | CIDfloat
	  | CIDstring
	  ;


/*expresii algebrice cu numere intregi*/
exprint:   numberint {$$ = $1;}
      | IDint '(' param_list ')'
      | exprint '+' exprint {$$ = $1 + $3;}
	  | exprint '-' exprint {$$ = $1 - $3;}
	  | exprint '*' exprint {$$ = $1 * $3;}
	  | exprint '/' exprint {if($3==0){printf("Impartirea la 0 nu este permisa\n");exit(0);} else $$ = $1 / $3;}
	  | exprint '^' exprint {$$ = pow($1,$3);}
      | '(' exprint ')' {$$ = $2;}
	  | UMINUS exprint {$$=-$2;}
     ;


/*expresii algebrice cu  numere */
exprfl:   gnumber {$$ = $1;}
      | IDfloat '(' param_list ')'
      | IDint '(' param_list ')'
      | exprfl '+' exprfl {$$ = $1 + $3;}
	  | exprfl '-' exprfl {$$ = $1 - $3;}
	  | exprfl '*' exprfl {$$ = $1 * $3;}
	  | exprfl '/' exprfl {if($3==0){printf("Impartirea la 0 nu este permisa\n");exit(0);} else $$ = $1 / $3;}
	  | exprfl '^' exprfl {$$ = pow($1,$3);}
      | '(' exprfl ')' {$$ = $2;}
	  | UMINUS exprfl {$$=-$2;}
      ; 
       

/*expresii algebrice cu stringuri*/
exprst: estring {$$=$1;}
      | exprst '+' exprst {strcpy($$,strcat($1,$3));}
      | '(' exprst ')' {$$=$2;}
      | exprst '*' numberint {char temp[100];strcpy(temp,$1);for(int i=0;i<$3-1;i++) strcat(temp,$1); strcpy($$,temp);}
      ;    


/*functia de printare*/
print: PRINT'(' IDint ')' {printf("%s=%d\n",$3.name,intnodes[FindIntNode($3.name)].val);} 
	 | PRINT'(' IDfloat ')' {printf("%s=%f\n",$3.name,floatnodes[FindFloatNode($3.name)].val);} 
	 | PRINT'(' IDbool ')' {printf("%s=%d\n",$3.name,boolnodes[FindBoolNode($3.name)].val);} 
	 | PRINT'(' IDstring ')' {printf("%s=%s\n",$3.name,stringnodes[FindStringNode($3.name)].val);} 
	 | PRINT'(' CIDint ')' {printf("%s=%d\n",$3.name,intnodes[FindIntNode($3.name)].val);} 
	 | PRINT'(' CIDfloat ')' {printf("%s=%f\n",$3.name,floatnodes[FindFloatNode($3.name)].val);} 
	 | PRINT'(' CIDbool ')' {printf("%s=%d\n",$3.name,boolnodes[FindBoolNode($3.name)].val);} 
	 | PRINT'(' CIDstring ')' {printf("%s=%s\n",$3.name,stringnodes[FindStringNode($3.name)].val);} 
	 | PRINT'(' ENDL ')' {printf("\n");}
     ;

%%
int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int FindIntFuncNode(char* name)
{
	int i;
	for (i = 0;i<nr_ifnodes;i++)
	{
		if (!strcmp(name,intfuncnodes[i].name))
		{
			return i;
		}
	}
	return -1;
}

int AddIntFuncNode(char *name)
{
	int i;
	i = FindIntFuncNode(name);
	if (i!=-1)
	return -1;
	strcpy(intfuncnodes[nr_ifnodes].name,name);
	intfuncnodes[nr_ifnodes].nr_inodes = 0;
	intfuncnodes[nr_ifnodes].nr_snodes = 0;
	intfuncnodes[nr_ifnodes].nr_fnodes = 0;
	intfuncnodes[nr_ifnodes].nr_bnodes = 0;
	intfuncnodes[nr_ifnodes].param_nr = 0;
	nr_ifnodes++;
	return nr_ifnodes - 1;
}


int FindStringFuncNode(char* name)
{
	int i;
	for (i = 0;i<nr_sfnodes;i++)
	{
		if (!strcmp(name,stringfuncnodes[i].name))
		return i;
	}
	return -1;
}

int AddStringFuncNode(char *name)
{
	int i;
	i = FindFloatFuncNode(name);
	if (i!=-1)
	return -1;
	strcpy(stringfuncnodes[nr_sfnodes].name,name);
	stringfuncnodes[nr_sfnodes].nr_inodes = 0;
	stringfuncnodes[nr_sfnodes].nr_snodes = 0;
	stringfuncnodes[nr_sfnodes].nr_fnodes = 0;
	stringfuncnodes[nr_sfnodes].nr_bnodes = 0;
	stringfuncnodes[nr_sfnodes].param_nr = 0;
	nr_sfnodes++;
	return nr_sfnodes - 1;
}


int FindFloatFuncNode(char* name)
{
	int i;
	for (i = 0;i<nr_ffnodes;i++)
	{
		if (!strcmp(name,floatfuncnodes[i].name))
		return i;
	}
	return -1;
}

int AddFloatFuncNode(char *name)
{
	int i;
	i = FindFloatFuncNode(name);
	if (i!=-1)
	return -1;
	strcpy(floatfuncnodes[nr_ffnodes].name,name);
	floatfuncnodes[nr_ffnodes].nr_inodes = 0;
	floatfuncnodes[nr_ffnodes].nr_snodes = 0;
	floatfuncnodes[nr_ffnodes].nr_fnodes = 0;
	floatfuncnodes[nr_ffnodes].nr_bnodes = 0;
	floatfuncnodes[nr_ffnodes].param_nr = 0;
	nr_ffnodes++;
	return nr_ffnodes - 1;
}



int FindBoolFuncNode(char* name)
{
	int i;
	for (i = 0;i<nr_bfnodes;i++)
	{
		if (!strcmp(name,boolfuncnodes[i].name))
		return i;
	}
	return -1;
}

int AddBoolFuncNode(char *name)
{
	int i;
	i = FindFloatFuncNode(name);
	if (i!=-1)
	return -1;
	strcpy(boolfuncnodes[nr_bfnodes].name,name);
	boolfuncnodes[nr_bfnodes].nr_inodes = 0;
	boolfuncnodes[nr_bfnodes].nr_snodes = 0;
	boolfuncnodes[nr_bfnodes].nr_fnodes = 0;
	boolfuncnodes[nr_bfnodes].nr_bnodes = 0;
	boolfuncnodes[nr_bfnodes].param_nr = 0;
	nr_bfnodes++;
	return nr_bfnodes - 1;
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
	intnodes[nr_inodes].init = 0;
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
	intnodes[i].init = 1;
}

int FindBoolNode(char* name)
{
	int i;
	for (i = 0;i<nr_bnodes;i++)
	{
		if (!strcmp(name,boolnodes[i].name))
		return i;
	}
	return -1;
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

int AddBoolNode(char *name)
{
	if (FindBoolNode(name)!=-1)
	return 0;
	strcpy(boolnodes[nr_bnodes].name,name);
   boolnodes[nr_bnodes].val=0;
	boolnodes[nr_bnodes].init = 0;
	nr_bnodes++;
	return 1;
}

int UpdateBoolVal(char *name,int val)
{
	int i;
	i =FindBoolNode(name);
	if (i == -1)
	return 0;
    boolnodes[i].val=val;
	boolnodes[i].init = 1;
}

int AddStringNode(char *name)
{
	if (FindStringNode(name)!=-1)
	return 0;
	strcpy(stringnodes[nr_snodes].name,name);
	strcpy(stringnodes[nr_snodes].val,"\0");
	stringnodes[nr_snodes].init = 0;
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
	stringnodes[i].init = 1;
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
	floatnodes[nr_fnodes].init = 0;
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
	floatnodes[i].init = 1;
}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
yyparse();
} 