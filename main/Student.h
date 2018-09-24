#pragma once
#include <string>
#include <vector>
class Student
{
private:
	std::string name;
	std::vector <Student> studentsList;
public:
	Student();
	~Student();

	//void assignToModule(); Guess I dont need to declare this?
};

