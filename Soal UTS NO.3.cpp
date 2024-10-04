#include<iostream>
using namespace std;

int penjumlahan(int x, int y)
{
    return x+y;
}
int pengurangan(int x, int y)
{
    return x-y;
}
int perkalian(int x, int y)
{
    return x*y;
}
double pembagian(int x, int y) {
    if (y != 0) {
        return static_cast<double>(x) / y;
    } else {
        cout << "Error: Tidak dapat membagi dengan nol!" << endl;
        return 0;
    }
}
int main(){
    int pilihan;
    cout<<"Pilih Operasi Matematika yang ingin dilakukan"<<endl;
    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<"Masukkan Pilihan Anda: ";
    cin>>pilihan;

    switch(pilihan) {
     case 1: {
        int angka1;
        int angka2;
     cout<<"Masukkan Angka Pertama: ";
     cin>>angka1;
     cout<<"Masukkan Angka Kedua: ";
     cin>>angka2;
     cout<<"Hasil dari Penjumlahan dari "<<angka1<<" dan "<<angka2<<" adalah: "<<penjumlahan(angka1, angka2)<<endl;
     break;
    }
     case 2: {
        int angka1;
        int angka2;
     cout<<"Masukkan Angka Pertama: ";
     cin>>angka1;
     cout<<"Masukkan Angka Kedua: ";
     cin>>angka2;
     cout<<"Hasil dari Pengurangan dari "<<angka1<<" dan "<<angka2<<" adalah: "<<pengurangan(angka1, angka2)<<endl;
     break;
    }
    case 3: {
        int angka1;
        int angka2;
     cout<<"Masukkan Angka Pertama: ";
     cin>>angka1;
     cout<<"Masukkan Angka Kedua: ";
     cin>>angka2;
     cout<<"Hasil dari Perkalian dari "<<angka1<<" dan "<<angka2<<" adalah: "<<perkalian(angka1, angka2)<<endl;
     break;
    }
    case 4: {
        int angka1;
        int angka2;
     cout<<"Masukkan Angka Pertama: ";
     cin>>angka1;
     cout<<"Masukkan Angka Kedua: ";
     cin>>angka2;
     cout<<"Hasil dari Pembagian dari "<<angka1<<" dan "<<angka2<<" adalah: "<<pembagian(angka1, angka2)<<endl;
     break;
    }
    default:
        cout<<"Pilihan tidak valid!"<<endl;
    }
    return 0;
}
