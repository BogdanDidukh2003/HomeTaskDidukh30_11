#pragma once
#include <vector>
#include <string>

using namespace std;

class Musician
{
private:
	string name;
	int salary;
	int age;

public:
	Musician();
	Musician(string name, int salary, int age);
	~Musician();
	string getName();
	int  getSalary();
	int getAge();
	bool operator==(Musician& musicianObject);
};
