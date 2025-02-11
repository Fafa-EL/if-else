#include <iostream>
using namespace std;

int main() {
   int uang, lembar;

cout<<"masukkan nominal uang (rupiah): "<<endl;
cin>>uang;

if (uang>=100000){
    lembar = uang/100000;
    cout<<"pecahan 100k berjumlah: "<<lembar<<" lembar"<<endl;
    uang-=lembar*100000;
}if (uang>=50000){
    lembar = uang/50000;
    cout<<"pecahan 50k berjumlah: "<<lembar<<" lembar"<<endl;
    uang-=lembar*50000;
    }if (uang>=20000){
    lembar = uang/20000;
    cout<<"pecahan 20k berjumlah: "<<lembar<<" lembar"<<endl;
    uang-=lembar*20000;
    }if (uang>=10000){
    lembar = uang/10000;
    cout<<"pecahan 10k berjumlah: "<<lembar<<" lembar"<<endl;
    uang-=lembar*10000;
    }if (uang>=5000){
    lembar = uang/5000;
    cout<<"pecahan 5k berjumlah: "<<lembar<<" lembar"<<endl;
    uang-=lembar*5000;
    }if (uang>=1000){
    lembar = uang/1000;
    cout<<"pecahan 1k berjumlah: "<<lembar<<" lembar"<<endl;
    uang-=lembar*1000;
    }
   
    return 0;
}