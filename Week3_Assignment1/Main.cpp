// Name: Lilit Khamalyann
// Class: CISS 243
// Date: 09/19/2018
#include <iostream>
#include "TestScores.h"
using namespace std;
int main()
{
	bool tryAgain = true; // Flag to reread input
	int score[SIZE]; // Array to hold the scores 
	cout << "Enter three test scores and the program will calculate the average." << endl;
	while (tryAgain)
	{
		// Get the input from the user. 
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Please enter the test scores number " << i+1 << ": ";
		cin >> score[i];
	}
		try
		{
			// Create arrayOfScores instance of the TestSores. 
			TestScores arrayOfScores(score, SIZE);
			// Display the average of the scores. 
			cout << "The average of the score is " << arrayOfScores.getAverages(score) << endl;
			// if no exception was thrown, then the next statement will execute
			tryAgain = false;
		}
		catch (TestScores::NegativeScore error1)
		{
			// Displays an error message. 
			cout << "Error " <<error1.getScore() << " is a negative number. Enter a valid score." << endl;
		}
		catch (TestScores::TooLargeScore error2)
		{
			// Displays an error message. 
			cout << "Error " << error2.getScore() << " is greater than 100. Enter a valid score." << endl; 
		}
	}
	system("pause");
	return 0;
}