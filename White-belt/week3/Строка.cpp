#include <algorithm>
#include <map>
#include <vector>
#include <iostream>
using namespace std;


class ReversibleString{
	private:
		string source;
	public:
		ReversibleString() {}
		ReversibleString(const string& new_source) { source = new_source;}
		void Reverse() { reverse(begin(source), end(source));}
		string ToString() const { return source;}
};
