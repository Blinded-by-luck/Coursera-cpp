#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool IsPalindrom(string a){
	int k = a.size();
	for (unsigned int i = 0; i < a.size(); i++){
		if (a[i] != a[k - i - 1])
			return false;
	}
	return true;
}

vector<string> PalindromFilter(vector<string> words, int minLenght){
	vector<string> res;
	for (string a: words){
		int k = a.size();
		if (IsPalindrom(a) && k >= minLenght)
			res.push_back(a);
	}
	return res;
}

