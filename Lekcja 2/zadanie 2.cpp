#include <iostream>
using namespace std;
int main () {
	int waga;
	int wzrost;
	int BMI;
	cout << "podaj wage (w kg):";
	cin >> waga;
	cout << "podaj wzrost (w metrach):";
	cin >> wzrost;
	BMI = waga / (wzrost * wzrost);
	if(BMI < 18.5) cout << "masz niedowage";
	else if((BMI > 18.5) && (BMI <= 24.9)) cout << "w normie";
	else if((BMI > 25) && (BMI < 29.9)) cout << "masz nadwage";
	else if(BMI > 30) cout << "otylosc";	
}