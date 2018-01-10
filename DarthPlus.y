%{
#include <stdio.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
int yylex();
int yyerror(char * s);
%}
%union {
int intval;
double floatval;
char* strval;
int boolval;
}
%token IDint CIDint IDfloat CIDfloat IDstring CIDstring IDbool CIDbool TIPi TIPf TIPs TIPb
%token BGIN END ASSIGN CALL PRINT
%token IF ELSE ENDIF FOR ENDFOR WHILE ENDWHILE 
%token COMP EQUAL DIFF NOT AND OR
%token ADD MIN POW MUL DIV
%start progr
%token <strval> STRING
%token <intval> INT
%token <floatval> FLOAT
%token <boolval> BOOL
%type <intval>assgnint
%type <intval>numberint
%type <strval>estring
%type <strval>assgnst
%type <intval>IDint
%type <strval>IDstring
%type <boolval>IDbool
%type <floatval>IDfloat
%%
progr: declarations bloc test {printf("Program corect sintactic\n");}
     ;

declarations:  declaration ';'
	   | declarations declaration ';'
	   ;

declaration: TIPi intdecl
           | TIPs stringdecl
           ;

intdecl: IDint
       | IDint '(' param_list_decl ')'
	   | CIDint ASSIGN numberint
	   ;

stringdecl: IDstring
		  | IDstring '(' param_list ')'
		  | CIDstring ASSIGN estring
		  ;

param_list_decl: 
          | params_decl 
          ;

params_decl: param_decl
	  | params_decl ',' param_decl 
	  ;
            
param_decl: TIPi intdecl
      | TIPs stringdecl
      /*trebuie adaugat si apeluri de functie*/ 
      ; 

param_list: 
          | params 
          ;

params: param
	  | params ',' param 
	  ;
            
param: TIPi IDint

/* bloc */
bloc: BGIN list END  
     ;
     
/* lista instructiuni */
list: statement 
	  | list statement
	  ;

statement:  assgnst ';' 
      | assgnint ';'
      | assgnfl ';'
      | assgnbl ';'
      | control 
      | print ';'
     ;

test:  
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
      ;

      
/*expresii logice cu numere*/
exprlognr: gnumber COMP gnumber
      | gnumber EQUAL gnumber
      | gnumber DIFF gnumber
      ;

/*expresii logice cu stringuri*/
exprlogst: estring EQUAL estring
      | estring DIFF estring
      ;        
	      
/*expresii for*/
exprfor: assgnint ';' exprlognr ';' assgnint
      ;

/* assgn la stringuri */
assgnst: IDstring ASSIGN estring {$1=$3;}
      |  IDstring ASSIGN exprst
      ;
        
/* assgn la intregi */
assgnint: IDint ASSIGN numberint {$1=$3;}
      |   IDint ASSIGN exprint 
      ;


/*assgn la bool */
assgnbl: IDbool ASSIGN ebool
      |  IDbool ASSIGN exprlog
      |  IDbool ASSIGN exprbl
      ;

/*assgn la float */
assgnfl: IDfloat ASSIGN numberfl
      |  IDfloat ASSIGN exprfl
      ;

/*tipul de date numere intregi*/
numberint: IDint
      | INT
      ;

/*tipul de date numere float*/
numberfl: IDfloat
      | FLOAT  
      ;

/*tipul de date numar*/
gnumber: numberfl
      | numberint
      ;

/*tipul de date bool*/      
ebool:  IDbool
      | BOOL
      ;

/*tipul de date string*/
estring: IDstring
       |  STRING
       ;

/*operatori algebrici*/
aoperator: ADD
         |  MIN
	   |  POW 
	   |  MUL
	   |  DIV 
	   ;

/*operatori logici*/
loperator:    OR
            | NOT
            | AND  
            ;

/*expresii algebrice cu numere intregi*/
exprint:  numberint aoperator numberint
        ;

/*expresii algebrice cu  numere */
exprfl: gnumber aoperator gnumber
      ;      

/*expresii algebrice cu stringuri*/
exprst:  estring ADD estring
      |  estring MUL numberint
      ;    

/*expresii cu bool*/
exprbl:  ebool loperator ebool
      ;           

/*functia de printare*/
print: PRINT '(' IDstring ')' {printf("S-a recunoscut: %s\n",$<strval>$);}
      |  PRINT '(' IDint ')' {printf("S-a recunoscut: %d\n",$<intval>$);}
      ;

%%
int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
yyparse();
} 