#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void LosujTablice(int *marktablica, int poczatek, int koniec){
	for(int i = 0; i < 10; i++){
		srand(time(NULL));
		marktablica[i] = poczatek + rand() % (koniec - poczatek + i);
	}
	cout << "Tablica: ";
	for(int i = 0; i < 10; i++)
	cout << marktablica[i] << ", ";
	cout << endl;
}
bool SprawdzLiczbe(int *input, int *marktablica, int *attempts){
	for(int i = 0; i < 10; i++){
		if(*input == marktablica[i]){
				cout << "Gratulacje! Odgadles liczbe!" << endl;
				cout << "Odgadles za " << *attempts << " razem.";
			return true;
		}
	}
	*attempts += 1;
	return false;
}
int main(){
	int poczatek;
	cout << "wartosc poczatkowa: ";
	cin >> poczatek;
	int koniec;
	cout << "wartosc koncowa: ";
	cin >> koniec;
	int tablica[10];
	int l;
	int atmp = 1;
	LosujTablice(tablica, poczatek, koniec);
	do{
		cout << "Podaj liczbe: ";
		cin >> l;
	}
	while(SprawdzLiczbe(&l, tablica, &atmp) == false);
}