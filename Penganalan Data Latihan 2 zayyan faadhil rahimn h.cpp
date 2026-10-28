
#include <iostream>
using namespace std;

int main() {
    string nama;
    float keaktifan, tugas, ujian;
    float nilaiKeaktifan, nilaiTugas, nilaiUjian, nilaiAkhir;

    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "\nNama Siswa : ";
    getline(cin, nama);

    cout << "Nilai Keaktifan : ";
    cin >> keaktifan;

    cout << "Nilai Tugas : ";
    cin >> tugas;

    cout << "Nilai Ujian : ";
    cin >> ujian;

    nilaiKeaktifan = keaktifan * 20 / 100;
    nilaiTugas = tugas * 30 / 100;
    nilaiUjian = ujian * 50 / 100;

    nilaiAkhir = nilaiKeaktifan + nilaiTugas + nilaiUjian;

    cout << "\nSiswa yang bernama " << nama << endl;
    cout << "Dengan nilai persentase yang dihasilkan:" << endl;
    cout << "Nilai Keaktifan * 20% : " << nilaiKeaktifan << endl;
    cout << "Nilai Tugas * 30% : " << nilaiTugas << endl;
    cout << "Nilai Ujian * 50% : " << nilaiUjian << endl;

    cout << "\nJadi siswa yang bernama " << nama
         << " memperoleh nilai akhir sebesar "
         << nilaiAkhir << endl;

    return 0;
}

