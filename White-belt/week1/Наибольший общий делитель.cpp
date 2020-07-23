#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	while (a != 1 || b != 1){
		if (a < b && b % a != 0){
			b = b % a;
		} else if (b < a && a % b != 0){
			a = a % b;
		} else if (b % a == 0 || a % b == 0){
			if (a < b){
				cout << a;
				break;
			} else {
				cout << b;
				break;
			}
		}
	}
	return 0;
}
