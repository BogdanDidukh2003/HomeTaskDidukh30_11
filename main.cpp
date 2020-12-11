#include <iostream>
#include <vector>
#include <string>
#include "MusicFestival.h"
#include "Musician.h"

using namespace std;

int main()
{
    Musician alex("Alex", 900, 25);
    Musician billy("Billy", 1500, 45);
    Musician corney("Corney", 1000, 55);
    Musician danny("Danny", 1200, 20);
    Musician johny("Johny", 1400, 30);
    vector<Musician> malevichMusicians(2);
    malevichMusicians[0] = alex;
    malevichMusicians[1] = billy;
    MusicFestival Malevich(malevichMusicians, 5000);
    Malevich.outputMusiciansOnFestival();
    Malevich.addMusician(alex);
    Malevich.deleteMusician(alex);  
    Malevich.outputMusiciansOnFestival();
    return 0;
}
    