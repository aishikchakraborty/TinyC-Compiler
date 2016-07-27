a.out: lex.yy.o ass4_13CS30041.o y.tab.o
	g++ -w lex.yy.o ass4_13CS30041.o y.tab.o -lfl
	echo "Use \"make run\" to run"
y.tab.o : y.tab.c y.tab.h
	g++ -w -c y.tab.c
lex.yy.o: lex.yy.c
	g++ -w -c lex.yy.c
lex.yy.c: ass4_13CS30041.l y.tab.h
	flex ass4_13CS30041.l
ass4_13CS30041.o : ass4_13CS30041.c
	g++ -w -c ass4_13CS30041.c
y.tab.h: ass4_13CS30041.y
	yacc -dtv ass4_13CS30041.y
y.tab.c:ass4_13CS30041.y 
	yacc -dtv ass4_13CS30041.y
	
clean:
	rm a.out y.tab.o y.tab.h y.tab.c lex.yy.c y.output lex.yy.o ass4_13CS30041.o

run:
	./a.out<ass4_13CS30041_test.c
