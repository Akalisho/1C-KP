
#include <iostream>


/*
Operatory warunkowe:
> - wi�ksze
< - mniejsze
>= - wi�ksze b�d� r�wne
<= - mniejsze b�d� r�wne
== - r�wne
!= - nie r�wne

Operatory logiczne:
&& - AND
|| - OR
! - NOT

a   b   a&&b    a||b    !a
F   F     F       F     T
T   F     F       T     T
F   T     F       T     F
T   T     T       T     F

F - false
T - true

*/
 //.Napisz program, kt�ry poprosi u�ytkownika o podanie liczby od 1 do 7 i wy�wietli odpowiadaj�cy mu dzie� tygodnia.
 //.Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i wy�wietli wi�ksz� z nich.
 //.Napisz program, kt�ry poprosi u�ytkownika o podanie roku i sprawdzi, czy jest to rok przest�pny.Wy�wietl odpowiedni komunikat.
 //.Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona podzielna zar�wno przez 3, jak i przez 5. Wy�wietl odpowiedni komunikat.
 //.Napisz program, kt�ry poprosi u�ytkownika o podanie masy cia�a(w kilogramach) i wzrostu(w metrach).
  //Na podstawie tych danych oblicz wska�nik BMI(Body Mass Index) i wy�wietl odpowiedni komunikat informuj�cy o stanie zdrowia.
//* .Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci trzech odcink�w i sprawdzi, czy mo�na zbudowa� z nich tr�jk�t.Wy�wietl odpowiedni komunikat.
//* .Napisz program, kt�ry poprosi u�ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, je�li jest to mo�liwe.Wy�wietl wynik lub odpowiedni komunikat, je�li liczba jest ujemna.
//* .Program sprawdzaj�cy czy podana data jest poprawna(np.sprawdzaj�c, czy dzie� jest z zakresu od 1 do 31, miesi�c od 1 do 12 itd.)

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

//Napisz program, kt�ry wy�wietli informacje, czy liczba jest parzysta czy nieparzysta.

void task2()
{
    int number;
    std::cout << "Podaj liczb�: \n";
    std::cin >> number;

    if (number % 2 == 0)
        std::cout << "Liczba jest parzysta.";
    else
        std::cout << "Liczba jest nieparzysta.";
}

//Napisz program, kt�ry wy�wietli informacje czy liczba z zakresu <1 , 10>

void task3()
{
    int number;
    std::cout << "Podaj liczb�: \n";
    std::cin >> number;

    if (number >= 1 && number < 10)
        std::cout << "Liczba jest z zakresu.";
    else
        std::cout << "Liczba nie jest z zakresu.";
}

//Napisz program, kt�ry wykona dzielenie dw�ch liczb.

void task4()
{
    int firstNumber, secondNumber;
    std::cout << "Podaj pierwsz� liczb�: \n";
    std::cin >> firstNumber;
    std::cout << "Podaj drug� liczb�: \n";
    std::cin >> secondNumber;

    if (secondNumber != 0)
    {
        int quoitent = firstNumber / secondNumber;
        std::cout << "Wynik dzielenia: " << quoitent << "\n";
    }
    else
        std::cout << "Dzieleniew przez zero!!!\n";
}

//.Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i sprawdzi, czy s� one r�wne. Wy�wietl odpowiedni komunikat.

void task5()
{
    int firstNumber, secondNumber;
    std::cout << "Podaj liczb�: \n";
    std::cin >> firstNumber;
    std::cout << "Podaj liczb�: \n";
    std::cin >> secondNumber;

    if ( firstNumber == secondNumber )
        std::cout << "Obie liczby s� r�wne.";
    else
        std::cout << "Obie liczby nie s� r�wne.";
}

//.Napisz program, kt�ry poprosi u�ytkownika o podanie wieku i sprawdzi, czy osoba jest pe�noletnia.Wy�wietl odpowiedni komunikat.

void task6()
{
    int age;
    std::cout << "Podaj wiek: \n";
    std::cin >> age;

    if (age >= 18)
        std::cout << "Dana osoba jest pe�noletnia.";
    else
        std::cout << "Dana osoba jest niepe�noletnia.";
}

//.Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i obliczy jej warto�� bezwzgl�dn�.Wy�wietl wynik.

void task7()
{
    int number;
    std::cout << "Podaj liczb�: \n";
    std::cin >> number;

    if (number < 0)
        std::cout << "Warto�� bezwzgl�dna podanej liczby to: " << number * -1;
    else
        std::cout << "Warto�� bezwzgl�dna podanej liczby to: " << number;
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    task7();
}
    
