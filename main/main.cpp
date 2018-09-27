/*1) print a “lijst”  of modules, with teachers & students
2) show total EC points per student
3) Change EC of 1 module: show total EC points per student
4) Remove student from module, and show the “lijst” again*/

#include "stdafx.h" //remove this file when handing in
#include "Teacher.h"
#include "Student.h"
#include "Module.h"
#include <iostream>
#include <string>



int main()
{
	//create 3 teachers on heap
	Teacher teacherCPP("Edwin");
	Teacher teacherPython("Valentijn");
	Teacher teacherHTML("Ton");

	std::cout << std::endl;

	//create 10 students on heap
	//Im trying to add objects of students to their list using a seperate method within 
	//their datatype class.
	//Student obj("Li");

	//make the vector lists
	std::vector<Student>* pStudentList = new std::vector<Student>();

	Student students("Li");
	pStudentList->push_back(students);


	Student student1("A");
	pStudentList->push_back(student1);
	Student student2("B");
	pStudentList->push_back(student2);
	Student student3("C");
	pStudentList->push_back(student3);
	Student student4("D");
	pStudentList->push_back(student4);
	Student student5("E");
	pStudentList->push_back(student5);
	Student student6("F");
	pStudentList->push_back(student6);
	Student student7("G");
	pStudentList->push_back(student7);
	Student student8("H");
	pStudentList->push_back(student8);
	Student student9("I");
	pStudentList->push_back(student9);
	Student student10("J");
	pStudentList->push_back(student10);

	for (int i = 0; i < 11; i++) 
	{std::cout << "The list looks like " << pStudentList->at(0).name << " to vector list" << std::endl;}

	std::cout << std::endl;

	//create 3 modules on heap
	Module CPP("C++");
	Module Python("Python");
	Module HTML("HTML");

	//delete everything
	delete pStudentList;
	std::cout << std::endl;

	system("PAUSE");
}

