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
	//create 3 teachers
	Teacher teacherCPP("Edwin");
	Teacher teacherPython("Valentijn");
	Teacher teacherHTML("Ton");


	//create a list for the teachers on the heap (not working)
	std::vector<Teacher>* pTeacherList = new std::vector<Teacher>();
	
	//pTeacherList->push_back(teacherCPP);

	int num = 2;
	std::cout << num << std::endl; //still normal now. Dont know how to get
	//the data out of a dereferenced pointer of something that has already
	//been created on the heap.

	//std::cout << *pTeacherList;

	//example vector
	std::vector<int> hi;
	hi.push_back(10);
	std::cout << hi[0];

	//create 10 students
	Student student1();
	Student student2();
	Student student3();

	//create 3 modules

	std::cout << std::endl;

	system("PAUSE");
}

