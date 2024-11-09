#include <iostream>
using namespace std;

//ZADANIE 2.1

int main() {
    int n;
    cout << "Podaj liczbe n: ";
    cin >> n;

    int totalSum = 0; // Zmienna przechowująca sumę całkowitą

    cout << "Prezentacja graficzna szeregu:" << endl;

    for (int i = 1; i <= n; i++) {
        int partialSum = 0; // Suma częściowa dla danego kroku
        for (int j = 1; j <= i; j++) {
            partialSum += j;
            cout << j;
            if (j < i) {
                cout << "+";
            }
        }
        cout << " = " << partialSum << endl;

        totalSum += partialSum; // Dodanie sumy częściowej do sumy całkowitej
    }

    cout << "Suma szeregu: " << totalSum << endl;

    return 0;
}
