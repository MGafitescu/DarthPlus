all:
	lex limbaj.l
	yacc limbaj.y -d
	gcc lex.yy.c y.tab.c -o limbaj -ly -ll
