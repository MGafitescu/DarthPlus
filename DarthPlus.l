%{
#include <stdio.h>
#include "y.tab.h"
%}
%%
"Darth" {return TIPi;}
"Master" {return TIPf;}
"Senator" {return TIPs;}
"General" {return TIPb;}
"Station" {return TIPstruct;}
"~"[_a-zA-Z][_a-zA-Z0-9]* {strcpy(yylval.intnode.name,strdup(yytext)); return IDint;}
"::~"[_a-zA-Z][_a-zA-Z0-9]* {strcpy(yylval.intnode.name,strdup(yytext));return CIDint;}
\@[_a-zA-Z][_a-zA-Z0-9]* {strcpy(yylval.stringnode.name,strdup(yytext)); return IDstring;}
"::@"[_a-zA-Z][_a-zA-Z0-9]* {strcpy(yylval.stringnode.name,strdup(yytext));return CIDstring;}
\%[_a-zA-Z][_a-zA-Z0-9]* {strcpy(yylval.floatnode.name,strdup(yytext)); return IDfloat;}
"::%"[_a-zA-Z][_a-zA-Z0-9]* {strcpy(yylval.floatnode.name,strdup(yytext));return CIDfloat;}
\_[_a-zA-Z][_a-zA-Z0-9]* {strcpy(yylval.boolnode.name,strdup(yytext)); return IDbool;}
"::_"[_a-zA-Z][_a-zA-Z0-9]* {strcpy(yylval.boolnode.name,strdup(yytext)); return CIDbool;}
"$"[_a-zA-Z][_a-zA-Z0-9]* {return IDstruct;}
"Hello there!" {return BGIN;}
"The circle is now complete." {return END;}
"Print" {return PRINT;}
"What about the" {return IF;}
"Otherwise" {return ELSE;}
"Go, I will." {return ENDIF;}
"Do, or do not:" {return WHILE;}
"There is no try." {return ENDWHILE;}
"Once more" {return FOR;}
"The Sith will rule the Galaxy." {return ENDFOR;}
"Fire!" {return BEGIN_FUNCTION;}
"Halt!" {return END_FUNCTION;}
"|" {return OR;}
"&" {return AND;}
"!" {return NOT;}
"-" {return UMINUS;}

"<|" {return ASSIGN;}
"endl" {return ENDL;}
[0-9]|[1-9][0-9]+|"-"[0-9]|[1-9][0-9]+ {yylval.intval=atoi(yytext);return INT;}
([0-9]|[1-9][0-9]+)"."[0-9]*|"-"([0-9]|[1-9][0-9]+)"."[0-9]* {yylval.floatval=atof(yytext); return FLOAT;}
\"[ a-zA-Z]+\" {yylval.strval=strdup(yytext); yylval.strval[strlen(yylval.strval) - 1] = '\0'; strcpy(yylval.strval,yylval.strval + 1); return STRING;}
"true"|"false" {if(strcmp(yytext,"true")==0)yylval.boolval=1; else yylval.boolval=0; return BOOL;}

"<=" {return LE;}
">=" {return GE;}
"=" {return EQUAL;}
"!=" {return DIFF;}

[ \t] ;
\n {yylineno++;}
. {return yytext[0];}

 
