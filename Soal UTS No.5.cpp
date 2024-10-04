#include<iostream>
using namespace std;
int main(){
    float beratBadan;
    float tinggiBadan;
    float imt;
    float tinggi;
    cout<<"Masukkan Berat Badan Anda (Kg): "<<endl;
    cin>>beratBadan;
    cout<<"Masukkan Tinggi Badan Anda (Cm): "<<endl;
    cin>>tinggiBadan;
    tinggi=tinggiBadan/100.0;
    imt= beratBadan/ (tinggi*tinggi);

    cout<<"Indeks Massa Tubuh(IMT): "<<imt<<endl;

    if(imt<18.4){
        cout<<"Berat Badan Kurang"<<endl;
    } else if(imt >=18.4 && imt<24.9){
        cout<<"Berat Badan Ideal"<<endl;
    } else if(imt>=25 && imt<29.9){
        cout<<"Berat Badan Lebih"<<endl;
    } else if(imt>=30 && imt<39.9){
        cout<<"Gemuk"<<endl;
    } else {
        cout<<"Sangat Gemuk"<<endl;
    }
    return 0;
}
