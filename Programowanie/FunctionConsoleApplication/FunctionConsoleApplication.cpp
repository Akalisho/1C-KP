
#include <iostream>

using namespace std;

/*
Funkcja:
- zbi�r instrukcji realizuj�cych zadanie.
- podprogram.

Budowa funkcji:
- nag��wek funkcji
- cia�o funkcji - instrukcje ograniczone nawiasami klamrowymi

Nag��wek
    typ_zwracanej_danej nazwa_zmiennej(parametry)
*/

void task1()
{
    cout << "Hello World!\n";
}

//Napisz funkcj� uniwersaln�, aby wy�wietli� dowolny tekst.
void task2(string textParam)
{
    cout << textParam << "\n";
}

//Napisz funkcj� uniwersaln�, kt�ra wy�wietli imi� oraz informacj� czy kto� jest pe�noletni czy nie.
void task3(string name, int age)
{
    if (age >= 18)
        cout << name << " jest pe�noletni/pe�noletnia.\n";
    else
        cout << name << " jest niepe�noletni/niepe�noletnia.\n";
}

//Napisz program, kt�ry przetestuje zachowanie si� przekazywanych danych przez parametr.
void task4(int number)
{
    cout << "Zmienna number w funkcji task4: " << number << "\n";
    number--;
    cout << "Zmienna number w funkcji task4: " << number << "\n";
}

void task5(int &number)
{
    cout << "Zmienna number w funkcji task4: " << number << "\n";
    number--;
    cout << "Zmienna number w funkcji task4: " << number << "\n";
}

//Napisz program, kt�ry pobierze od u�ytkownika liczb�.
void task6_GetNumber(int &number)//void nie wypuszcza warto�ci
{
    cout << "Podaj liczb�:\n";
    cin >> number;
}

int sumOfNumbers(int fn, int sn)//int wypuszcza warto��
{
    int s;
    s = fn + sn;
    return s;
}

int main()
{
    setlocale(LC_CTYPE, "polish");

    /*task1();
    task1();
    task2("Witaj �wiecie!!!");
    task2("Ala ma kota");
    string text = "Uczy� si� programowania!!!";
    task2(text);

    task3("Jan", 35);
    task3("Ala", 17);*/

    //int number = 5;
    //cout << "Zmienna number w funkcji main: " << number << "\n";
   // task4(number);
    //cout << "Zmienna number w funkcji main: " << number << "\n";

    // task4(9);
    //const int NUMBER = 9;
   // task4(NUMBER);

    //cout << "Zmienna number w funkcji main: " << number << "\n";
    //task5(number);
    //cout << "Zmienna number w funkcji main: " << number << "\n";      

    //task5(9) - //B��D - przez parametr mozna przekaza� tylko zmienn�
    //task5(NUMBER) - //B��D - przez parametr mo�na przekaza� tylko zmienn�

    //int numberFromUser = 5;
    //task6_GetNumber(numberFromUser);
    //cout << "U�ytkownik poda� liczb�: " << numberFromUser << "\n";

    int numberFromUser = 16;

    double result = sqrt(numberFromUser);

    int firstNumber, secondNumber, sum;
    firstNumber = 9;
    secondNumber = 1;
    sum = sumOfNumbers(firstNumber, secondNumber);
    cout << sum << "\n"; 
}