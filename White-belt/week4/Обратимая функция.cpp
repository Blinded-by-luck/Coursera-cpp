
#include <algorithm>
#include <map>
#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Specialization{
	string value;
	explicit Specialization(const string& Value){
		value = Value;
	}
};

struct Course{
	string value;
	explicit Course(const string& Value){
		value = Value;
	}
};

struct Week{
	string value;
	explicit Week(const string& Value){
		value = Value;
	}
};


struct LectureTitle {
  string specialization;
  string course;
  string week;
  LectureTitle (Specialization new_specialization, Course new_course, Week new_week){
	  specialization = new_specialization.value;
	  course = new_course.value;
	  week = new_week.value;
  }
};
/*
int main(){
LectureTitle title(
    Specialization("C++"),
    Course("White belt"),
    Week("4th")
);
}*/
