//menggunakan else if//
/*#include <iostream>
using namespace std;
int main() {
   string lampu;
    
    cout<<"warna lampu: ";
    cin>>lampu;
    
    if(lampu=="Merah"){
        cout<<"berhenti!";
    }else if(lampu=="Kuning"){
        cout<<"bersiap!";
    }else if(lampu=="Hijau"){
        cout<<"jalan!";
    }else{
            cout<<"warna tidak valid"<<endl;
        }
    
    return 0;
    }*/

//menggunakan if else//
/*#include <iostream>
using namespace std;
int main() {
   string lampu;
    
    cout<<"warna lampu: ";
    cin>>lampu;
    
    if(lampu=="Merah"){
        cout<<"berhenti!";
    }else{
    if(lampu=="Kuning"){
        cout<<"bersiap!";
    }else{
    if(lampu=="Hijau"){
        cout<<"jalan!";
    }else{
        cout<<"warna tidak valid"<<endl;
    }
    }
    }
    return 0;
    }