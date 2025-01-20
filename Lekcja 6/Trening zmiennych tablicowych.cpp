#include <iostream>
using namespace std;
int main(){
	int tablica[5];
	cout << "Podaj 5 liczb calkowitych: \n";
	for(int i = 0; i < 5; i++){
	cout << "podaj liczbe nr " << i+1 << ": ";
	cin >> tablica[i];
}
cout << "\nwybrane liczby  to: \n";
for(int i = 0; i < 5; i++){
	cout << tablica[i] << endl;
}
}