#pragma once
#include <string>
#include <vector>
class Teacher
{
private:
	std::string name;
	//std::vector<Teacher>* pTeacherList = new std::vector<Teacher>();
public:
	Teacher(std::string givenName);
	~Teacher();
};