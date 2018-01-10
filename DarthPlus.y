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
float floatval;
char* strval;
}
%token IDint CIDint IDfloat CIDfloat IDstring CIDstring TIPi TIPf TIPs
%token BGIN END ASSIGN CALL PRINT
%token IF ELSE ENDIF FOR ENDFOR WHILE ENDWHILE 
%token COMP EQUAL DIFF
%token ADD MIN POW MUL DIV
%start progr
%token <strval> STRING
%token <intval> INT
%type <intval>assgnint
%type <intval>numberint
%type <strval>estring
%type <strval>assgnst
%type <intval>IDint
%type <strval>IDstring
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
      | TIPs IDstring
      /*trebuie adaugat si apeluri de functie*/ 
      ; 
      
/* bloc */
bloc: BGIN list END  
     ;
     
/* lista instructiuni */
list: statement 
	  | list statement
	  ;

statement:  assgnst ';' 
      | assgnint ';'
      | control 
      | print ';'
      | exprint ';'
      | exprst ';'
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
      | exprlogst 
      ;

      
/*expresii logice cu numere*/
exprlognr: numberint COMP numberint
      | numberint EQUAL numberint
      | numberint DIFF numberint
      ;

/*expresii logice cu stringuri*/
exprlogst: estring EQUAL estring
      | estring DIFF estring
      ;        
	      
/*expresii for*/
exprfor: assgnint ';' exprlognr ';' exprint
      ;

/* assgn la stringuri */
assgnst: IDstring ASSIGN estring {$1=$3;}
         ;
        
/* assgn la intregi */
assgnint: IDint ASSIGN numberint {$1=$3;}
         ;

/*tipul de date numere intregi*/
numberint: IDint
      | INT
      ;
/*tipul de date string*/
estring: IDstring
      |STRING
      ;

/*expresii algebrice cu numere*/
exprint: IDint  ASSIGN numberint operator numberint
        ;

operator: ADD
        | MIN
	    | POW 
	    | MUL
	    | DIV 
	    ;


/*expresii algebrice cu stringuri*/
exprst: IDstring ASSIGN estring ADD estring
            |IDstring ASSIGN estring MUL numberint
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