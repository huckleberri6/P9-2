
#include <iostream>
using namespace std;

const int SIZE = 6;

// function prototypes
bool isSortedIncreasing(int values[], int size);
bool isSortedDecreasing(int values[], int size);

int main()
{
	int values[SIZE] = {6, 5, 4, 3, 2, 1};
	bool b = isSortedDecreasing(values, SIZE);
	cout << b;
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
