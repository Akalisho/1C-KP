
#include <iostream>

using namespace std;

void task1()
{
	int numberFromUser;
	std::cout << "Podaj liczb� doodatni�:\n";
	std::cin >> numberFromUser;
	if (numberFromUser < 0)
	{
		std::cout << "Podaj liczb� doodatni�:\n";
		std::cin >> numberFromUser;
		if (numberFromUser < 0)
		{
			std::cout << "Podaj liczb� doodatni�:\n";
			std::cin >> numberFromUser;
			if (numberFromUser < 0)
			{
				std::cout << "Podaj liczb� doodatni�:\n";
				std::cin >> numberFromUser;
				if (numberFromUser < 0)
				{
					std::cout << "Podaj liczb� doodatni�:\n";
					std::cin >> numberFromUser;
					//wklejamy ca�ego If'a
				}
			}
		}
	}

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

void task2()
{
	int numberFromUser;

	do
	{
		std::cout << "Podaj liczb� doodatni�:\n";
		std::cin >> numberFromUser;
	} while (numberFromUser < 0);

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

//Napisz program, kt�ry wylosuje liczbe, a u�ytkownik b�dzie musia� zgadn��.

void task3()
{
	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 100;
	srand(time(NULL));
	int randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	int numberFromUser;
	do
	{
		std::cout << "Podaj liczbe: \n";
		std::cin >> numberFromUser;
		if (numberFromUser > randomNumber)
			std::cout << "Mniej.\n";
		if (numberFromUser < randomNumber)
			std::cout << "Wiecej.\n";
	} while (numberFromUser != randomNumber);

	std::cout << "Gratulacje u�ytkowniku!! Zainstalowa�e� Albion Online!!";
}

//Napisz program wy�wietlaj�cy liczby z przedzia�u <1;6>
void task4()
{
	unsigned long long upperRange;
	unsigned long long currentNumber = 0;
	std::cout << "Podaj zakres gorny wiekszy badz rowny 1: \n";
	std::cin >> upperRange;
	do
	{
		//currentNumber = currentNumber + 1
		//currentNumber += 1
		//currentNumber++
		++currentNumber;
		std::cout << currentNumber << ", ";
	} while (upperRange > currentNumber);
}

//Napisz program, kt�ry policzy sum� cyfr podanej przez u�ytkownika liczby.
void task5()
{
	int number;
	std::cout << "Podaj liczb�\n";
	std::cin >> number;

	int sum = 0;
	int rest;

	/*
	rest = number % 10;
	sum = sum + rest;
	number = number / 10;
	if (number != 0)
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
		if (number != 0)
		{
			rest = number % 10;
			sum = sum + rest;
			number = number / 10;
			if (number != 0)
			{
				rest = number % 10;
				sum = sum + rest;
				number = number / 10;
				//if (number != 0) ...
			}
		}
	}
	*/

	do
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	} while (number != 0);

	std::cout << "Suma " << sum << "\n";
}

//Popro� u�ytkownika o podawanie liczb, a� wprowadzi zero.
//Oblicz sum� oraz �redni� arytmetyczn�.

void task6()
{
	int number, i;
	double sum;
	sum = 0;
	i = 0;
	do
	{
		std::cout << "Podaj liczbe: \n";
		std::cin >> number;
		sum += number;
		i += 1;
	} while (number != 0);

	std::cout << "Suma to: " << sum << "\n";
	std::cout << "�rednia arytmetyczna to: " << sum / i << "\n";
}

//Napisz program, kt�ry poprosi u�ytkownika o podanie dowolnej liczby ca�kowitej.
//Nast�pnie program powinien obliczy� i wy�wietli� liczb� cyfr.

void task7()
{
	unsigned long long number;
	double numberOfNumbers = 0;
	std::cout << "Podaj liczbe.\n";
	std::cin >> number;

	do
	{
		number = number / 10;
		numberOfNumbers++;
	} while (number != 0);

	std::cout << "Ilosc cyfr w podanej liczbie to: " << numberOfNumbers;
}

int main()
{
	task7();
}