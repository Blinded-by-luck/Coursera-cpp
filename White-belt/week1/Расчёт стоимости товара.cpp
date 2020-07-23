#include <iostream>
using namespace std;

int main() {
	float n, a, b, x, y, skid;
	cin >> n >> a >> b >> x >> y;
	if (n <= a){
		cout << n;
	} else if (n > a && n <= b){
		skid = n / 100 * x;
		cout << n - skid;
	} else if (n > b){
		skid = n / 100 * y;
		cout << n - skid;
	}
	return 0;
}
