// EvenOrOdd.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int eArray[5];

void populA(int eRay[])
{
	cout << "Enter 5 integers: " << endl;
	for (int i = 0; i < 5; i++) {

		cin >> eRay[i];
	}

	for (int i = 0; i < 5; i++)
	{
		if (eRay[i] % 2 == 0)
		{
			cout << eArray[i] << " is even." << endl;
		}
		else cout << eArray[i] << " is odd." << endl;
	}
}

int main()
{
	populA(eArray);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
