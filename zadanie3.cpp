﻿#include <iostream>

using namespace std;

class przeliczanie {
public:
    int kilowaty;
    int kmh;
    void obliczanie() {
        kmh = kilowaty * 1, 36;
        cout << kilowaty << " kilowatow to " << kmh << " km/h" << endl;
    }

};

int main()
{

    int kilowaty;
    cout << "Podaj ilosc kilowaty: ";
    cin >> kilowaty;
    ;
    przeliczanie kmh;

    kmh.kilowaty = kilowaty;

    kmh.obliczanie();
}