%{
#include <stdio.h>
#include "y.tab.h"
%}
%%
"Darth" {return TIPi;}
"Master" {return TIPf;}
"Senator" {return TIPs;}
"Hello there!" {return BGIN;}
"Print" {return PRINT;}
"The circle is now complete." {return END;}
"Execute order" {return CALL;}
"What about the" {return IF;}
"Go, I will." {return ENDIF;}
"Do, or do not:" {return WHILE;}
"There is no try." {return ENDWHILE;}
"Once more" {return FOR;}
"The Sith will rule the Galaxy." {return ENDFOR;}
\~[_a-zA-Z][_a-zA-Z0-9]* {return IDint;}
\@[_a-zA-Z][_a-zA-Z0-9]* {return IDstring;}
\-[_a-zA-Z][_a-zA-Z0-9]* {return IDfloat;}
"<|" {return ASSIGN;}
[0-9]|[1-9][0-9]+ {yylval.intval=atoi(yytext);return INT;}
\"[a-zA-Z]+\" {yylval.strval=strdup(yytext); return STRING;}
"<="|">="|"<"|">" {return COMP;}
"=" {return EGAL;}
"!=" {return DIFERIT;}

[ \t] ;
\n {yylineno++;}
. {return yytext[0];}

 