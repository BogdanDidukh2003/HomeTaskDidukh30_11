#include <iostream>
#include <vector>
#include <string>
#include "Musician.h"

using namespace std;



Musician::Musician()
{
	this->name = "0";
	this->salary = 0;
	this->age = 0;
};

Musician::Musician(string name, int salary, int age)
{
	this->name = name;
	this->salary = salary;
	this->age = age;
};

Musician::~Musician()
{

};

string Musician::getName()
{
	return this->name;
};

int Musician::getSalary()
{
	return this->salary;
};

int Musician::getAge()
{
	return this->age;
};

bool Musician::Musician::operator==(Musician& musicianObject)
{
	bool isNameEqual = this->getName() == musicianObject.getName();
	bool isSalaryEqual = this->getSalary() == musicianObject.getSalary();
	bool isAgeEqual = this->getAge() == musicianObject.getAge();
	return isNameEqual && isSalaryEqual && isAgeEqual;
};

