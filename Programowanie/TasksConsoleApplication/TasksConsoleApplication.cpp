
#include <iostream>

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
                        
                    else
                        result = firstNumber / secondNumber;

    if (operationNumber > 4 || operationNumber < 1)
        cout << "Dzia�anie niepoprawne.";
    else
        cout << "Wynik operacji matematycznej: " << result;
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}