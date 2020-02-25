all: generator.exe

generator.exe: generator.o
		g++ -o generator.exe generator.o ./FourVector/FourVector.o \
		-I./FourVector \

generator.o: 
		g++ -c -o generator.o generator.cxx \

./FourVector/FourVector.o: ./FourVector/FourVector.cxx
		g++ -c -o ./FourVector/FourVector.o ./FourVector/FourVector.cxx

clean:
	rm generator.o generator.exe ./FourVector/FourVector.o
