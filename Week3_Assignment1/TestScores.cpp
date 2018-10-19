#include "TestScores.h"
// getAverages function that calculates the average of the test scores in the array.
// It also checks if the score is negative or greater than 100.
double TestScores::getAverages(int score[]) const
{
	double average, scoreNumber, total = 0;
	for (int i = 0; i < SIZE; i++)
	{
		//If the score is negarive throw an exception using the NegativeScore class. 
		if (score[i] < 0)
		{
			throw NegativeScore(score[i]);
		}
		//If the score is greater than 100 throw an exception using the TooLargeScore class. 
		else if (score[i] > 100)
		{
			throw TooLargeScore(score[i]);
		}
		else
		{
			scoreNumber = score[i];
		}
		// Add the total of the scores.
		total = total + scoreNumber;		
	}
	// Calculate and return the average. 
	average = total / SIZE;
	return average;
}