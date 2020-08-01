#include <iostream>
#include <map>
using namespace std;

string anagram(string a1, string a2){
	map<char,unsigned int> b1, b2;

	for(unsigned int i = 0; i < a1.size(); i++) {
		++b1[a1[i]];
	}

	for(unsigned int i = 0; i < a2.size(); i++) {
		++b2[a2[i]];
	}

	if (b1 != b2) return "NO";
	else return "YES";
}

int main(){
	int n;
	string a1, a2;
	cin >> n;

	for (int i=0; i<n; i++) {
		cin >> a1 >> a2;
		cout<< anagram(a1, a2)<< endl;
	}

	return 0;
}
