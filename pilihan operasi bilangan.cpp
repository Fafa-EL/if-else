#include <iostream>
using namespace std;

int main() {
    int pilih;
    float a, b;
    
     cout<<"Menu Kategori: "<<endl;
    cout<<"1. Penjumlahan\n"<<"2. Pengurangan\n"<<"3. perkalian\n"<<"4. Pembagian\n"<<endl;

    cout<<"Input angka 1 : ";
    cin>>a;
    cout<<"Input angka 2 : ";
    cin>>b;
    cout<<"pilih opsi kategori : ";
    cin>>pilih;
    
    if (pilih==1){
        cout<<"pilihan operasi bilangan : Penjumlahan"<<endl;
        cout<<"hasil dari "<<a<< " + "<<b<<" adalah = "<<a+b<<endl;
    }else if (pilih==2){
        cout<<"pilihan operasi bilangan : Pengurangan"<<endl;
        cout<<"hasil dari "<<a<< " - "<<b<<" adalah = "<<a-b<<endl;
    }else if (pilih==3){
        cout<<"pilihan operasi bilangan : Perkalian"<<endl;
        cout<<"hasil dari "<<a<< " X "<<b<<" adalah = "<<a*b<<endl;
    }else if (pilih==4){
        cout<<"pilihan operasi bilangan : Pembagian"<<endl;
        cout<<"hasil dari "<<a<< " : "<<b<<" adalah = "<<a/b<<endl;
    }else{
        cout<<"pilihan tidak tersedia."<<endl;
    }
    return 0;
}