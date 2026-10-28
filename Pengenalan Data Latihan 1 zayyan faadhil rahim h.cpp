
#include <iostream>
using namespace std;

int main() {
    string npm, nama;
    float tugas1, tugas2, tugas3, rataRata;

    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "NPM : ";
    cin >> npm;
    cin.ignore();

    cout << "Nama : ";
    getline(cin, nama);

    cout << "Nilai Tugas I : ";
    cin >> tugas1;

    cout << "Nilai Tugas II : ";
    cin >> tugas2;

    cout << "Nilai Tugas III : ";
    cin >> tugas3;

    rataRata = (tugas1 + tugas2 + tugas3) / 3;

    cout << "\nNPM " << npm << " Siswa yang bernama "
         << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rataRata
         << " dari hasil tugas yang diikutinya." << endl;

    return 0;
}


