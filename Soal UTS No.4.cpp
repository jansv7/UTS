#include<iostream>
using namespace std;
int main(){
    int batas;
    cout<<"Masukkan batas angka: ";
    cin>>batas;

    cout<<"Bilangan ganjil adalah: "<<endl;
        for(int i=1; i<=batas; i++) {
            if(i%2!=0) {
            cout<<i<<endl;
            }
    }
    cout<<endl;

    cout<<"Bilangan genap adalah: "<<endl;
        for(int i=1; i<=batas; i++) {
            if (i%2==0) {
            cout<<i<<endl;
            }
    }
    cout<<endl;

    return 0;
}
