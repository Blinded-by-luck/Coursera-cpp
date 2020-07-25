#include <iostream>
using namespace std;

int Factorial(int a){
	int b = 1;
	for (int i=1; i <= a; i++)
		b *= i;
	return b;
}
