a.out: main.o libass2_13CS30041.a
	gcc   main.o -L. -lass2_13CS30041 

main.o:	main.c myl.h
	gcc -Wall  -c main.c

libass2_13CS30041.a:	ass2_13CS30041.o
		ar -rcs libass2_13CS30041.a ass2_13CS30041.o

ass2_13CS30041.o:	ass2_13CS30041.c myl.h
	gcc -Wall  -c ass2_13CS30041.c
clean:
	rm a.out main.o libass2_13CS30041.a ass2_13CS30041.o
