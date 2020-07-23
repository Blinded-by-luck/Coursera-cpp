#include <iostream>
using namespace std;

int main() {
	string b;
	int a = -2, counter = 0, pos = -1;
	char f  = 'f';
	cin >> b;
	for (auto i : b){
		pos += 1;
		if (i == f)
			counter += 1;
		if (counter == 1)
			a = -1;
		if (counter == 2){
			cout << pos;
			return 0;
		}
	}
	cout << a;
	return 0;
}
