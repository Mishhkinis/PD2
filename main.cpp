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

    if (pasirinkimas == 0) break;// Jei áveda 0, ciklui kaput

    if (pasirinkimas == 1 && n < 100) { // 1. pridet krc mokini
    cout << "Vardas: "; cin >> vardai[n];
    cout << "Kiek pazymiu (iki 10)? "; cin >> kiek[n];
    for (int j = 0; j < kiek[n]; j++) {// Ciklas paşymiø ávedimui kazkuriam mokiniui
    cout << j + 1 << "-as: "; cin >> pazymiai[n][j];
            }
            n++;// Padidina bendrà mokiniø skaièiø sàrağe
        }
    else if (pasirinkimas == 2) {// 2. parodo sarasa
    for (int i = 0; i < n; i++) {
    cout << i + 1 << ". " << vardai[i] << " | ";// Spausdina tik tiek paşymiø, kiek mokinys jø turi (pagal kiek[i])
    for (int j = 0; j < kiek[i]; j++) cout << pazymiai[i][j] << " ";
    cout << endl;
    }
    }

    else if (pasirinkimas == 3) {// keicia pazymi
    int m, p;
    cout << "Mokinio nr. ir pazymio nr.: "; cin >> m >> p;
    cout << "Naujas pazymys: "; cin >> pazymiai[m-1][p-1];
        }
    else if (pasirinkimas == 4) {
    int m;
    cout << "Kuri trinti? "; cin >> m; // istrina mokini is saraso
    for (int i = m - 1; i < n - 1; i++) { // visus po trinamojo esanèius mokinius paslenkame viena vieta á virğø
    vardai[i] = vardai[i+1];
    kiek[i] = kiek[i+1];
    for (int j = 0; j < 10; j++) pazymiai[i][j] = pazymiai[i+1][j];
    }
    n--;// Sumaşina bendrà mokiniø skaièiø
    }

    }
    return 0;
}
