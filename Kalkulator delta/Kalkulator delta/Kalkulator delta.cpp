// Kalkulator delta.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

int main()
{
		cout << "Kalkulator delta\n";                        //Wzór programu użyczony przez kolegę, bo mój się wywalił od razu, ale spróbuję to naprawić :)
	
	int a = 2;
	int b = -8;
	int c = 4;
	int d;                                               //delta 

	d = (b * b) - (4 * a * c);                          //wzór na deltę 
		cout << "a=" << a << "b=" << b << "c=" << c << endl;
		cout << "delta = " << d << endl;

	double PZD = sqrt(d);                              //deklaracja pierwiastka z delty 

	if (d == 0) {                                     //delta jest równa 0
		double x1;                                   //deklaracja pierwiastka 
		x1 = (-b - PZD) / 2 * a;
			cout << "pierwiastek to " << x1 << endl; 
	}
	else {
		if (d < 0) {                                //delta jest mniejsza od 0 
			cout << "nie ma pierwiastków, ponieważ delta jest mniejsza od 0" << endl;
		}
		else {
			if (d > 0) {                           //delta jest większa od 0 
				double x2, x1;                    //deklaracja dwóch pierwiastków 
				x1 = (-b - PZD) / (2 * a);
				x2 = (-b + PZD) / (2 * a); 
			cout << "x1= " << x1 << endl;
			cout << "x2 = " << x2 << endl; 

			}
		}
	}

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
