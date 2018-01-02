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
%token IDint IDfloat IDstring BGIN END ASSIGN CALL TIPi TIPf TIPs
%token <strval> STRING
%token <intval> INT
%start progr
%%
progr: declaratii bloc {printf("Program corect sintactic\n");}
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
      ; 
      
/* bloc */
bloc : BGIN list END  
     ;
     
/* lista instructiuni */
list :  statement ';' 
     | list statement ';'
     ;

/* instructiune */
statement: IDint ASSIGN IDint
         | IDint ASSIGN INT  		 
         | CALL IDint '(' lista_apel ')'
         | IDstring ASSIGN IDstring
         | IDstring ASSIGN STRING 		 
         | CALL IDstring '(' lista_apel ')'
         ;
        
lista_apel : INT
           | lista_apel ',' INT
           ;
%%
int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
yyparse();
} 