%{
#include <stdio.h>
#include "y.tab.h"
%}
%%
"Darth" {return TIPi;}
"Master" {return TIPf;}
"Senator" {return TIPs;}
"General" {return TIPb;}
"Hello there!" {return BGIN;}
"The circle is now complete." {return END;}
"Print" {return PRINT;}
"Execute order" {return CALL;}
"What about the" {return IF;}
"Otherwise" {return ELSE;}
"Go, I will." {return ENDIF;}
"Do, or do not:" {return WHILE;}
"There is no try." {return ENDWHILE;}
"Once more" {return FOR;}
"The Sith will rule the Galaxy." {return ENDFOR;}
"~"[_a-zA-Z][_a-zA-Z0-9]* {return IDint;}
"::~"[_a-zA-Z][_a-zA-Z0-9]* {return CIDint;}
\@[_a-zA-Z][_a-zA-Z0-9]* {return IDstring;}
"::@"[_a-zA-Z][_a-zA-Z0-9]* {return CIDstring;}
\$[_a-zA-Z][_a-zA-Z0-9]* {return IDfloat;}
"::$"[_a-zA-Z][_a-zA-Z0-9]* {return CIDfloat;}
\_[_a-zA-Z][_a-zA-Z0-9]* {return IDbool;}
"::_"[_a-zA-Z][_a-zA-Z0-9]* {return CIDbool;}
"+" {return ADD;}
"-" {return MIN;}
"^" {return POW;}
"*" {return MUL;}
"/" {return DIV;}
"|" {return OR;}
"&" {return AND;}
"!" {return NOT;}

"<|" {return ASSIGN;}
[0-9]|[1-9][0-9]+ {yylval.intval=atoi(yytext);return INT;}
[0-9]|[1-9][0-9]+'.'[0-9]* {yylval.floatval=atof(yytext); return FLOAT;}
\"[a-zA-Z]+\" {yylval.strval=strdup(yytext); return STRING;}
"true"|"false" {return BOOL;}
"<="|">="|"<"|">" {return COMP;}
"=" {return EQUAL;}
"!=" {return DIFF;}

[ \t] ;
\n {yylineno++;}
. {return yytext[0];}

 
