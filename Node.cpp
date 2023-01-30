#include <iostream>
#include <cstring>
#include "Student.h"
#include "Node.h"

using namespace std;

//constructors
Node::Node() {
  student = new Student();
  next = NULL;
}

Node::Node(Student* newstudent, Node* newnext) {
  student = newstudent;
  next = newnext;
  student->setInfo();
}

//functions
Node* Node::getNext() {
  return next;
}

Student* Node::getStudent() {
  return student;
}

void Node::setNext(Node* newnext) {
  next = newnext;
}

//destructor
Node::~Node() {
  delete student;
}
