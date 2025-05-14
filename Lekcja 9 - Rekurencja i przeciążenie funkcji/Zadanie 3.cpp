#include <iostream>
using namespace std;
int CalculatePowerRecursive(int n, int power){
		if(power == 1){
			return n;
		}
		else{
		return n * CalculatePowerRecursive(n, power - 1);
		}
	}
int DisplayResult(int n, int power, int result){
	cout << "liczba " << n << " do potegi " << power << " wynosi: " << result;
}
int main(){
	int n;
	int power;
	int result;
	cout << "Podaj liczbe podztawowa: ";
	cin >> n;
	cout << "Podaj wykladnik: ";
	cin >> power;
	result = CalculatePowerRecursive(n, power);
	DisplayResult(n, power, result);
}