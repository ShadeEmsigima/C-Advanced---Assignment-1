#include "stdafx.h"
#include "Module.h"
#include <iostream>

Module::Module(std::string givenName)
{
	name = givenName;
	pModuleList->push_back(givenName);
	std::cout << "Added module " + pModuleList->at(0) + " to vector list" << std::endl;
	//make a module in the heap and save it to the list
}


Module::~Module()
{
	delete pModuleList;
}

void Module::assignToModule()
{
	//take the student or teacher obj here, and assign it its module
}

void Module::displayModuleList() 
{

}