// Specification file for the Rectangle class.
#ifndef TESTSCORES_H
#define TESTSCORES_H
// For array size.
const int SIZE = 3;
class TestScores
{
private:
	int arrayOfTestScores[SIZE];
public:
	// Default constructor for TestScores class.
	TestScores()
	{
		for (int i = 0; i < SIZE; i++)
			arrayOfTestScores[i] = 0;
	}
	// Constructor for TestScores class that accepts an array test scores as its argument.
	TestScores(int score[], int size)
	{
		for (int i = 0; i < size; i++)
			arrayOfTestScores[i] = score[i];
	}
	// Exception class for a negtive score.
	class NegativeScore
	{
	private:
		int score;
	public:
		// Constructor for NegativeScore exception class that sets the score. 
		NegativeScore(int s)
		{
			score = s;
		}
		// Accessor function that returns the score. 
		int getScore() const
		{
			return score;
		}
	};
	// Exception Class for a large score;
	class TooLargeScore
	{
	private:
		int score;
	public:
		// Constructor for TooLargeScore exception class that sets the score. 
		TooLargeScore(int s)
		{
			score = s;
		}
		// Accessor function that returns the score. 
		int getScore() const
		{
			return score;
		}
	};
	// Accessor function getAverages, defined in TestScores.cpp
	double getAverages(int[]) const;
};
#endif 
