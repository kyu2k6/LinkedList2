#include <iostream>
#include <cstring>
#include <iomanip>
#include "student.h"

using namespace std;

Student::Student() {

}

Student::~Student() {
	
}

char* Student::getfirstname() {
	return firstname;
}

char* Student::getlastname() {
	return lastname;
}

int* Student::getid() {
	return &id;
}

float* Student::getgpa() {
	return &gpa;
}

void Student::setInfo() {

}

void Student::print() {
	cout << getfirstname() << ' ' << getlastname() << ", " << "ID: " << id 
		<< ", " << "GPA: " << fixed << setprecision(2) << gpa << endl;
}
