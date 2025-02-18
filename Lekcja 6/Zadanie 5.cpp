#include <iostream>
using namespace std;
int main(){
	int tablica[3][3];
	int suma = 0;
	cout << "Podaj liczby dla macierzy 3x3 \n";
	for(int i = 0; i < 3; i++){
	 for(int j = 0; j < 3; j++){
	     cout << "Podaj liczbe wiersza " << i+1 << " kolumny " << j+1 << ":" << endl;
		 cin >> tablica[i][j];
	    }
    }
    for(int i = 0; i < 3; i++){
    	for(int j = 0; j < 3; j++){
    	 suma = tablica[i][j] + suma;
		}
	}
	cout << "Suma liczb w macierzy to: " << suma;
}