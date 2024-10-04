#include<iostream>
using namespace std;
int main() {
    int baris, bintang, a;
    cout<<"Masukkan jumlah baris: ";
    cin>>a;

    for(baris=1; baris<=a; baris++){
            for(bintang=1; bintang<=baris; bintang++){
                cout<<"*";
            }
            cout<<endl;
    }
 return 0;
}
