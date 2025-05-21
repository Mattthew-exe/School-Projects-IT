#include <iostream>
using namespace std;
int GetNumberFromUser(){
	int n;
	cout << "Podaj liczbe elementow: ";
	cin >> n;
	return n;
}
int CalculateFibonacciRecursive(int n){
	if (n <= 1){
		return n;
	}
	return CalculateFibonacciRecursive(n - 1) + CalculateFibonacciRecursive(n - 2);
}
int DisplayFibonacciSequence(int n){
		for(int i = 0; i < n; i++){
			cout << CalculateFibonacciRecursive(i) << ", ";
	}
}
int main(){
	int n;
	n = GetNumberFromUser();
	DisplayFibonacciSequence(n);
}