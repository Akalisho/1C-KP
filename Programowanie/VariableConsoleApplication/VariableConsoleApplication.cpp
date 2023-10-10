// VariableConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

 //Napisz program kt�r wczyta liczb� od u�ytkownika i j� wy�wietli na konsoli.
void task1()
{
	std::cout << "Podaj numer:\n";
	int numberFromUser;
	std::cin >> numberFromUser;

	std::cout << "Podales: " << numberFromUser << "\n";
}

//Program obliczaj�cy �redni� dw�ch liczb

void task2()
{
	int firstNumber, secondNumber;

	std::cout << "Podaj pierwsza liczbe\n";
	std::cin >> firstNumber;
	std::cout << "Podaj druga liczbe\n";
	std::cin >> secondNumber;

	int average;
	average = (firstNumber + secondNumber) / 2;

	std::cout << "Srednia wynosi: " << average << "\n";
}

//Program obliczaj�cy pole prostok�ta.

void task3()
{
	int firstSide, secondSide;

	std::cout << "Podaj pierwszy bok\n";
	std::cin >> firstSide;
	std::cout << "Podaj drugi bok\n";
	std::cin >> secondSide;

	int area;
	area = firstSide * secondSide;

	std::cout << "Pole prostok�ta wynosi: " << area << "\n";
}

//Program obliczaj�cy obj�to�� sto�ka.

void task4()
{
	double beam, height;

	std::cout << "Podaj promie�: \n";
	std::cin >> beam;
	std::cout << "Podaj wysoko��: \n";
	std::cin >> height;

	double volume;
	volume = (height / 3) * 3.1415 * (beam * beam);

	std::cout << "Obj�to�� sto�ka wynosi: " << volume << "\n";
}

//Program obliczaj�cy pole ko�a.

void task5()
{
	double beam;

	std::cout << "Podaj promie�: \n";
	std::cin >> beam;

	std::cout << "Pole ko�a to: \n" << (beam * beam) * 3.1415;
}

//Program obliczaj�cy warto�� wyra�enia a^2 + b^2.

void task6()
{
	double SideA, SideB;

	std::cout << "Podaj bok A: \n";
	std::cin >> SideA;
	std::cout << "Podaj bok B: \n";
	std::cin >> SideB;

	std::cout << "Wynik to: " << SideA * SideA + SideB * SideB;
}

//Program obliczaj�cy pole tr�jk�ta o podstawie b i wysoko�ci h.

void task7()
{
	double base_sideB, height;

	std::cout << "Podaj d�ugo�� boku podstawy tr�jk�ta: \n";
	std::cin >> base_sideB;
	std::cout << "Podaj wysoko�� tr�jk�ta: \n";
	std::cin >> height;

	std::cout << "Wynik to: " << (base_sideB * height) / 2;
}

//Program obliczaj�cy obj�to�� kuli o promieniu r.

void task8()
{
	double beam, volume;

	std::cout << "Podaj promie� kuli: \n";
	std::cin >> beam;

	std::cout << "Wynik to: " << 1.33 * 3.1415 * (beam * beam * beam);
}

//Program obliczaj�cy pole trapezu o podstawach a i b oraz wysoko�ci h.

void task9()
{
	double BaseA, BaseB, Height;

	std::cout << "Podaj d�ugo�� podstawy A:\n";
	std::cin >> BaseA;
	std::cout << "Podaj d�ugo�� podstawy B:\n";
	std::cin >> BaseB;
	std::cout << "Podaj d�ugo�� wysoko�ci:\n";
	std::cin >> Height;

	std::cout << "Wynik to: " << ((BaseA + BaseB) * Height) / 2;
}

//Program obliczaj�cy �redni� wa�on� trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

void task10()
{
	double Mark1, Mark1Weight, Mark2, Mark2Weight, Mark3, Mark3Weight;

	std::cout << "Podaj pierwsz� ocen�: \n";
	std::cin >> Mark1;
	std::cout << "Podaj wag� pierwszej oceny: \n";
	std::cin >> Mark1Weight;
	std::cout << "Podaj drug� ocen�: \n";
	std::cin >> Mark2;
	std::cout << "Podaj wag� drugiej oceny: \n";
	std::cin >> Mark2Weight;
	std::cout << "Podaj trzeci� ocen�: \n";
	std::cin >> Mark3;
	std::cout << "Podaj wag� trzeciej oceny: \n";
	std::cin >> Mark3Weight;

	std::cout << "�rednia wa�ona z trzech ocen wynosi: " << ((Mark1Weight * Mark1) + (Mark2Weight * Mark2) + (Mark3Weight * Mark3)) / (Mark1Weight + Mark2Weight + Mark3Weight);
}

//Stw�rz program, kt�ry pobiera od u�ytkownika d�ugo�� w metrach i przelicza j� na centymetry i milimetry, wy�wietlaj�c wynik.

void task11()
{
	double Meters;

	std::cout << "Podaj ilo�� metr�w do przeliczenia: \n";
	std::cin >> Meters;

	std::cout << "Wynik w centymetrach to: " << Meters * 100 << "\n";
	std::cout << "Wynik w milimetrach to: " << Meters * 1000 << "\n";
}

//Napisz program, kt�ry konwertuje wprowadzon� kwot� w jednej walucie na inn�, korzystaj�c z okre�lonego kursu wymiany.

void task12()
{
	double price_zl, converter;

	std::cout << "Podaj warto�� w z�ot�wkach: \n";
	std::cin >> price_zl;
	std::cout << "Podaj warto�� przelicznika: \n";
	std::cin >> converter;

	std::cout << "Tw�j wynik to: " << price_zl * converter;
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
	task12();
}

/*
   Algorytm - sko�czony zbi�r instrukcji, kt�ry rozwi�zuje zadany problem.
   Okre�la te� kolejno�� wykonywanych instrukcji.
   Zapis algorytmu:
   * rysunki
   * opis s�owny
   * w punktach
   * schemat blokowy
   * kod �r�d�owy danego j�zyka programowania
   * pseudokod

   Zmienna jest to pewien obszar w pami�ci operacyjnej, w kt�rej mo�na
			 w danej chwili przechowa� tylko jedn� dan�.
   Instrukcja deklaracji zmiennej:
	typ_zmiennej nazwa_zmiennej;

	Typ zmiennej - wielko�� obszar�w pami�ci, interpretacja ci�gu bit�w.
	 int - 4 bajtowa liczba ca�kowita ze znakiem <2 147 483 648, 2 147 483 647>
	 short - 2 bajtowa liczba ca�kowita ze znakiem <-32 768, 32 767>
	 long - to samo co int
	 long long - 8 bajtowa liczba ca�kowita ze znakiem <-9 223 372 036 854 775 808, 9 223 372 036 854 775 807>

	 unsigned - zmienna bez znaku <0, 2*max + 1>

	 float - 4 bajtowa liczba rzeczywista, dok�adno�� 6-7 cyfr po przecinku
	 double - 8 bajtowa liczba rzeczywista, dok�adno�� 15-16 cyfr po przecinku
	 long double - 12 bajtowa liczba rzeczywista, dok�adno�� 19-20 cyfr po przecinku

	Nazwa zmiennej - nazwa obszar�w pami�ci, indentyfikator
	 Warunki niezb�dne:
   * dozwolone znaki:
	 - alfabet angielski aA-zZ
	 - cyfry arabskie 0-9
	 - podkre�lenie (pod�oga)
   * pierwszym znakiem nie mo�e by� cyfra
   * unikalny w swoim zakresie widoczno�ci
   * nie mo�e by� to s�owo kluczowe (zarezerwowane) danego j�zyka

	 Warunki programist�w:
   * nazwa zmiennej powinna oddawa� charakter przechowywanych danych
   * je�li wiele s��w to w miejscu spacji podkre�clenie zaczynaj�c od
	 drugiego s�owa piszemy je od du�ej litery
   * piszemy po angielsku
 */
