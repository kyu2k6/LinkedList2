#include <iostream>
#include <cstring>
#include <iomanip>
#include "student.h"

using namespace std;

student::student() {

}

student::~student() {
	
}

char* student::getfirstname() {
	return firstname;
}

char* student::getlastname() {
	return lastname;
}

int* student::getid() {
	return &id;
}

float* student::getgpa() {
	return &gpa;
}

void student::print() {
	cout << getfirstname() << getlastname() << ", " << "ID: " << getid() 
		<< ", " << "GPA: " << setprecision(2) << getgpa();	
}

