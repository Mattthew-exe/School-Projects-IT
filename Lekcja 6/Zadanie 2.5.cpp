#include <iostream>
using namespace std;
int main(){
	int tablica[5];
	cout << "Podaj 5 liczb calkowitych: \n";
	for(int i = 0; i < 5; i++){
		cout << "Podaj liczbe " << i+1 << ": ";
		cin >> tablica[i];
	} 
	for(int i = 0; i < 5; i++){
		if(tablica[i] < 0)
		cout << "0 \n";
		else{
			cout << tablica[i] << endl;
		}
	}
}