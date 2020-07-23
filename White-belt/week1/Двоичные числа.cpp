#include <iostream>
using namespace std;

int main() {
	int a = 2, n1, n2;
	string m;
	cin >> n1;
	while (n1 != 0){
		n2 = n1;
		n1 = n1 - n1 % a;
		a *= 2;
		if (n2 == n1)
			m += '0';
		else
			m += '1';
	}
	for(int i = m.size() - 1; i>=0 ; i--)
	   cout << m[i];
	return 0;
}
