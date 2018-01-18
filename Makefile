DarthPlus: lex.yy.c y.tab.c structuri.h
	gcc lex.yy.c y.tab.c -o DarthPlus -ly -ll -lm

lex.yy.c: DarthPlus.l
	lex DarthPlus.l

y.tab.c:DarthPlus.y
	yacc DarthPlus.y -d -v

clean:
	rm lex.yy.c y.tab.c y.tab.h DarthPlus
