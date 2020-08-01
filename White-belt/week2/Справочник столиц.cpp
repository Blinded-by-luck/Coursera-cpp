#include <iostream>
#include <map>
using namespace std;

string CHANGE_CAPITAL(map <string, string>& intel, string country, string capital){
	if (intel[country].size() == 0) {
		intel[country] = capital;
		return "Introduce new country " + country + " with capital " + capital;
	}
	else if (intel[country] == capital){
		return "Country " + country + " hasn't changed its capital";
	}
	else{
		string old_capital = intel[country];
		intel[country] = capital;
		return "Country " + country + " has changed its capital from " + old_capital + " to " + capital;
	}
}

string RENAME(map <string, string>& intel, string  old_country_name, string  new_country_name){
	if (new_country_name == old_country_name){
			return "Incorrect rename, skip";
		}
	else if (intel[old_country_name].size() == 0){
		intel.erase(old_country_name);
		return "Incorrect rename, skip";
	}
	else if (intel[new_country_name].size() != 0) {
		return "Incorrect rename, skip";
	}
	else{
		string capital = intel[old_country_name];
		intel.erase(old_country_name);
		intel[new_country_name] = capital;
		return "Country " + old_country_name + " with capital " + capital + " has been renamed to " + new_country_name;
	}
}

string ABOUT(map<string, string>& intel, string country){
	if (intel[country].size() == 0) {
		intel.erase(country);
		return "Country "+country+" doesn't exist";
	}
	else {
		return "Country "+ country +" has capital "+ intel[country];
	}
}

string DUMP(const map<string, string>& intel){
	if (intel.size() == 0) return "There are no countries in the world";
	else{
		string viv;
		for(const auto& item: intel){
			viv += item.first+"/"+item.second+" ";
		}
		return viv;
	}
}

int main(){
	map<string, string> work_map;
	int n;
	cin>> n;
	for(int i=0; i<n; i++){
		string command;
		cin>>command;
		if (command == "CHANGE_CAPITAL"){
			string country, capital;
			cin >> country >> capital;
			cout<< CHANGE_CAPITAL(work_map, country, capital)<< endl;
		}
		else if (command == "RENAME"){
			string old_country_name, new_country_name;
			cin >> old_country_name >> new_country_name;
			cout<< RENAME(work_map, old_country_name, new_country_name)<< endl;
		}
		else if (command == "ABOUT"){
			string country;
			cin >> country;
			cout<< ABOUT(work_map, country)<<endl;
		}
		else if(command == "DUMP"){
			cout<< DUMP(work_map) << endl;
		}
	}
}
