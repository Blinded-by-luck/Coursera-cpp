#include <iostream>
#include <string>
using namespace std;

bool IsPalindrom(string a){
	int k = a.size();
	for (unsigned int i = 0; i < a.size(); i++){
		if (a[i] != a[k - i - 1])
			return false;
	}
	return true;
}
