#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include "stdexcept"
#include <string>
#include <vector>
using namespace std;

int main(){
	uint64_t sum = 0;
	uint64_t n = 0, a = 0, c = 0, p = 0, b = 0;
	cin >> n >> p;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		sum += a * b * c * p;
	}
	cout << sum;

	return 0;
}
