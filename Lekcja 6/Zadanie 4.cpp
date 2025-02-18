	#include <iostream>
using namespace std;
int main(){
	int macierz[3][3];
	int srednia = 0;
	cout << "Podaj 9 liczb dla macierzy 3x3: " << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << "Podaj liczbe wiersza " << i + 1 << " Kolumny " << j + 1 << ": ";
			cin >> macierz[i][j];
		}
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
		 srednia = srednia + macierz[i][j];
		}
		cout << endl;
	}
	srednia = srednia / 9;
	cout << "srednia liczb jest ruwna: " << srednia << endl;
}