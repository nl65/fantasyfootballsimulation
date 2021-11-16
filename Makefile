all: FantasyFB

Player.o:	Player.cpp Player.h
	g++ -std=c++14 -c -g -Wall Player.cpp

user_input.o: 	user_input.cpp user_input.h
	g++ -std=c++14 -c -g -Wall user_input.cpp

FantasyFB.o:	FantasyFB.cpp Player.h user_input.h
	g++ -std=c++14 -c -g -Wall FantasyFB.cpp

FantasyFB:	Player.o user_input.o FantasyFB.o
	g++ -std=c++14 -o fantasy Player.o user_input.o FantasyFB.o

clean:
	rm fantasy FantasyFB.o user_input.o Player.o
