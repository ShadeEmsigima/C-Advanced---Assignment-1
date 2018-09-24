#include "stdafx.h"
#include "Teacher.h"
#include <iostream>


Teacher::Teacher(std::string givenName)
{
	name = givenName;
	//when making an obj, use assignToModule() from Module.h to assign
	//it a module, and add it to its vector list.
	//std::cout << "Created teacher  " << givenName << std::endl;
	//std::cout << pTeacherList << " ";
}
	
Teacher::~Teacher()
{
}

/*void Module::assignToModule()
{
	//Replace the variables that this class has different from the student class.
	//Other variables shall be marked with "virtual" so that the program knows
	//its elswhere to be found.
}*/