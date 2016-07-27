a.out : lex.yy.o ass3_13CS30041.o y.tab.o
	g++ lex.yy.o ass3_13CS30041.o y.tab.o -lfl
	echo "Enter "make run" to run."
y.tab.o : y.tab.c y.tab.h
	g++ -w -c y.tab.c
lex.yy.o: lex.yy.c
	g++ -w -c lex.yy.c
lex.yy.c: ass3_13CS30041.l y.tab.h
	flex ass3_13CS30041.l
ass3_13CS30041.o : ass3_13CS30041.c
	g++ -w -c ass3_13CS30041.c
y.tab.h: ass3_13CS30041.y
	yacc -dtv ass3_13CS30041.y
y.tab.c: ass3_13CS30041.y
	yacc -dtv ass3_13CS30041.y
clean:
	rm a.out lex.yy.o ass3_13CS30041.o lex.yy.c y.tab.c y.tab.h y.tab.o  y.output
run:
	./a.out < ass3_13CS30041_test.c


	
