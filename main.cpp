#include <iostream>

using namespace std;

int main()
{
    int iloscOsob;
    int iloscKawalkowPizzy = 8;
    int liczbaPozostalychKawalkow = 0;

    cout << "Ile jest osób?" << endl;
    cout << "> ";
    cin >> iloscOsob;
    if (iloscOsob == 0) {
        cout << "Brak osob do jedzenia pizzy!" << endl;
    }else if (iloscOsob > iloscKawalkowPizzy) {
        cout << "Za dużo osób, za mała pizza!" << endl;
    }else{
        cout << "Każdy dostanie po: " << iloscKawalkowPizzy / iloscOsob << endl;
        liczbaPozostalychKawalkow = (iloscKawalkowPizzy % iloscOsob);
        cout << "Dla organizatora pozostanie: " << liczbaPozostalychKawalkow << endl;




    }


    return 0;
}
