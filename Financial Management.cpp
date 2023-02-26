#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	long double x;
	long double avg = 0;
	for (int i = 0; i < 12; i++) {
		cin >> x;
		avg += x;
	}
	avg = avg / 12.0;
	cout.precision(2);
	cout << fixed << "$" << avg;
	return 0;
}