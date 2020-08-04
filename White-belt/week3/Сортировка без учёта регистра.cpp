#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

char asciitolower(char in) {
    if (in <= 'Z' && in >= 'A')
        return in - ('Z' - 'z');
    return in;
}

string tr(string& data){
	transform(data.begin(), data.end(), data.begin(), asciitolower);
	return data;
}

int main() {
  int n;
  string d;
  cin >> n;
  vector<string> v;
  for (int i = 0; i < n; i++) {
	  cin >> d;
	  v.push_back(d);
  }
  sort(begin(v), end(v), [](string i, string j){ return tr(i) < tr(j);});
  for (auto i: v) cout << i << " ";
}
