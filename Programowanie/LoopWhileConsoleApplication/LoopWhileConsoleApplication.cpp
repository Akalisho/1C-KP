// LoopWhileConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//Napisz program, kt�ry policzy sum� cyfr podanej przez u�ytkownika liczby.

void task1()
{
	int number;
	std::cout << "Podaj liczbe\n";
	std::cin >> number;

	int sum = 0;
	int rest;

	while (number != 0);
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	}
	std::cout << "Suma " << sum << "\n";
}

//Napisz program, kt�ry obliczy NWD dw�ch liczb.

void task2()
{
	int firstNumber, secondNumber;
	cout << "Podaj pierwsza liczbe: \n";
	cin >> firstNumber;
	cout << "Podaj druga liczbe: \n";
	cin >> secondNumber;
	
	int nwd;

	nwd = firstNumber;
	/*
	
	if (secondNumber % nwd != 0
		|| firstNumber % nwd != 0)
	{
		nwd--;
			if (secondNumber % nwd != 0
			|| firstNumber % nwd != 0)
		{
			nwd--;
					if (secondNumber % nwd != 0
				|| firstNumber % nwd != 0)
			{
				nwd--;
							if (secondNumber % nwd != 0
					|| firstNumber % nwd != 0)
				{
					nwd--;
				}
			}
		}
	}
		
	
	*/

	while (secondNumber % nwd != 0 || firstNumber % nwd != 0)
	{
		nwd--;
	}

	cout << "NWD = " << nwd << "\n";
}

int main()
{
	task2();
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
