
#include <iostream>

using namespace std;

//Napisz program, kt�ry wczyta, np. 5 liczb, a nast�pnie je wy�wietli w odwrotnej kolejno�ci.
void task1()
{
    const unsigned short ARRAY_SIZE = 5;
    //std::cin >> ARRAY_SIZE; //Jest b��d, sta�a nie mo�e by� u�yta w cin, bo to dla zmiennych.
    int numbers[ARRAY_SIZE];
    //numbers[2] = 70;

    /*
    cout << "Podaj dan�:\n";
    cin >> numbers[0];
    cout << "Podaj dan�:\n";
    cin >> numbers[1];
    cout << "Podaj dan�:\n";
    cin >> numbers[2];
    cout << "Podaj dan�:\n";
    cin >> numbers[3];
    cout << "Podaj dan�:\n";
    cin >> numbers[4];
    */

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Podaj dan�:\n";
        cin >> numbers[i];
    }

    cout << "Podane dane w odwrotnej kolejno�ci:\n";
    for (int i = ARRAY_SIZE - 1; i >= 0; i--)
    {
        cout << numbers[i] << ", ";
    }
    cout << "\n";
}

void task2()
{
    //<LOWER_RANGE; UPPER_RANGE>, przy za�o�eniu, �e UPPER_RANGE <= LOWER_RANGE
    const unsigned short LOWER_RANGE = 5;
    const unsigned short UPPER_RANGE = 7;
    const unsigned ARRAY_SIZE = 3;
    int numbers[ARRAY_SIZE] = {};
    srand(time(0));
    cout << "Wylosowane liczby:\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
        cout << numbers[i] << ", ";
    }
    cout << "\n";

    int sum = 0;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        sum = sum + numbers[i];
    }
    double avg = sum * 1.0 / ARRAY_SIZE;
    cout << "�rednia wynosi: " << avg << "\n";
}

//Napisz program, kt�ry uzupe�ni tablic� liczbami losowymi, a  nast�pnie znajdzie minimum i maksimum.

void task3()
{
    const unsigned short LOWER_RANGE = 0;
    const unsigned short UPPER_RANGE = 100;
    const unsigned ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE] = {};
    srand(time(0));
    cout << "Wylosowane liczby:\n";
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
        cout << numbers[i] << ", ";
    }
    cout << "\n";

    //---------------------------------------------------------------------------

    int max = numbers[0];
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (numbers[i] > max)
            max = numbers[i];
    }
    cout << "Max to: " << max << "\n";

    int min = numbers[0];
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (numbers[i] < min)
            min = numbers[i];
    }
    cout << "Min to: " << min << "\n";
}

//Napisz program, kt�ry wyznaczy wszystkie liczby pierwsze od 2 do zadeklarowanego zakresu.

void task4()
{
    const long long UPPER_RANGE = 70;

    //wersja 1

    for (long long numberToCheck = 2; numberToCheck <= UPPER_RANGE; numberToCheck++)
    {
        bool isPrime = true;
        for (long long i = 2; i <= numberToCheck; i++)
        {
            if (numberToCheck % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime /*== true*/)
            cout << numberToCheck << "\n";
    }
    cout << "Gotowe\n";

    //wersja 2


}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task4();
}
