#include<iostream>
#include<set>

using namespace std;
const auto N = 10000;

int main() {
	set<int>prime;
	prime.insert(2);
	for (int i = 3; i <= 10000; i++) {
		int j = 2;
		for (; j <= N; j++) {
			if (i % j == 0)
				break;
		}
		if(j==i)
			prime.insert(i);
	}

	int x;
	int num[N];
	int count = 0;
	while (cin >> x, x) {
		num[count] = x;
		count++;
	}
	for (int i = 0; i < count; i++) {
		int aws = 0;
		if (prime.count(num[i]))
			aws++;
		for (set<int>::iterator iter = prime.begin(); iter != prime.end(); iter++) {
			int tmp = 0;
			for (set<int>::iterator iter2 = iter; (iter2 != prime.end())&&(*iter2!=num[i]); iter2++) {
				tmp += *iter2;
				if (tmp == num[i]) {
					aws++;
					break;
				}
				else if (tmp > num[i])
					break;
			}
		}
		cout << aws<<endl;
	}
	return 0;
}