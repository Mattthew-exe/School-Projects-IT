#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void LosujTablice(int *marktablica){
	int poczatek = 0;
	int koniec = 50;
	for(int i = 0; i < 10; i++){
		srand(time(NULL));
		marktablica[i] = poczatek + rand() % (koniec - poczatek + i);
	}
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
	int tablica[10];
	int l;
	int atmp = 1;
	LosujTablice(tablica);
	do{
		cout << "Podaj liczbe: ";
		cin >> l;
	}
	while(SprawdzLiczbe(&l, tablica, &atmp) == false);
}
