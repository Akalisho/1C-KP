
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

int main()
{
    setlocale(LC_CTYPE, "polish");

    task1();
    task1();
    task2("Witaj �wiecie!!!");
    task2("Ala ma kota");
    string text = "Uczy� si� programowania!!!";
    task2(text);

    task3("Jan", 35);
    task3("Ala", 17);
}