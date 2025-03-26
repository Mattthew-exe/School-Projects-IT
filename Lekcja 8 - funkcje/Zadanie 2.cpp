#include <iostream>
using namespace std;
int Dodaj(int a, int b){
	return a + b;
}
int Odejmij(int a, int b){
	return a - b;
}
int Pomnoz(int a, int b){
	return a * b;
}
int Podziel(int a, int b){
	return a / b;
}
	int main(){
		int opcja;
		do{
			int liczba1;
			int liczba2;
			int wynik;
			cout << "wybierz funkcje" << endl << "1. suma" << endl << "2. roznica" << endl << "3. iloczyn" << endl << "4. iloraz" << endl << "0. wyjscie" << endl << "wybrana funkcja: ";
			cin >> opcja;
			switch(opcja){
				case 1:
					cout << "podaj pierwsza liczbe: ";
					cin >> liczba1;
					cout << "podaj druga liczbe: ";
					cin >> liczba2;
					wynik = Dodaj(liczba1, liczba2);
					cout << "wynik: " << wynik << endl << endl;
					break;
				case 2:
					cout << "podaj pierwsza liczbe: ";
					cin >> liczba1;
					cout << "podaj druga liczbe: ";
					cin >> liczba2;
					wynik = Odejmij(liczba1, liczba2);
					cout << "wynik: " << wynik << endl << endl;
					break;
				case 3:
					cout << "podaj pierwsza liczbe: ";
					cin >> liczba1;
					cout << "podaj druga liczbe: ";
					cin >> liczba2;
					wynik = Pomnoz(liczba1, liczba2);
					cout << "wynik: " << wynik << endl << endl;
					break;
				case 4:
					cout << "podaj pierwsza liczbe: ";
					cin >> liczba1;
					cout << "podaj druga liczbe: ";
					cin >> liczba2;
					wynik = Podziel(liczba1, liczba2);
					cout << "wynik: " << wynik << endl << endl;
					break;
			}
		} while(opcja != 0);
	}