#include "stdafx.h"
#include "Module.h"
#include <iostream>

Module::Module(std::string name)
{
	std::cout << "Making module " + name << std::endl;
	//make a module in the heap and save it to the list
}


Module::~Module()
{
	//destroy the module
}

void Module::assignToModule()
{
	//take the student or teacher obj here, and assign it its module
}

void Module::displayModuleList() 
{

}