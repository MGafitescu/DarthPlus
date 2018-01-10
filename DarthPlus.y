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
%token IDint IDfloat IDstring BGIN END ASSIGN CALL TIPi TIPf TIPs PRINT
%token IF ELSE ENDIF FOR ENDFOR WHILE ENDWHILE COMP EQUAL DIFF
%token ADD MIN POW MUL DIV
%token <strval> STRING
%token <intval> INT
%start progr
%type <intval>assgnint
%type <intval>numberint
%type <strval>estring
%type <strval>assgnst
%type <intval>IDint
%type <strval>IDstring
%%
progr: declaratii bloc test {printf("Program corect sintactic\n");}
     ;

declaratii :  declaratie ';'
	   | declaratii declaratie ';'
	   ;
declaratie : TIPi IDint
           | TIPs IDstring
           | TIPi IDint '(' param_list ')'
           | TIPi IDint '(' ')'
           | TIPs IDstring '(' param_list ')'
           | TIPs IDstring '(' ')'
           ;
param_list : param
            | param_list ','  param 
            ;
            
param : TIPi IDint
      | TIPs IDstring
      /*trebuie adaugat si apeluri de functie*/ 
      ; 
      
/* bloc */
bloc : BGIN list END  
     ;
     
/* lista instructiuni */
list : statement 
	  | list statement
	  ;

statement :  assgnst ';' 
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