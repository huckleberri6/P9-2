
#include <iostream>
using namespace std;

const int SIZE = 6;

// function prototypes
bool isSortedIncreasing(int values[], int size);
bool isSortedDecreasing(int values[], int size);
bool hasAdjacentDuplicates(int values[], int size);
bool hasDuplicates(int values[], int size);

int main()
{
	int values[SIZE];
	for (int i = 0; i < 6; i++)
	{
		int input;
		cout << "Enter integer #" << i << ": ";
		cin >> input;
		values[i] = input;
	}
	
	if (isSortedIncreasing(values, SIZE))
		cout << "The data are increasing." << endl;
	else
		cout << "The data are not increasing." << endl;

	if (isSortedDecreasing(values, SIZE))
		cout << "The data are decreasing." << endl;
	else
		cout << "The data are not decreasing." << endl;

	if (hasAdjacentDuplicates(values, SIZE))
		cout << "The data has adjacent duplicates." << endl;
	else
		cout << "The data does not have adjacent duplicates." << endl;

	if (hasDuplicates(values, SIZE))
		cout << "The data has duplicates." << endl;
	else
		cout << "The data does not have duplicates." << endl;
}

bool isSortedIncreasing(int values[], int size) 
{
	for (int i = 0; i < size - 1; i++)
	{
		if (values[i] > values[i + 1])
			return false;
	}
	return true;
}

bool isSortedDecreasing(int values[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (values[i] < values[i + 1])
			return false;
	}
	return true;
}

bool hasAdjacentDuplicates(int values[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (values[i] == values[i + 1])
			return true;
	}
	return false;
}

bool hasDuplicates(int values[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (values[i] == values[j])
				return true;
		}
	}
	return false;
}
