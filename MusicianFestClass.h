#pragma once
#include <vector>
using namespace std;

class Musician
{
private:
	string Name;
	int Salary;
	int Age;
public:
	string getName()
	{
		return this->Name;
	}
	int  getSalary()
	{
		return this->Salary;
	}
	int getAge()
	{
		return this->Age;
	}
	Musician() 
	{
		this->Name = "0";
		this->Salary = 0;
		this->Age = 0;
	};
	Musician(string valueName, int valueSalary, int valueAge)
	{
		this->Name = valueName;
		this->Salary = valueSalary;
		this->Age = valueAge;
	}
};

class MusicFestival
{
private:
	int MaxBudget;
	int CurrentBudget;
	vector<Musician> arrMusician;
public:
	MusicFestival() 
	{

	};
	MusicFestival(vector<Musician> arrMusician, int MaxBudget)
	{
		this->arrMusician = arrMusician;
		this->MaxBudget = MaxBudget;
		for (int i = 0; this->CurrentBudget < MaxBudget && i < size(this->arrMusician); i++)
		{
			this->CurrentBudget += this->arrMusician[i].getSalary();
		};
	};
	~MusicFestival()
	{
	}
	/*friend bool operator==(Musician &man1, Musician &man2)
	{
		bool a = man1.getName() == man2.getName();
		bool b = man1.getSalary() == man2.getSalary();
		bool c = man1.getAge() == man2.getAge();
		return a && b && c;
	};*/
	int AlreadyIs(vector<Musician> arrMusician, Musician man)
	{
		bool a;
		int i = 0;
		for (; i < size(this->arrMusician); i++)
		{
			a = ((arrMusician[i]).getName() == man.getName() &&
			(arrMusician[i]).getSalary() == man.getSalary() &&
			(arrMusician[i]).getAge() == man.getAge());
			if (a)break;
			else
				;
		}
		if (a)
			return i;
		else
			return -1;
	}
	void AddMusician(Musician man)
	{
		if ((this->CurrentBudget + man.getSalary()) < (this->MaxBudget) && AlreadyIs(this->arrMusician, man) == -1)
		{
			this->arrMusician.push_back(man);
			CurrentBudget += man.getSalary();
			cout << "Added a musician " << man.getName() << endl;
		}
		else
		{
			cout << "Cannot add a musician " << man.getName() <<endl;
		}
	};
	void DeleteMusician(Musician man)
	{
		
			int i = AlreadyIs(this->arrMusician, man);
			if (i > -1)
			{
				for (; i < (size(this->arrMusician)) - 1; i++)
				{
					arrMusician[i] = arrMusician[i + 1];
				}
				arrMusician.pop_back();
				cout << "Deleted a musician " << man.getName() << endl;
			}
			else
			{
				cout << "Cannot delete a musician " << man.getName() << endl;
			};
			
	};
	void Output()
	{
		for (int i = 0; i < (size(this->arrMusician)); i++)
		{
			cout << "Musician #" << i+1 << " is " << this->arrMusician[i].getName() <<
			". His Salary is " << (*this).arrMusician[i].getSalary() << ". He is " << this->arrMusician[i].getAge() << " years old" << endl;
		}
	};
};