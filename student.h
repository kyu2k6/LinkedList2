#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

class Student {

	public:
	Student();
	~Student();
	
	char* getfirstname();
       	char* getlastname();
	int* getid();
	float* getgpa();
	void setInfo();
	void print();

	private:
	char firstname[20];
	char lastname[20];
	int id;
	float gpa;
	
};
#endif


