#include <iostream>
#include <vector>
using namespace std;


vector<int> Reversed(const vector<int>& v){
  int n = v.size();
  vector<int> v2;
  for (int i = n-1; i >= 0; i--) v2.push_back(v[i]);

  return v2;
}

