program: main.o address.o date.o student.o
	g++ -o program main.o address.o date.o student.o

main.o: main.cpp
	g++ -c main.cpp

address.o: address.cpp address.h
	g++ -c address.cpp

date.o: date.cpp date.h
	g++ -c date.cpp

student.o: student.cpp student.h
	g++ -c student.cpp

run: program
	./program

debug: program
	gdb ./program

valgrind: program
	valgrind ./program

clean:
	rm -f *.o program
