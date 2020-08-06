#include <algorithm>
#include <vector>
#include <iostream>
#include <fstream>
#include <istream>
using namespace std;

int main(){
	string path1 = "input.txt";
	string line;
	string path2 = "output.txt";
	ifstream input(path1);
	ofstream output(path2);
	while(getline(input, line)){
		cout /* Ч.2 output*/ << line << endl;
	}
}
