#include<iostream>
#include<set>
using namespace std;
int main() {
	int x = 0;
	
	while (cin >> x,x != -1) {
		int count = 0;
		
		set<int>s;
		while (x) {
			s.insert(x);
			cin >> x;
		}
		for (set<int>::iterator iter = s.begin(); iter != s.end(); ++iter) {
			if(s.count(*iter*2)){
				count++;
			}
		}
		cout << count << endl;
	}

	return 0;
}