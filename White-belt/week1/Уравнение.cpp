#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float a, b, c, d;
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if (a == 0 && b == 0){
		return 0;
	}else{
		if (a == 0){
			c *= -1;
			c /= b;
			cout << c;
		}else {
			if (d < 0){
				return 0;
			} else {
				if (d == 0){
					cout << -b / (2 * a);
				} else{
					cout << (-b + sqrt(d)) / (2 * a) <<' '<<(-b - sqrt(d)) / (2 * a);
				}
			}
		}
	}
	return 0;
}
