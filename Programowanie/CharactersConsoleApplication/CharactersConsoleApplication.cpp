// CharactersConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//Napisz program, kt�ry pobierze od uzytkownika znak i wy�wietli go.

void task1()
{
    char characterFromUser;
    cout << "Podaj znak: \n";
    cin >> characterFromUser;

    cout << "Poda�e� znak: " << characterFromUser << "\n";
}

//Napisz program, kt�ry wczyta znak z klawiatury
//i sprawdzi czy jest ma�a litera alfabetu.

void task2()
{
    char characterFromUser;
    cout << "Podaj znak: \n";
    cin >> characterFromUser;

    if (characterFromUser >= 'a' && characterFromUser <= 'z')
        cout << "Jest to ma�a litera alfabetu.";
    else
        cout << "Jest to du�a litera alfabetu.";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task2();
}

/*
Typy znakowe:
char - 1 bajt, ca�kowitoliczbowa ze znakiem <-128; 127> 
*/