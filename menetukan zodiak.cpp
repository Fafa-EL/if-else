#include <iostream>
using namespace std;

int main() {
    int tanggal;
    string bulan;
    
    cout<<"Masukkan Tanggal: ";
    cin>>tanggal;
    cout<<"Masukkan Bulan: ";
    cin>>bulan;
    
    if(tanggal<=31&&bulan=="Januari"||tanggal<=18&&bulan=="Februari")
    {
    cout <<"Zodiak: AQUARIUS";
    }
    else if(tanggal<=29&&bulan=="Februari"||tanggal<=20&&bulan=="Maret")
    {
    cout << "Zodiak: PISCES";
    }
    else if(tanggal<=31&&bulan=="Maret"||tanggal<=19&&bulan=="April")
   {
    cout << "Zodiak: ARIES";
    }
    else if(tanggal<=30&&bulan=="April"||tanggal<=20&&bulan=="Mei")
   {
    cout << "Zodiak: TAURUS";
{
    else if(tanggal<=31&&bulan=="Mei"||tanggal<=20&&bulan=="Juni")
   {
    cout << "Zodiak: GEMINI";
    }
    else if(tanggal<=30&&bulan=="Juni"||tanggal<=22&&bulan=="Juli")
   {
    cout << "Zodiak: CANCER";
    }
    else if(tanggal<=31&&bulan=="Juli"||tanggal<=22&&bulan=="Agustus")
   {
    cout << "Zodiak: LEO";
    }
    else if(tanggal<=31&&bulan=="Agustus"||tanggal<=22&&bulan=="September")
   {
    cout << "Zodiak: VIRGO";
    }
    else if(tanggal<=30&&bulan=="September"||tanggal<=22&&bulan=="Oktober")
   {
    cout << "Zodiak: LIBRA";
    }
    else if(tanggal<=31&&bulan=="Oktober"||tanggal<=21&&bulan=="November")
   {
    cout << "Zodiak: SCORPION";
    }
    else if(tanggal<=30&&bulan=="November"||tanggal<=21&&bulan=="Desember")
   {
    cout << "Zodiak: SAGITARIUS";
    }
    else if(tanggal<=31&&bulan=="Desember"||tanggal<=19&&bulan=="Januari")
    {
    cout << "Zodiak: CAPRICORN";
    }
    else
   {
    cout << "YOUR INPUT IS WRONG";
    }
    return 0;

}