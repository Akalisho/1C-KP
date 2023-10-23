
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

//.Napisz program, kt�ry poprosi u�ytkownika o podanie liczby od 1 do 7 i wy�wietli odpowiadaj�cy mu dzie� tygodnia

void task8()
{
    int number;
    std::cout << "Podaj liczbe: \n";
    std::cin >> number;

    if (number >= 1 && number <= 7)
    {
        if (number == 1)
            std::cout << "Dzie� tygodnia to Poniedzia�ek.";
        if (number == 2)
            std::cout << "Dzie� tygodnia to Wtorek.";
        if (number == 3)
            std::cout << "Dzie� tygodnia to �roda.";
        if (number == 4)
            std::cout << "Dzie� tygodnia to Czwartek.";
        if (number == 5)
            std::cout << "Dzie� tygodnia to Pi�tek.";
        if (number == 6)
            std::cout << "Dzie� tygodnia to Sobota.";
        if (number == 7)
            std::cout << "Dzie� tygodnia to Niedziela.";
    }
    else
        std::cout << "Nie ma takiego dnia tygodnia.";
}

//.Napisz program, kt�ry poprosi u�ytkownika o podanie dw�ch liczb ca�kowitych i wy�wietli wi�ksz� z nich.

void task9()
{
    int firstNumber, secondNumber;
    std::cout << "Podaj pierwsz� liczb�: \n";
    std::cin >> firstNumber;
    std::cout << "Podaj drug� liczb�: \n";
    std::cin >> secondNumber;

    if (firstNumber > secondNumber)
        std::cout << "Wi�ksza liczba to: " << firstNumber;
    else
        std::cout << "Wi�ksza liczba to: " << secondNumber;
}

//.Napisz program, kt�ry poprosi u�ytkownika o podanie roku i sprawdzi, czy jest to rok przest�pny.Wy�wietl odpowiedni komunikat.

void task10()
{
    int year;
    std::cout << "Podaj rok: \n";
    std::cin >> year;
    
    if (year > 0 && year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        std::cout << "Rok jest przest�pny.";
    else
        std::cout << "Rok nie jest przest�pny.";
}

//.Napisz program, kt�ry poprosi u�ytkownika o podanie liczby ca�kowitej i sprawdzi, czy jest ona podzielna zar�wno przez 3, jak i przez 5. Wy�wietl odpowiedni komunikat.

void task11()
{
    int number;
    std::cout << "Podaj liczb�: \n";
    std::cin >> number;

    if (number % 3 == 0)
    {
        if (number % 5 == 0)
            std::cout << "Podana liczba dzieli si� przez 3 i 5.";
        else
            std::cout << "Podana liczba si� nie dzieli.";
    }
    else
        std::cout << "Podana liczba si� nie dzieli.";
}

/*Na  podstawie tych danych oblicz wska�nik BMI(Body Mass Index) i wy�wietl odpowiedni komunikat informuj�cy o stanie zdrowia.
poni�ej 16 - wyg�odzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowag�
18.5 - 24.99 - wag� prawid�ow�
25.0 - 29.9 - nadwag�
30.0 - 34.99 - I stopie� oty�o�ci
35.0 - 39.99 - II stopie� oty�o�ci
powy�ej 40.0 - oty�o�� skrajn�
*/

void task12()
{
    int mass;
    double height, bmi;
    std::cout << "Podaj swoj� wysoko�� w metrach: \n";
    std::cin >> height;
    std::cout << "Podaj swoj�  w kilogramach: \n";
    std::cin >> mass;
    bmi = mass / (height * height);

        if (bmi < 16)
            std::cout << "Z twojego BMI wychodzi wyg�odzenie";
        else
            if (bmi >= 16 && bmi <= 16.99)
                std::cout << "Z twojego BMI wychodzi wychudzenie";
            else
                if (bmi >= 17 && bmi <= 18.49)
                    std::cout << "Z twojego BMI wychodzi niedowaga";
                else
                    if (bmi >= 18.5 && bmi <= 24.99)
                        std::cout << "Z twojego BMI wychodzi waga prawid�owa";
                    else
                        if (bmi >= 25.0 && bmi <= 29.99)
                            std::cout << "Z twojego BMI wychodzi nadwaga";
                        else
                            if (bmi >= 30 && bmi <= 34.99)
                                std::cout << "Z twojego BMI wychodzi I stopie� oty�o�ci";
                            else
                                if (bmi >= 35 && bmi <= 39.99)
                                    std::cout << "Z twojego BMI wychodzi II stopie� oty�o�ci";
                                else
                                    if (bmi > 40)
                                        std::cout << "Z twojego BMI wychodzi oty�o�� skrajna";
    
}

//* .Napisz program, kt�ry poprosi u�ytkownika o podanie d�ugo�ci trzech odcink�w i sprawdzi, czy mo�na zbudowa� z nich tr�jk�t.Wy�wietl odpowiedni komunikat.

void task13()
{
    int firstSide, secondSide, thirdSide;
    std::cout << "Podaj d�ugo�� pierwszego boku tr�jk�ta: \n";
    std::cin >> firstSide;
    std::cout << "Podaj d�ugo�� drugiego boku tr�jk�ta: \n";
    std::cin >> secondSide;
    std::cout << "Podaj d�ugo�� trzeciego boku tr�jk�ta: \n";
    std::cin >> thirdSide;
    if (firstSide > (secondSide + thirdSide))
        std::cout << "Mo�na zbudowa� tr�jk�t.";
    else
        std::cout << "Nie mo�na zbudowa� tr�jk�ta.";
}

//* .Napisz program, kt�ry poprosi u�ytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, je�li jest to mo�liwe.Wy�wietl wynik lub odpowiedni komunikat, je�li liczba jest ujemna.

void task14()
{
    int number;
    std::cout << "Podaj liczb�: \n";
    std::cin >> number;

    if (number > 0)

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
    //task7();
    //task8();
    //task9();
    //task10();
    //task11();
    //task12();
    //task13();
    task14();
}
    
