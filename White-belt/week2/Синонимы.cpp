#include <iostream>
#include <set>
#include <map>
#include <string>
#include <set>
using namespace std;

int count(map<string, set<string>>& intel, string a1){
	return intel[a1].size();
}

string check(map<string, set<string>>& intel, string a1, string a2){
	if (intel[a1].size() == 0 ){
		return "NO";
	}
	else{
		for (auto sinonim: intel[a1]){
			if (sinonim == a2){
				return "YES";
			}
		}
	}
	return "NO";
}

void add(map<string, set<string>>& intel, string a1, string a2){
	intel[a1].insert(a2);
	intel[a2].insert(a1);
}

int main(){
	int n;
	cin >> n;
	string command;
	map<string, set<string>> intel;
	for(int i=0; i<n; i++){
		cin >> command;
		if (command == "ADD") {
			string a1, a2;
			cin >> a1 >> a2;
			add(intel, a1, a2);
		}
		else if (command == "COUNT"){
			string a1;
			cin >> a1;
			cout << count(intel, a1) << endl;
		}
		else if (command == "CHECK"){
			string a1, a2;
			cin >> a1 >> a2;
			cout << check(intel, a1, a2) << endl;
		}
	}
}
