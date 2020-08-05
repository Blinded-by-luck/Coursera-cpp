#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
using namespace std;


class Person {
public:
  void ChangeFirstName(int year, const string& first_name) {
	  yf1.push_back({year, first_name});
	  sort(begin(yf1), end(yf1), [](tuple<int, string> i, tuple<int, string> j){return get<0>(i) < get<0>(j);});
   }
  void ChangeLastName(int year, const string& last_name) {
	  yf2.push_back({year, last_name});
	  sort(begin(yf2), end(yf2), [](tuple<int, string> i, tuple<int, string> j){return get<0>(i) < get<0>(j);});
  }
  string GetFullName(int year) {
	  string fn = "", ln = "";

	  if (yf1.size() == 1 && get<0>(yf1[0]) <= year) fn = get<1>(yf1[0]);
	  else if (yf1.size() > 1){
	  for (int i = yf1.size()-1; i >= 0; i--){
		  if (year >= get<0>(yf1[i])){
			  fn += get<1>(yf1[i]);
			  break;
		  }
	  }
	  }
	  if (yf2.size() == 1 && get<0>(yf2[0]) <= year) ln = get<1>(yf2[0]);
	  else if (yf2.size() > 1){
		  for (int i = yf2.size()-1; i >= 0; i--){
				  if (year >= get<0>(yf2[i])){
					  ln += get<1>(yf2[i]);
					  break;
				  }
			  }
	  }
	  if (fn.size() == 0 && ln.size() == 0) return "Incognito";
	  else if (fn.size() == 0) return ln + " with unknown first name";
	  else if (ln.size() == 0) return fn + " with unknown last name";
	  return fn + " " + ln;
  }
private:
  vector<tuple<int, string>> yf1, yf2;

};
/*
int main() {
  Person person;

  person.ChangeFirstName(1965, "Polina");
  person.ChangeLastName(1967, "Sergeeva");
  for (int year : {1900, 1965, 1990}) {
    cout << person.GetFullName(year) << endl;
  }

  person.ChangeFirstName(1970, "Appolinaria");
  for (int year : {1969, 1970}) {
    cout << person.GetFullName(year) << endl;
  }

  person.ChangeLastName(1968, "Volkova");
  for (int year : {1969, 1970}) {
    cout << person.GetFullName(year) << endl;
  }

  return 0;
}*/
