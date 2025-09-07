
HW03: HW03.o GuessingGame.o 
	clang++ HW03.o GuessingGame.o -o HW03

HW03.o: HW03.cpp
	clang++ -std=c++20 -g -Wall -c HW03.cpp

GuessingGame.o: GuessingGame.cpp
	clang++ -std=c++20 -g -Wall -c GuessingGame.cpp

clean:
	rm *.o *~ HW03
