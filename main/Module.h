#pragma once
#include <string>
#include <vector>
class Module
{
private:
	std::string name;
	int ecPoints;
public:
	std::vector <Module> pmoduleList;// this might have to become a list of pointers, 
	//since two classes rely on eachothers info but both .h files contain #pragma once.
	//so that the teachers and students must be able to be assigned to here
	Module(std::string name);
	~Module();

	void assignToModule(); //I make this function so that both student and teacher 
	//can be assigned to a module.
	void displayModuleList();//I added this function to complete the first assignment
};

