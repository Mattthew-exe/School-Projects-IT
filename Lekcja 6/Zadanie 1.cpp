#include <iostream>
using namespace std;
int main(){
	int Liczba[5];
	int suma = 0;
	for(int i = 0; i < 5; i++){
		cout << "Podaj liczbe " << i + 1 << ": ";
		cin >> Liczba[i];
	}
	for(int i = 0; i < 5; i++){
		suma = suma += Liczba[i];
	}
	suma = suma / 5;
	cout << "\nSrednia podanych liczb wynosi: " << suma << endl;
}