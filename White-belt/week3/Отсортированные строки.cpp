#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class SortedStrings {
public:

  void AddString(const string& s) {
    v.push_back(s);
  }
  vector<string> GetSortedStrings() {
	  sort(begin(v), end(v));
	  return v;
  }
private:
  vector<string> v;
};

void PrintSortedStrings(SortedStrings& strings) {
  for (const string& s : strings.GetSortedStrings()) {
    cout << s << " ";
  }
  cout << endl;
}
