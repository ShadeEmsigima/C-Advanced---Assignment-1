#pragma once
#include <string>
#include <vector>
#include <iostream>
class Student
{
private:
public:
	std::string name;
	int ecPoints;
	Student(std::string givenName);
	~Student();
	void addStudentToList(Student studentObj);

	//void assignToModule(); Guess I dont need to declare this?
};

