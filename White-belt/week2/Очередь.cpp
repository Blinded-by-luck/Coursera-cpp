#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


void PrintVector(const vector<bool>& v){
	for (auto b: v) cout << b << " ";
	cout << endl;
}

int main(){
	int n, k;
	string l;
	cin >> n;
	vector<bool> v;
	for (int i = 0; i < n; i++){
		cin >> l;
		if (l == "COME") {
			cin >> k;
			if (k > 0){
				for(int j = 0; j < k; j++) v.push_back(true);
			}
			else if (k < 0){
				for (int j = 0; j < k * (-1); j++)
					v.pop_back();
			}
		}
		else if (l == "QUIET") {
			cin >> k;
			v[k] = true;
		}
		else if (l == "WORRY") {
			cin >> k;
			v[k] = false;
		}
		else if (l == "WORRY_COUNT") cout << count(v.begin(), v.end(), false)<<endl;
	}
	return 0;
}
