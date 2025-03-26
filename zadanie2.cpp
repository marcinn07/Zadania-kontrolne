#include <iostream>
using namespace std;

class przeliczanie {
public:
    int m;
    int mile;
    void obliczanie() {
        mile = m * 0.00062137;
        cout << m << " metrow to " << mile << " mil" << endl;
    }

};

int main()
{

    int m;
    cout << "Podaj ilosc metrow: ";
    cin >> m;
    ;
    przeliczanie mile;

    mile.m = m;

    mile.obliczanie();
}
