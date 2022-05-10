#include <iostream>
using namespace std;

int main()
{
	cout << "Please input a number" << endl;
	int arrSize;
	cin >> arrSize;

	int* myArray = new int[arrSize];

	for (int i = 0; i < arrSize; i++)
	{
		myArray[i] = i * 2;
	}

	for (int i = 0; i < arrSize; i++)
	{
		cout << myArray[i] << endl;
	}

	delete[] myArray;

	return 0;
}