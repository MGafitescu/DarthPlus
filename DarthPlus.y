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
%token IF ENDIF FOR ENDFOR WHILE ENDWHILE COMP EGAL DIFERIT
%token <strval> STRING
%token <intval> INT
%start progr
%type <intval>asignareint
%type <strval>asignarest
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
           | TIPi IDint '(' lista_param ')'
           | TIPi IDint '(' ')'
           | TIPs IDstring '(' lista_param ')'
           | TIPs IDstring '(' ')'
           ;
lista_param : param
            | lista_param ','  param 
            ;
            
param : TIPi IDint
      | TIPs IDstring
      | TIPi IDint '(' lista_param ')'
      | TIPi IDint '(' ')'
      | TIPs IDstring '(' lista_param ')'
      | TIPs IDstring '(' ')'
      ; 
      
/* bloc */
bloc : BGIN list END  
     ;
     
/* lista instructiuni */
list :  asignarest ';' 
     | list asignarest ';'
     | asignareint ';'
     | list asignareint ';'
      | control 
      | list control 
      | print ';'
      | list print ';'
     ;

test:  
      ;

/*instructiuni de control*/
control: IF '(' exprlog ')''?' list  ENDIF {printf("Recunoscut if.\n");}
      | FOR '(' exprfor ')' list ENDFOR {printf("Recunoscut for. \n");}
      | WHILE '(' exprlog ')' list ENDWHILE {printf("Recunoscut while. \n");}
      ;

/*expresii logice*/
exprlog: exprlognr 
      | exprlogst 
      ;

exprlognr: IDint COMP IDint
      | IDint COMP INT
      | IDint EGAL IDint
      | IDint DIFERIT IDint
      | IDint EGAL INT
      | IDint DIFERIT INT
      | INT EGAL IDint
      | INT DIFERIT IDint
      | INT COMP IDint
      ;

exprlogst: IDstring EGAL STRING
      | IDstring DIFERIT STRING
      | IDstring EGAL IDstring 
      | IDstring DIFERIT IDstring
      | STRING EGAL IDstring
      | STRING DIFERIT IDstring
      ;            
/*expresii for*/
exprfor: asignareint ';' exprlognr ';' expresieint
      ;

/* instructiune */
asignarest: IDstring ASSIGN IDstring {$1=$3;}
         | IDstring ASSIGN STRING {$1=$3;} 		 
         ;
        
/* instructiune */
asignareint: IDint ASSIGN IDint {$1=$3;}
         | IDint ASSIGN INT {$1=$3;}  			 
         ;

numarint: IDint
      | INT
      ;

/*expresii algebrice cu numere*/
expresieint: numarint '+' numarint
            | numarint '-' numarint
            | numarint '^' numarint
            | numarint '*' numarint
            | numarint '/' numarint
            ;

estring: IDstring
      |STRING
      ;

expresiest: estring '+' estring
            | estring '*' numarint
            ;             

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