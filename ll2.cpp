#include <iostream>
#include <iomanip>
#include "student.h"
#include "node.h"
#include <cstring>

using namespace std;

void ADD(Node*& head, Node* old, Student* student);
void PRINT(Node* next);
void AVERAGE(Node* head, float sum, int count);
void DELETE(Node*& head, Node* current, Node* old, int id);


int main() {
	
	bool play = true;
	char input[10];
	Node* head = NULL;
	int count = 0; //num of nodes
	
	while (play == true) {
		
		cout << "Would you like to: add, print, delete, average, or quit? ";
		cin.get(input, 10);
		cin.get();
		
		if (strcmp(input, "add") == 0) {
			//creates student
			count++;
			Student* newstudent = new Student();
			cout << "First Name: ";
			cin.get(newstudent->getfirstname(), 20);
			cin.get();
			cout << "Last Name: ";
			cin.get(newstudent->getlastname(), 20);
			cin.get();
			cout << "ID: ";
			cin >> *newstudent->getid();
			cin.get();
			cout << "GPA: ";
			cin >> *newstudent->getgpa();
			cin.get();
			ADD(head, NULL, newstudent);
		}
		else if (strcmp(input, "print") == 0) {
			if (head == NULL) {
				cout << endl << "Empty List." << endl;
			}
			else {
				PRINT(head);
			}
			
		}
		else if (strcmp(input, "delete") == 0) {
			int id;
			count--;
			cout << "Delete which ID? ";
			cin >> id;
			cin.get();
			DELETE(head, head, NULL, id);
		}
		else if (strcmp(input, "average") == 0) {
			float sum = 0;
			if(head == NULL) {
				cout << "Nothin to Average" << endl;
			}
			else {
				AVERAGE(head, sum, count);
			}
		}
		else if (strcmp(input, "quit") == 0) {
			play = false;
		
		}
		else {
			cout << "Invalid Input" << endl;
		}		
	}
	
	return 0;

}

void ADD(Node* &head, Node* old, Student* student) {
	Student* oldstudent = new Student();
	Node* tempNode;
	Node* tempOld;
	Node* tempHead;
	//adds to node
	if (head == NULL) {
		tempNode = new Node(student, NULL);
		if (old == NULL) {
			head = tempNode;
			return;
		}

		else {
			old->setNext(tempNode);
		}
	}
	else {
		oldstudent = head->getStudent();
		tempOld = head;
		tempHead = head->getNext();
		//uses id to check order
		if (*(oldstudent->getid()) < *(student->getid())) {
			ADD(tempHead, tempOld, student);
		}
		else {
			tempNode = new Node(student, old);
			tempNode->setNext(head);
			if (old = NULL) {
				head = tempNode;
			}
			else {
				old->setNext(tempNode);
				tempNode->setNext(head);
			}
		}
	}

}

void PRINT(Node* next) {
	if (next != NULL) {
		next->getStudent()->print();
		PRINT(next->getNext());
	}
}

void AVERAGE(Node* head, float sum, int count) {
	//uses sum and node count for average
	if (head != NULL) {
		sum += *(head->getStudent()->getgpa());
		AVERAGE(head->getNext(), sum, count);
	}
	else {
		cout << fixed << setprecision(2) << (float)(sum/count) << endl;
	}
}

void DELETE(Node* &head, Node* current, Node* old, int id) {
	if (head == NULL) {
		return;
	}
	if (*current->getStudent()->getid() == id) {
		if(old == NULL) {
			head = current -> getNext();
		}
		else {
			old -> setNext(current->getNext());
		}	
		delete current;
		return;
	}
	if (current->getNext() != NULL) {
		DELETE(head, current -> getNext(), current, id);
	}
}
