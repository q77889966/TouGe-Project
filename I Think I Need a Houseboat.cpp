#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int n;
	int i = 1;
	cin >> n;
	float x, y,z;
	while (i <= n) {
		cin >> x >> y;
		z = 3.1415 * (x * x + y * y)/100;
		cout <<"Property " << i<<": This property will begin eroding in year "<< ceil(z)<<"."<<endl;
		i++;
	}
	cout << "END OF OUTPUT.";
	return 0;
}