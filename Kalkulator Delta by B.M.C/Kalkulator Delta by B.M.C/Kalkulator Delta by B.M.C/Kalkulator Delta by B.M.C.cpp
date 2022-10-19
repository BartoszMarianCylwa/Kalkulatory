// Kalkulator Delta by B.M.C.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Zajęcia nr 2, kalkulator Delta\n";


    int a = 1;
    int b = -4;
    int c = 4;
    int d; //delta 

    cout << "a=" << a << "b=" << "c=" << c << endl;

    d = b * b - 4 * a * c;

    if (d < 0) {
        cout << "Delta=" << d << endl;
        cout << "Gdy delta jest ujemna to trójmian kwadratowy nie posiada pierwiastka";

        return 1;
    }

    d = b * b - 4 * a * c;
    double pierwiastekZDelty = sqrt(d);

    double x1 = (-b - pierwiastekZDelty) / (2 * a);
    double x2 = (-b + pierwiastekZDelty) / (2 * a);

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
