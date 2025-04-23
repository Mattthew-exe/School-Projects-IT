#include <iostream>
using namespace std;
int Parzystosc(int a){
		if(a % 2 == 0){
			cout << "liczba " << a << " jest parzysta";
		}
		else{
		cout << "liczba " << a << " jest nieparzysta";	
		}
	}
int main(){
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	Parzystosc(liczba);
}