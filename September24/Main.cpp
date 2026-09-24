// Sept24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include"HiLo.h" // why double quotes "" and not angle brackets <>
                     //just drive the car

using namespace std;

int main()
{
	//first, generate a random number
	const int N = 100; //const means "constant"
	//N = 123; //leads to a syntax error

	int randomNumber = getRandomNumberBetween1AndN(100);
	//then, prompt the user for guesses WHILE guess != randomNumber

	cout << "The random number to guess is: " <<  

	//then, output the number of guesses it took
	// (should the player LOSE if too many guesses?)
}