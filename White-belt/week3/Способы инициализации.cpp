
#include <algorithm>
#include <map>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Incognizable{
private:
	 int a1;
	 int a2;
public:
	Incognizable() {}
	Incognizable(const int& a){
		a1 = a;
	}
	Incognizable(const int& a, const int& b){
		a1 = a;
		a2 = b;
	}
};
/*
int main() {
  Incognizable a;
  Incognizable b = {};
  Incognizable c = {0};
  Incognizable d = {0, 1};
  return 0;
}*/
