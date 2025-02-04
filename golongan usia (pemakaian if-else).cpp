#include <iostream>
using namespace std;
int main() {
    int usia;
    
    cout<<"Masukkan usia: ";
    cin>>usia;
    
    if(usia>=0 && usia<=5){
        cout<<"balita";
    }else{
    if(usia>=6 && usia<=12){
        cout<<"anak anak";
    }else{
    if(usia>=13 && usia<=17){
        cout<<"remaja";
    }else{
    if(usia>=18 && usia<=59){
        cout<<"dewasa";
    }else{
        cout<<"lansia"<<endl;
    }
    }
    }
    }
    return 0;
    }