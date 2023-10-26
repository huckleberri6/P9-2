
#include <iostream>
using namespace std;

const int SIZE = 6;

// function prototypes
bool isSortedIncreasing(int values[], int size);

int main()
{
	int values[SIZE] = {1, 2, 3, 6, 5, 6};
	bool b = isSortedIncreasing(values, SIZE);
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
