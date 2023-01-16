include make.properties

run:
	make compile
	./bin/glscli
	
compile:
	g++ src/main.cpp -o bin/glscli -std=c++17

valgrind:
	valgrind -v	./bin/glscli