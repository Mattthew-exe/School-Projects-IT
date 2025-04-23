#include <iostream>
using namespace std;
int DisplayResult(int liczba, int silnia){
		cout << "silnia liczby " << liczba << " wynosi: " << silnia;
}
int CalculateFactorial(int liczba){
	int silnia = 1;
	for(int i = 1; i <= liczba; i++){
		silnia*= i;
	}
	return silnia;
}
int GetNumberFromUser(){
	int liczba;
	cin >> liczba;
	return liczba;
}
int main(){
	int liczba;
	int silnia;
	cout << "Podaj Liczbe: ";
	liczba = GetNumberFromUser();
	silnia = CalculateFactorial(liczba);
	DisplayResult(liczba, silnia);
}