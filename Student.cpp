#include "Student.h"
#include <iostream>
#include <cstring>

// Assign studentId and name
void Student::assignDetails(int studentid,char name[]) {
  studentId = studentid;
  strcpy(Name,name);
}

// Display StudentId and Name
void Student::display() {
	
 std::cout<<"Student ID: "<<studentId;
 std::cout<<"\n";
 std::cout<<"Name: "<<Name;
}