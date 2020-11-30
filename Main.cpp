    #include <iostream>
    #include"Musician.h"
    #include<stdio.h>
    #include <cstdlib>
    #include"iomanip"
    using namespace std;


    int main()
    {
        Musician Alex("Alex", 900, 25);
        Musician Billy("Billy", 1500, 45);
        Musician Corney("Corney", 1000, 55);
        Musician Danny("Danny", 1200, 20);
        Musician Johny("Johny", 1400, 30);
        vector<Musician> arr(2);
        arr[0] = Alex;
        arr[1] = Billy;
        MusicFestival Malevich(arr,5000);
        Malevich.Output();
        Malevich.AddMusician(Alex);
        Malevich.DeleteMusician(Alex);
        Malevich.Output();
        return 0;
    }

    