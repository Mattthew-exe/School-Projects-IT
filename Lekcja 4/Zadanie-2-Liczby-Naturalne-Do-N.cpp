#include <iostream>
using namespace std;
int main(){
	int N;
	int NA = 1;
	int Ad = 2;
	int Sum = 0;
	cout << "Podaj liczbe N: ";
	cin >> N;
	do {
		Ad += NA;
		Sum += 1;
	}
	while (Sum < N);
	cout << "Suma Liczb Naturalnych do N: " << Ad;
}