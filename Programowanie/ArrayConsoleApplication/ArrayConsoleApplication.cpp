
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

}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task2();
}
