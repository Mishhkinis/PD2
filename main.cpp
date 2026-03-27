#include <iostream>
#include <string>

using namespace std;

int main() {
    string vardai[100];
    int pazymiai[100][10];
    int kiek[100]; // Kiek kiekvienas mokinys turi pazymiu (pvz. vienas 3, kitas 10)
    int n = 0; // Mokiniu skaicius
    int pasirinkimas;

    while (true) {
        cout << "\n1. Prideti  2. Rodyti  3. Keisti  4. Trinti  0. Baigti\n";
        cin >> pasirinkimas;

        if (pasirinkimas == 0) break;

        if (pasirinkimas == 1 && n < 100) {
            cout << "Vardas: "; cin >> vardai[n];
            cout << "Kiek pazymiu (iki 10)? "; cin >> kiek[n];
            for (int j = 0; j < kiek[n]; j++) {
                cout << j + 1 << "-as: "; cin >> pazymiai[n][j];
            }
            n++;
        }
        else if (pasirinkimas == 2) {
            for (int i = 0; i < n; i++) {
                cout << i + 1 << ". " << vardai[i] << " | ";
                for (int j = 0; j < kiek[i]; j++) cout << pazymiai[i][j] << " ";
                cout << endl;
            }
        }

    }
    return 0;
}
