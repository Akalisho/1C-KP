
#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "polish");

    std::string text;

    text = "Hello";
    std::cout << "Nasz tekst na pocz�tku: " << text << "\n";
    std::cout << "D�ugo�� �a�cucha to: " << text.length() << "\n";
    std::cout << "Czy zmienna jest pusta: " << text.empty() << "\n";
    text.append(", World!");
    //text = text + ", World!";
    //text += ", World!";
    std::cout << "Zmiana tekstu na: " << text << "\n";
    std::string subText = text.substr(7, 5);
    std::cout << "Skopiony podtekst: " << subText << "\n";

    text = "Ala ma kota";
    text.replace(0, 3, "Ola");
    std::cout << "Zmiana tekstu na: " << text << "\n";

    text.insert(3, " nie");
    std::cout << "Zmiana tekstu na: " << text << "\n";
}

