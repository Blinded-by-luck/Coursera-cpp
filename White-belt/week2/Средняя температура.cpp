#include <iostream>
#include <vector>
using namespace std;


int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	int sum = 0;
	int t;
	for (int& t: v) {
		cin >> t;
		sum += t;
	}
	float mean = sum/n;
	vector<int> v2;
	int shag = 0;
	for (auto i: v) {
		if (i > mean)
			v2.push_back(shag);
		shag += 1;
	}
	cout << v2.size() << endl;
	for (auto i: v2) cout << i << " ";
}
