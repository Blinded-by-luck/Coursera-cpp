#include <iostream>
#include <set>
#include <map>
using namespace std;

set<string> BuildMapValuesSet(const map<int, string>& m) {
	set<string> b;
	for (auto item: m){
		b.insert(item.second);
	}
	return b;
}
