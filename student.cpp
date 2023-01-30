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

void Student::print() {
	cout << getfirstname() << getlastname() << ", " << "ID: " << getid() 
		<< ", " << "GPA: " << setprecision(2) << getgpa();	
}
