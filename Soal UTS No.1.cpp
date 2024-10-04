#include <iostream>
#include <string>
using namespace std;

double hitungNilaiAkhir(double absen,double tugas,double uts,double uas) {
    double nilaiAkhir = (absen*0.10) + (tugas*0.20) + (uts*0.30) + (uas*0.40);
    return nilaiAkhir;
}

char tentukanHurufMutu(double nilaiAkhir) {
    if (nilaiAkhir >=85 && nilaiAkhir <100) {
        return 'A';
    } else if (nilaiAkhir >=80 && nilaiAkhir <85) {
        return 'B';
    } else if (nilaiAkhir >=75 && nilaiAkhir <80) {
        return 'C';
    } else if (nilaiAkhir >=70 && nilaiAkhir <75) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    string nama;
    string npm;
    double absen, tugas, uts, uas, nilaiAkhir;
    char hurufMutu;

    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "Masukkan NPM: ";
    cin >> npm;
    cout << "Masukkan Nilai Absen (0-100): ";
    cin >> absen;
    cout << "Masukkan Nilai Tugas (0-100): ";
    cin >> tugas;
    cout << "Masukkan Nilai UTS (0-100): ";
    cin >> uts;
    cout << "Masukkan Nilai UAS (0-100): ";
    cin >> uas;
    nilaiAkhir = hitungNilaiAkhir(absen, tugas, uts, uas);
    hurufMutu = tentukanHurufMutu(nilaiAkhir);

    cout << "\n=== Hasil Akhir Mahasiswa ===" << endl;
    cout << "Nama: " << nama << endl;
    cout << "NPM: " << npm << endl;
    cout << "Nilai Absen: " << absen << endl;
    cout << "Nilai Tugas: " << tugas << endl;
    cout << "Nilai UTS: " << uts << endl;
    cout << "Nilai UAS: " << uas << endl;
    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    cout << "Huruf Mutu: " << hurufMutu << endl;

    return 0;
}
