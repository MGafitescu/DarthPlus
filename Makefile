limbaj: lex.yy.c limbaj.y 
	gcc lex.yy.c y.tab.c -o limbaj -ly -ll

lex.yy.c: limbaj.l
	lex limbaj.l

y.tab.c:limbaj.y
	yacc limbaj.y -d
	
