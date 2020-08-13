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
	vector<int> v;
	int64_t sum = 0;
	int n = 0, k = 0, counter = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		sum += k;
		v.push_back(k);
	}
	sum /= n;
	for (auto i : v){
		if (i > sum) ++counter;
	}
	cout << counter << endl;
	for (size_t i = 0; i < v.size(); i++){
		if (v[i] > sum) cout << i << " ";
	}

	return 0;
}
