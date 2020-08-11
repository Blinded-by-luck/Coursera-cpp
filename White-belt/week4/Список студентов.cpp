#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <tuple>
#include <vector>
using namespace std;


int main() {
    ifstream input("input.txt");
    int n1, n2, k, d, m, y;
    string fname, sname, command;
    vector <tuple<string, string, int, int, int>> data;
    cin >> n1;

    for (int i = 0; i < n1; i++){
    	cin >> fname >> sname >> d >> m >> y;
    	data.push_back({fname, sname, d, m, y});
    }

    cin >> n2;

    for (int i = 0; i < n2; i++){
    	cin >> command;
    	if (command == "date"){
    		cin >> k;
    		k -= 1;
    		if (k < 0 || k > n1) cout << "bad request" << endl;
    		else cout << get<2>(data[k]) << "." << get<3>(data[k]) << "." << get<4>(data[k]) << endl;
    	} else if (command == "name"){
    		cin >> k;
    		k -= 1;
    		if (k < 0 || k > n1) cout << "bad request" << endl;
    		else cout << get<0>(data[k]) << " " << get<1>(data[k]) << endl;
    	} else cout << "bad request" << endl;
    }

    return 0;
}
