// University of Advancing Technology
// CSC-215
// Assignment 04 - Skynet HK-Aerial Wargames
// Josh Sharrer

#include "pch.h"
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <Windows.h>
using namespace std;

int main()
{
	// Random Number Variables
	srand((int)time(0)); // Create a seed using the current time to ensure we are getting different results
	int targetLocation = rand() % 64 + 1; // Create a random number for targetLocation between 1 and 64

	// Human Player Variables
	int humanGuess = 0;
	int humanGuessCounter = 1;
	
	// Linear Search Variables
	int searchGridLinear = 1;
	int linearPingNumber = 1;

	// Random Search Variables
	int randomPingNumber = 1;

	// Binary Search Variables
	int searchGridLowNumber = 1; // Set the searchGridLowNumber as an integer so that it may be used later
	int searchGridHighNumber = 64; // Set the searchGridHighNumber as an integer so that it may be used later
	int pingNumber = 0; // Set the current ping count to zero so that it will be accurate on the first run

	
	cout << "Generating Random enemy location on 8x8 grid...." << endl;
	cout << "The enemy is located on an 8x8 grid with 1-64 sectors." << endl;
	cout << "See if you can find the enemy sector!" << endl;
	cout << "**********************************************" << endl;
	cout << "What is your first guess:" << endl;
	cin >> humanGuess;
	while (true) // Human Search
	{
		if (humanGuess == targetLocation) {
			cout << "Correct!" << endl;
			break;
		}
		else if (humanGuess <= targetLocation) {
			humanGuessCounter++;
			cout << "Too low! Please guess again:" << endl;
			cin >> humanGuess;
		}

		else if (humanGuess >= targetLocation) {
			humanGuessCounter++;
			cout << "Too high! Please guess again:" << endl;
			cin >> humanGuess;
		}
	}
	cout << "**********************************************" << endl;
	cout << "* All drones have now found the enemy." << endl;
	cout << "* The Enemy was hiding at grid location " << targetLocation << endl;
	cout << "*" << endl;
	cout << "* The Human Player using a Human Search took " << humanGuessCounter << " guesses to find the enemy location. Final target prediction was " << humanGuess
		 << endl;
	while (true) // Linear Search
	{
		if (searchGridLinear == targetLocation) {
			cout << "* The AI Player using Linear Search took " << linearPingNumber << " guesses to find the enemy location. Final target prediction was " << searchGridLinear << endl;
			break;
		}
		else if (searchGridLinear != targetLocation) {
			linearPingNumber++;
			searchGridLinear++;
		}
	}

	while (true) // Random Search
	{
		int randomTargetLocationPrediction = rand() % 64 + 1;

		if (randomTargetLocationPrediction == targetLocation) {
			cout << "* The AI Player using Random Search took " << randomPingNumber << " guesses to find the enemy location. Final target prediction was " << randomTargetLocationPrediction << endl;
			break;
		}
		else if (randomTargetLocationPrediction != targetLocation) {
			randomTargetLocationPrediction = rand() % 64 + 1;
			randomPingNumber++;
		}
	}

	while (true) // Binary Search
	{
		int targetLocationPrediction = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
		pingNumber++;

		if (targetLocationPrediction == targetLocation) {
			cout << "* The AI Player using Binary Search took " << pingNumber << " guesses to find the enemy location. Final target prediction was " << targetLocationPrediction << endl;
			break;
		}
		else if (targetLocationPrediction > targetLocation) {
			searchGridHighNumber = targetLocationPrediction - 1;
		}
		else if (targetLocationPrediction < targetLocation) {
			searchGridLowNumber = targetLocationPrediction + 1;
		}
	}
	cout << "**********************************************" << endl;
	string playAgain = "Y";
	cout << "Would you like to play again? Y/N" << endl;
	cin >> playAgain;
	while (true) {
		if (playAgain == "Y") {
			main();
		}
		else if (playAgain == "N") {
			cout << "Thanks for playing!" << endl;
			Sleep(1500);
			exit (0);
		}
		else {
			cout << "Please input Y or N..." << endl;
			cin >> playAgain;
		}
	}
	return system("PAUSE");
}