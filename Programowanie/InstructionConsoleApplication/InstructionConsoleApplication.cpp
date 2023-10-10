
#include <iostream>


/*
Operatory warunkowe:
> - wi�ksze
< - mniejsze
>= - wi�ksze b�d� r�wne
<= - mniejsze b�d� r�wne
== - r�wne
!= - nie r�wne
*/

//Napisz program, kt�ry wy�wietli informacje, czy liczba jest dodatnia czy nie.

void task1()
{
    int number;
    std::cout << "Podaj liczb�: \n";
    std::cin >> number;

    if (number < 0)
        std::cout << "Liczba jest ujemna.\n";

    if (number > 0)
        std::cout << "Liczba jest dodatnia.\n";

    if (number == 0)
        std::cout << "Liczba jest r�wna 0.\n";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task1();
}
    
