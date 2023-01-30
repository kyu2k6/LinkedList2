#include <iostream>
#include <iomanip>
#include "student.h"
#include "node.h"
#include <cstring>

using namespace std;

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
			cout << "add";
			continue;
		}

		if (strcmp(input, "print") == 0) {
			cout << "print";
			continue;
		}
		if (strcmp(input, "delete") == 0) {
			cout << "delete";
			continue;
		}
		if (strcmp(input, "average") == 0) {
			cout << "Average";
			continue;
		}
		if (strcmp(input, "quit") == 0) {
			play = false;
			continue;
		}
		else {
			cout << "Invalid Input" << endl;
		}


		
	}
	return 0;

}

void add() {


}

void print() {

}

void del() {

}

void average() {

}
