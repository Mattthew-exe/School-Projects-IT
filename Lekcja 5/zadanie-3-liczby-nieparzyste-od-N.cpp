#include <iostream>
using namespace std;
int main(){
	int N;
	cout << "Podaj liczbe N: ";
	cin >> N;
	cout << "liczby nieparzyste od N: " << endl;
	for(int L = 1; L <= N; L += 1){
		if(L % 2 != 0)
		cout << L;
		else{
			cout << endl;
		}
	}
}