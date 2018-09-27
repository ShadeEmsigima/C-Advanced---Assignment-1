#include "stdafx.h"
#include "Student.h"


Student::Student(std::string givenName)
{
	name = givenName;
	ecPoints = 0;

}


Student::~Student()
{
	//delete pStudentList;
}

/*void Module::assignToModule() 
{
	//Replace the variables that this class has different from the teacher class.
	//Other variables shall be marked with "virtual" so that the program knows 
	//you know there are variables missing, but that its elswhere to be found.
}*/

void Student::addStudentToList(Student studentObj) 
{
	//pStudentList->push_back(studentObj);
	//std::cout << "Added student " << pStudentList->at(0).name << " to vector list" << std::endl;
}