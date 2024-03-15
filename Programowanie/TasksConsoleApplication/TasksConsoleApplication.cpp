
#include <iostream>
#include <string>

using namespace std;

/*
Zadanie: Tworzenie prostego kalkulatora

Napisz program, kt�ry b�dzie dzia�a� jako prosty kalkulator
i b�dzie umo�liwia� u�ytkownikowi wykonywanie
podstawowych operacji arytmetycznych na dw�ch liczbach.

Instrukcje:

Popro� u�ytkownika o podanie dw�ch liczb oraz wyb�r operacji (dodawanie, odejmowanie, mno�enie lub dzielenie).
W zale�no�ci od wyboru u�ytkownika, wykonaj odpowiedni� operacj� arytmetyczn�.
Wy�wietl wynik operacji.
Przyk�adowe dzia�anie programu:

Prosty Kalkulator
-----------------
1. Dodawanie
2. Odejmowanie
3. Mno�enie
4. Dzielenie
inna liczba ko�czy program.

Wybierz operacj�: 3
Podaj pierwsz� liczb�: 5
Podaj drug� liczb�: 3

Wynik mno�enia: 15
*/


void task1()
{
    int operationNumber, firstNumber, secondNumber, result = 0;
    cout << "Wybierz operacj� (1 - 4): \n1. Dodawanie\n2. Odejmowanie\n3. Mno�enie\n4. Dzielenie\n";
    cin >> operationNumber;
    cout << "Podaj pierwsz� liczb�: \n";
    cin >> firstNumber;
    cout << "Podaj drug� liczb�: \n";
    cin >> secondNumber;
    
    if (operationNumber == 1)
        result = firstNumber + secondNumber;
    else
        if (operationNumber == 2)
            result = firstNumber - secondNumber;
        else
            if (operationNumber == 3)
                result = firstNumber * secondNumber;
            else
                if (operationNumber == 4)
                    if (secondNumber == 0)
                        cout << "Koniec Programu.";
                    else
                        result = firstNumber / secondNumber;

    if (operationNumber > 4 || operationNumber < 1)
        cout << "Dzia�anie niepoprawne.";
    else
        cout << "Wynik operacji matematycznej: " << result;
}

/*
ZADANIE
Konwersja temperatury

Napisz program, kt�ry b�dzie konwertowa� temperatur� pomi�dzy skalami: Celsiusza, Fahrenheita i Kelvina.

Instrukcje:

Popro� u�ytkownika o wyb�r jednostki, z kt�rej chce dokona� konwersji (C - Celsiusz, F - Fahrenheit, K - Kelvin).
Popro� u�ytkownika o podanie temperatury w wybranej jednostce.
Przelicz temperatur� na pozosta�e jednostki (z wykorzystaniem odpowiednich wzor�w konwersji).
Wy�wietl przeliczone temperatury.
Przyk�adowe dzia�anie programu:

Konwerter Temperatur
---------------------
Wybierz jednostk� temperatury:
1. Celsiusz (C)
2. Fahrenheit (F)
3. Kelvin (K)
Wyb�r: C

Podaj temperatur� w stopniach Celsiusza: 25

Przeliczona temperatura:
Fahrenheit: 77.0 �F
Kelvin: 298.15 K
*/

void showMenuTemperature()
{
    cout << "Wybierz operacj� (1 - 3): \n";
    cout << "-------------------------\n";
    cout << "1. Celcjusz (C)\n";
    cout << "2. Fahrenheit (F)\n";
    cout << "3. Kelvin (K)\n";
    cout << "0. Koniec Programu\n";
}

void task2()
{
    while (true)
    {
        showMenuTemperature;

        int conversionChoice;
        cout << "Wyb�r: \n";
        cin >> conversionChoice;

        if (conversionChoice == 0 || conversionChoice > 3 || conversionChoice < 0)
            cout << "Koniec programu.";
            break;

        double Celcius, Fahrenheit, Calvin;
        if (conversionChoice == 1)
            cout << "Podaj temperatur� w stopniach Celcjusza:";
            cin >> Celcius;
       if (conversionChoice == 2)
                cout << "Podaj temperatur� w stopniach Celcjusza:";
            cin >> Fahrenheit;
       if (conversionChoice == 3)
                cout << "Podaj temperatur� w stopniach Celcjusza:";
            cin >> Calvin;
            
    }


}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task2();
}