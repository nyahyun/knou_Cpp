#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <iostream>
#include <string>
#include "Person.h"

// Person의 파생 클래스 Student를 정의한다.
class Student : public Person {
	string school;
public:
	Student(const string& n, const string& s) : Person(n), school(n) { }
	string getschool() const { return school; }
	void print() const {
		Person::print();
		cout << " goes to " << school;
	}
};
#endif // STUDENT_H_INCLUDED