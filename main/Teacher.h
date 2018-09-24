#pragma once
#include <string>
#include <vector>
#include "Module.h"
class Teacher
	//include Module.h so that you can use its assignToModule() function. 
	//Am I doing this right?
{
private:
	std::vector<std::string>* pTeacherList = new std::vector<std::string>();
	std::string name;
public:
	Teacher(std::string givenName);
	~Teacher();
};

