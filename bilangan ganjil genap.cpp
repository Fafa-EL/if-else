#include <iostream>
using namespace std;

int main() {
    int angka;
    cout<<"Input angka: ";
    cin>>angka;
    
    if(angka%2 !=0){
        cout<<"Angka adalah bilangan ganjil"<<endl;
    }else{
        cout<<"Angka adalah bilangan genap"<<endl;
    }
    return 0;
}