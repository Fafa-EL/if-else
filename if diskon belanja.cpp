#include <iostream>
using namespace std;
int main() {
   
    float totalbelanja, total, diskon=0;
    
    cout<<"Input total belanja: ";
    cin>>totalbelanja;
    
    if(totalbelanja >= 100000){
        diskon=0.05*totalbelanja;
    }
    cout<<"potongan diskon: "<<diskon<<endl;
    total= (totalbelanja-diskon);
        cout<<"Total belanja anda: "<<total<<endl;
        
    return 0;
    }

#include <iostream>
using namespace std;
int main() {
   
    float totalbelanja, total, diskon=0;
    
    cout<<"Input total belanja: ";
    cin>>totalbelanja;
    
    if(totalbelanja >= 100000){
        diskon=0.1*totalbelanja;
    }else{
    if(totalbelanja >= 200000){
        diskon=0.2*totalbelanja;
    }else{
        if(totalbelanja >= 500000){
        diskon=0.3*totalbelanja;
        }else{
            cout<<"tidak dapat diskon"<<endl;
        }
    }
    }
    
    
    cout<<"potongan diskon: "<<diskon<<endl;
    total= (totalbelanja-diskon);
        cout<<"Total belanja anda: "<<total<<endl;
        
    return 0;
    }