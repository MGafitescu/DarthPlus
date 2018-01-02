%{
#include <stdio.h>
#include "y.tab.h"
%}
%%
"Darth" {return TIPi;}
"Master" {return TIPf;}
"Senator" {return TIPs;}
"Hello there!" {return BGIN;}
"The circle is now complete." {return END;}
"Execute order" {return CALL;}
\~[_a-zA-Z][_a-zA-Z0-9]* {return IDint;}
\@[_a-zA-Z][_a-zA-Z0-9]* {return IDstring;}
\-[_a-zA-Z][_a-zA-Z0-9]* {return IDfloat;}
":=" {return ASSIGN;}
[0-9]|[1-9][0-9]+ {yylval.intval=atoi(yytext);return INT;}
\"[a-zA-Z]+\" {yylval.strval=strdup(yytext); return STRING;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}

 
