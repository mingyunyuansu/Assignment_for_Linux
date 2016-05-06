main:main.o Date.o Student.o Crew.o Date.o
	gcc main.o Student.o Crew.o Date.o -o main
main.o:main.cpp
	gcc -c main.cpp
Student.o:Student.cpp
	gcc -c Student.cpp
Crew.o:Crew.cpp
	gcc -c Crew.cpp
Date.o:Date.cpp
	gcc -c Date.cpp

clean:
	rm main *.o

