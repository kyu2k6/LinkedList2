#include <iostream>
#include <cstring>
#include "Student.h"

//header guard
#ifndef NODE_H
#define NODE_H

using namespace std;

class Node {
 public:

  //constructors
  Node();
  Node(Student*, Node*);

  //destructor
  ~Node();
  
  //functions
  Node* getNext();
  Student* getStudent();
  void setNext(Node*);

  //variables
  Student* student;
  Node* next;

};

#endif
