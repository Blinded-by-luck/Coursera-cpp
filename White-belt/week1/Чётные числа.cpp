#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a <= b){
		for (int i = a; i <= b; i++){
			if (i % 2 == 0 && i != b)
				cout << i << " ";
			else if(i % 2 == 0 && i == b)
				cout << i;
		}
	}
	return 0;
}
