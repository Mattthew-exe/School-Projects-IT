#include <iostream>
using namespace std;
int main(){
	int macierz[3][2];
	cout << "Podaj liczby dla macierzy 2x3; \n";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
		 cout << "podaj liczbe dla wiersza" << i+1 << ", kolumny" << j+1 << ": ";
		 cin >> macierz[i][j];
	    }
	}
	cout << "\nTransponowana macierz: \n";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			cout << macierz [i][j] << " ";
		}
		cout << "\n";
	}
}