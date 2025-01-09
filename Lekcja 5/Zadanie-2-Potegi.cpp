#include <iostream>
using namespace std;
int main(){
	int N;
	int L = 2;
	int Wynik;
	cout << "Podaj liczbe N: ";
	cin >> N;
	for(int LCount = 1; LCount <= N; LCount += 1){
		Wynik = LCount * LCount;
		cout << LCount << "^" << L << " = " << Wynik << endl;
	}
}