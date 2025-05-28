#include <iostream>
using namespace std;
int ObliczSume(int *marktablica){
	int suma = 0;
	for (int i = 0; i < 4; i++){
		suma = suma + marktablica[i];
	}
	cout << "Suma elementow tablicy: " << suma << endl;
}

int main(){
	int tablica[4] = {10, 15, 15, 10};
	ObliczSume(tablica);
	cout << "Suma elementow tablicy: " << suma << endl;
	for (int i = 0; i < 4; i++){
		cout << "Podaj nowa wartosc dla elementu" << i;
		cin >> tablica[i];
	}
	cout << "Nowe elementy tablicy: ";
	for (int i = 0; i < 4; i++){
		cout << tablica[i] << " ";
	}
}