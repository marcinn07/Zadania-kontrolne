#include <iostream>
using namespace std;

class figura {       
public:             
    int a,b,h;
    int obj,pole, dlkraw;
    void objetosc() {
        obj = a * b * h;
        cout << "V=" << obj << "cm^3" << endl;
    }
    void polepow() {
        pole = (2 * a * b) + (2 * b * h) + (2 * a * h);
        cout << "Pp=" << pole << "cm^2" << endl;
    }
    void krawedzie() {
        dlkraw = (4 * a ) + (4 * b ) + (4 * h);
        cout << "Dl.krawedzi=" << dlkraw << "cm" << endl;
    }
};


int main()
{

    int a, b, h;
    cout << "Podaj a: ";
    cin >> a;
    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj h: ";
    cin >> h;

    figura prostopadloscian;

    prostopadloscian.a = a;
    prostopadloscian.b = b;
    prostopadloscian.h = h;

    prostopadloscian.objetosc();
    prostopadloscian.polepow();
    prostopadloscian.krawedzie();
}
