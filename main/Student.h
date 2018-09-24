#pragma once
#include <string>
#include <vector>
#include "Module.h"
class Student
	//include Module.h so that you can use its assignToModule() function. 
	//Am I doing this right?
{
private:
	std::vector <Student> studentsList;
	std::string name;
public:
	Student();
	~Student();

	//void assignToModule(); Guess I dont need to declare this?
};

