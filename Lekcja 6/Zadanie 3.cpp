#include <iostream>
using namespace std;
int main(){
	int tablica[10];
	int suma = 0;
	for(int i = 0; i < 10; i++){
		cout << "podaj liczbe " << i + 1 << ": ";
		cin >> tablica[i];
	}
	// chce zrobić aby skrypt sprawdzał czy liczba jest parzysta i aby potem te liczbę DODAŁ do sumy
	cout << "liczby parzyste: ";
	for(int i = 0; i < 10; i++){
		if(tablica[i] % 2 = 0);
		cout << tablica[i];
		suma += tablica[i];
	}
	cout << "Suma liczb parzystych: " << suma << endl;
	
}