#pragma once
#include <string>
#include <vector>
#include <iostream>
class Teacher
{
private:
	std::string name;
	//create a list for the teachers on the heap
	std::vector<std::string>* pTeacherList = new std::vector<std::string>();
public:
	Teacher(std::string givenName);
	~Teacher();
};