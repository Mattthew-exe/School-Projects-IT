#include <iostream>
using namespace std;
int main(){
	int N;
	int Number = 2;
	cout << "Podaj liczbe N: ";
	cin >> N;
	cout << "liczby parzyste od 2 do " << N << ": ";
	do {
		cout << Number << " ";
		Number += 1;
		if(Number % 2 != 0){
			Number +=1;
		}
	}
	while(Number % 2 == 0 && Number <= N);
	
}