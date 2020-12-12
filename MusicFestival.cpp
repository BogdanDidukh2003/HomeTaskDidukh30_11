#include <iostream>
#include <vector>
#include <string>
#include "MusicFestival.h"

using namespace std;

MusicFestival::MusicFestival()
{

};

MusicFestival::MusicFestival(vector<Musician> vectorOfMusiciansOnFestival, int MaxBudget)
{
	this->vectorOfMusiciansOnFestival = vectorOfMusiciansOnFestival;
	this->maxBudget = MaxBudget;
	for (int i = 0; this->currentBudget < MaxBudget && i < this->vectorOfMusiciansOnFestival.size(); i++)
	{
		this->currentBudget += this->vectorOfMusiciansOnFestival[i].getSalary();
	};
};

MusicFestival::~MusicFestival()
{

};

int MusicFestival::getMaxBudget()
{
	return this->maxBudget;
};

int MusicFestival::getCurrentBudget()
{
	return this->currentBudget;
};

int MusicFestival::getMusicianIndexInVector(vector<Musician> vectorOfMusiciansOnFestival, Musician musicianObject)
{
	bool isFoundInTheArray = false;
	int musicianIndexInVector = 0;
	for (; musicianIndexInVector < this->vectorOfMusiciansOnFestival.size(); musicianIndexInVector++)
	{
		isFoundInTheArray = vectorOfMusiciansOnFestival[musicianIndexInVector] == musicianObject;
		if (isFoundInTheArray)break;
	}
	if (isFoundInTheArray)
		return musicianIndexInVector;
	else
		return -1;
};

void MusicFestival::addMusician(Musician musicianObject)
{
	if ((this->currentBudget + musicianObject.getSalary()) < (this->maxBudget) && getMusicianIndexInVector(this->vectorOfMusiciansOnFestival, musicianObject) == -1)
	{
		this->vectorOfMusiciansOnFestival.push_back(musicianObject);
		currentBudget += musicianObject.getSalary();
		cout << "Added a musician " << musicianObject.getName() << endl;
	}
	else
	{
		cout << "Cannot add a musician " << musicianObject.getName() << endl;
	}
};

void MusicFestival::deleteMusician(Musician musicianObject)
{

	int musicianIndexInVector = getMusicianIndexInVector(this->vectorOfMusiciansOnFestival, musicianObject);
	if (musicianIndexInVector > -1)
	{
		for (; musicianIndexInVector < this->vectorOfMusiciansOnFestival.size() - 1; musicianIndexInVector++)
		{
			vectorOfMusiciansOnFestival[musicianIndexInVector] = vectorOfMusiciansOnFestival[musicianIndexInVector + 1];
		}
		vectorOfMusiciansOnFestival.pop_back();
		cout << "Deleted a musician " << musicianObject.getName() << endl;
	}
	else
	{
		cout << "Cannot delete a musician " << musicianObject.getName() << endl;
	};
};

void MusicFestival::outputMusiciansOnFestival()
{
	for (int i = 0; i < this->vectorOfMusiciansOnFestival.size(); i++)
	{
		cout << "Musician #" << i + 1 << " is " << this->vectorOfMusiciansOnFestival[i].getName() <<
			". His Salary is " << (*this).vectorOfMusiciansOnFestival[i].getSalary() << ". He is " << this->vectorOfMusiciansOnFestival[i].getAge() << " years old" << endl;
	}
};
