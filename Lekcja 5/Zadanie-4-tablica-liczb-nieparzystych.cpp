#include <iostream>
using namespace std;
int main(){
	int wiersze, kolumny;
	int liczba = 1;
	cout << "Podaj liczbe wierszy: ";
	cin >> wiersze;
	cout << "Podaj liczbe kolumn: ";
	cin >> kolumny;
	for(int i = 1; i <= wiersze; i++){
		for(int j = 1; j <= kolumny; j++){
			cout << liczba << "\t";
			liczba += 2;
			}
			cout << endl;
		}
		
	}
