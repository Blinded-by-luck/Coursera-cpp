#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
  int n, d;
  vector<int> a;
  cin >> n;
  for (int i=0; i<n; i++){
	  cin >> d;
	  a.push_back(d);
  }
  sort(a.begin(), a.end(), [] (int i, int j) { return abs(i) < abs(j);});
  for (auto i: a){
	  cout<<i<<" ";
  }
  }
