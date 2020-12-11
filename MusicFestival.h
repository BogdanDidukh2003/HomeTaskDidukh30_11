#pragma once
#include <vector>
#include <string>
#include "Musician.h"

using namespace std;

class MusicFestival
{
private:
	int maxBudget;
	int currentBudget;
	vector<Musician> vectorOfMusiciansOnFestival;

public:
	MusicFestival();
	MusicFestival(vector<Musician> vectorOfMusiciansOnFestival, int MaxBudget);
	~MusicFestival();
	int getMaxBudget();
	int getCurrentBudget();
	int getMusicianIndexInVector(vector<Musician> vectorOfMusiciansOnFestival, Musician musicianObject);
	void addMusician(Musician musicianObject);
	void deleteMusician(Musician musicianObject);
	void outputMusiciansOnFestival();
};
