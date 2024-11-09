 #include <iostream>
 using namespace std;

 //ZADANIE 2.3

 int main() {
     int month;
     cout << "Podaj liczbe od 1 do 12, reprezentujaca miesiac: ";
     cin >> month;

     // Sprawdzenie czy liczba jest z przedzialu [1, 12]
     if (month < 1 || month > 12) {
         cout << "Podana liczba jest spoza przedzialu 1-12. Program zakonczony." << endl;
         return 1;
     }

     string monthName;
     int days;
     string weather;

     switch (month) {
         case 1:
             monthName = "Styczen";
             days = 31;
             weather = "pochmurno";
             break;
         case 2:
             monthName = "Luty";
             days = 28;
             weather = "pochmurno";
             break;
         case 3:
             monthName = "Marzec";
             days = 31;
             weather = "pochmurno";
             break;
         case 4:
             monthName = "Kwiecien";
             days = 30;
             weather = "slonecznie";
             break;
         case 5:
             monthName = "Maj";
             days = 31;
             weather = "slonecznie";
             break;
         case 6:
             monthName = "Czerwiec";
             days = 30;
             weather = "slonecznie";
             break;
         case 7:
             monthName = "Lipiec";
             days = 31;
             weather = "slonecznie";
             break;
         case 8:
             monthName = "Sierpien";
             days = 31;
             weather = "slonecznie";
             break;
         case 9:
             monthName = "Wrzesien";
             days = 30;
             weather = "slonecznie";
             break;
         case 10:
             monthName = "Pazdziernik";
             days = 31;
             weather = "pochmurno";
             break;
         case 11:
             monthName = "Listopad";
             days = 30;
             weather = "pochmurno";
             break;
         case 12:
             monthName = "Grudzien";
             days = 31;
             weather = "pochmurno";
             break;
         default:
             break;
     }

     cout << "Miesiac: " << monthName << endl;
     cout << "Liczba dni: " << days << endl;
     cout << "Pogoda: " << weather << endl;

     return 0;
 }
