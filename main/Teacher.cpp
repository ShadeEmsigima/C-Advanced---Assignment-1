#include "stdafx.h"
#include "Teacher.h"


Teacher::Teacher(std::string givenName)
{
	name = givenName;
	pTeacherList->push_back(givenName);
	//when making an obj, use assignToModule() from Module.h to assign
	//it a module, and add it to its vector list.
	std::cout << "Added teacher "+ pTeacherList->at(0) + " to vector list"<< std::endl;
}
	
Teacher::~Teacher()
{
	delete pTeacherList;
}

/*void Module::assignToModule()
{
	//Replace the variables that this class has different from the student class.
	//Other variables shall be marked with "virtual" so that the program knows
	//its elswhere to be found.
}*/