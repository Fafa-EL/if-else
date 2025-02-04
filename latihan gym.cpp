#include <iostream>
using namespace std;

int main() {
    string member;
    int latihan, kesempatan;
    
    cout<<"Input keanggotaan: ";
    cin>>member;
    cout<<"Jumlah latihan: ";
    cin>>latihan;
    
    if(member=="Gold" && latihan<=20){
        kesempatan= (20-latihan);
        cout<<"masih bisa latihan "<<kesempatan<<" kali lagi."<<endl;
    } if (latihan==20){
        cout<<"tidak bisa latihan lagi"<<endl;
        }else if(member=="Gold" && latihan>=20){
            cout<<"harus upgrade member"<<endl;
        }else{
        if(member=="Silver" && latihan<=10){
        kesempatan= (10-latihan);
            cout<<"masih bisa latihan "<<kesempatan<<" kali lagi."<<endl;
        } if (latihan==10){
        cout<<"tidak bisa latihan lagi"<<endl;
             }else if(member=="Silver" && latihan>=10){
            cout<<"harus upgrade member"<<endl;
        }else{
            if(member=="Platinum"){
        cout<<"boleh latihan sepuasnya"<<endl;
        }
        }
    }
    return 0;
}