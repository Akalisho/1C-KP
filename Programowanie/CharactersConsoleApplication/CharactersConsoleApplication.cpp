// CharactersConsoleApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//Napisz program, kt�ry pobierze od uzytkownika znak i wy�wietli go.

void task1()
{
    char characterFromUser;
    cout << "Podaj znak: \n";
    cin >> characterFromUser;

    cout << "Poda�e� znak: " << characterFromUser << "\n";
}

//Napisz program, kt�ry wczyta znak z klawiatury
//i sprawdzi czy jest ma�a litera alfabetu.

void task2()
{
    char characterFromUser;
    cout << "Podaj znak: \n";
    cin >> characterFromUser;

    if (characterFromUser >= 'a' && characterFromUser <= 'z')
        cout << "Jest to ma�a litera alfabetu.";
    else
        cout << "Jest to du�a litera alfabetu.";
}

//Napisz program, kt�ry poprosi ci� o twoje imi� i ci� przywita.

void task3()
{
    string userName;
    cout << "Podaj imi�.\n";
    cin >> userName;

    cout << "Witaj " << userName;
}

//Napisz program sprawdzaj�cy czy podane has�o jest poprawne.

void task4()
{
    string password;
    cout << "Podaj has�o.\n";
    cin >> password;

    if (password == "yourmom183")
        cout << "welcome your ass";
    else
        cout << "you stupid";
}

//Napisz program, kt�ry wczyta �a�cuch znak�w i policzy ile jest ma�ych liter 'a'.

void task5()
{
    string textFromUser;
    cout << "Podaj la�cuch znak�w.\n";
    cin >> textFromUser;

    int numberOfCharacters = 0;

    //cout << "Pierwszy znak to: " << textFromUser[0] << "\n";
    //textFromUser[1] = 'x';
    //cout << "Ilo�� znak�w = " << textFromUser.length() << "\n";

    for (int i = 0; i < textFromUser.length(); i++)
    {
        if (textFromUser[i] == 'a')
            numberOfCharacters++;
    }
    cout << "Ma�ych liter 'a' jest: " << numberOfCharacters;
}

//Program sprawdzaj�cy czy podane dwa s�owa s� anagramami(czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
//Program wyci�gaj�cy informacje z numeru PESEL
//Program implementuj�cy algorytm szyfrowania Cezara(proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).
//Program kt�ry na wej�ciu przyjmie r�wnanie a na wyj�ciu da r�wnanie w odwrotnej notacji polskiej ONP.Np.na wej�ciu 2 + 3 * 4 na wyj�cu da 234 * +
//Program, kt�ry na wej�ciu przyjmie r�wanie w ONP a na wyj�ciu wy�wietli wynik r�wania.
//Algorytm szyfrowania AtBash Cipher - algorytm szyfruj�cy, w kt�rym ka�da litera jest zamieniana na liter� z przeciwnej strony alfabetu(np.A na Z, B na Y itd.)

//Napisz program, kt�ry b�dzie prosi� o has�o.Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
void task6()
{
    string password;

    do
    {
        cout << "Podaj has�o: \n";
        cin >> password;

    } while (password != "aa");

    cout << "Gratulacje u�ytkowniku!!!";
}

//Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.

void task7()
{
    string textFromUser;
    cout << "Podaj la�cuch znak�w.\n";
    cin >> textFromUser;

    int numberOfVowel = 0;

    for (int i = 0; i < textFromUser.length(); i++)
    {
        if (textFromUser[i] == 'a'
            || textFromUser[i] == '�'
            || textFromUser[i] == 'e'
            || textFromUser[i] == '�'
            || textFromUser[i] == 'i'
            || textFromUser[i] == 'o'
            || textFromUser[i] == 'u'
            || textFromUser[i] == 'y'
            || textFromUser[i] == '�')
            numberOfVowel++;
    }
    cout << "Liczba sp�g�osek: " << textFromUser.length() - numberOfVowel << "\n";
    cout << "Liczba samog�osek: " << numberOfVowel;
}

//Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym.Nast�pnie skonwertuj t� liczb� na system dw�jkowy(binarny) i wy�wietl wynik.

void task8()
{
    int numberFromUser, rest = 0;
    string numberBin;
    cout << "Podaj liczb�: \n";
    cin >> numberFromUser;

    while (numberFromUser != 0)
    {
        rest = numberFromUser % 2;
        numberFromUser /= 2;
        if (rest == 0)
            numberBin = "0" + numberBin;
        else
            numberBin = "1" + numberBin;
    }
    cout << numberBin;
}

//Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem(czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")

void task9()
{
    string wordFromUser;
    cout << "Podaj wyraz: \n";
    cin >> wordFromUser;

    string reverseWord = "";
    for (int i = 0; wordFromUser.length() ; i++)
    {
        
    }

    if (isPalindrome)
        cout << "Wyraz jest palindromem.\n";
    else
        cout << "Wyraz nie jest palindromem.\n";
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    task9();
}

/*
Typy znakowe:
char - 1 bajt, ca�kowitoliczbowa ze znakiem <-128; 127> 
*/