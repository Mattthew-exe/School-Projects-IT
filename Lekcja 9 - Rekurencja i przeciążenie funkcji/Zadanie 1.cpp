#include <iostream>
using namespace std;
int CalculateSumRecursive(int n){
	if(n == 1){
		return 1;
	}
	else{
		return n + CalculateSumRecursive(n - 1);
	}
}
int GetNumberFromUser(){
	int n;
	cout << "Podaj liczbe: ";
	cin >> n;
	return n;
}
int DisplayResult(int wynik, int n){
cout << "Suma liczb od " << n << " do 1 wynosi: " << wynik;
}
int main(){
	int wynik;
	int n;
	n = GetNumberFromUser();
	wynik = CalculateSumRecursive(n);
	DisplayResult(wynik, n);
}