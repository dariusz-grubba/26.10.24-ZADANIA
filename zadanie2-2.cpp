 #include <iostream>
 using namespace std;

 //ZADANIE 2.2

 int main() {
     int a, b;
     cout << "Podaj liczbe a: ";
     cin >> a;
     cout << "Podaj liczbe b: ";
     cin >> b;

     // A) Wypisz wprowadzone liczby
     cout << "Wprowadzone liczby: a = " << a << ", b = " << b << endl;

     // B) Wiersz gwiazdek o długości "a"
     cout << "\nWiersz gwiazdek o dlugosci " << a << ":" << endl;
     for (int i = 0; i < a; i++) {
         cout << "*";
     }
     cout << endl;

     // C) Kolumna gwiazdek o długości "b"
     cout << "\nKolumna gwiazdek o dlugosci " << b << ":" << endl;
     for (int i = 0; i < b; i++) {
         cout << "*" << endl;
     }

     // D) Wypełniony prostokąt gwiazdek o wymiarach "a" na "b"
     cout << "\nWypelniony prostokat " << a << "x" << b << ":" << endl;
     for (int i = 0; i < b; i++) {
         for (int j = 0; j < a; j++) {
             cout << "*";
         }
         cout << endl;
     }

     // E) Obramowanie prostokąta gwiazdek o wymiarach "a" na "b"
     cout << "\nObramowanie prostokata " << a << "x" << b << ":" << endl;
     for (int i = 0; i < b; i++) {
         for (int j = 0; j < a; j++) {
             // Wypisz gwiazdkę, jeśli jesteśmy na krawędzi prostokąta
             if (i == 0 || i == b - 1 || j == 0 || j == a - 1) {
                 cout << "*";
             } else {
                 cout << " ";
             }
         }
         cout << endl;
     }

     // F*) Trójkąt równoramienny z kątem prostym w lewym dolnym rogu
     cout << "\nTrojkat prostokatny z katem w lewym dolnym rogu:" << endl;
     for (int i = 1; i <= a; i++) {
         for (int j = 0; j < i; j++) {
             cout << "*";
         }
         cout << endl;
     }

     // G*) Trójkąt równoramienny z kątem prostym w prawym górnym rogu
     cout << "\nTrojkat prostokatny z katem w prawym gornym rogu:" << endl;
     for (int i = a; i > 0; i--) {
         for (int j = 0; j < a - i; j++) {
             cout << " ";
         }
         for (int k = 0; k < i; k++) {
             cout << "*";
         }
         cout << endl;
     }

     return 0;
 }
