#include <iostream>
using namespace std;

int main() {
    string nama;
    double JamKerja, tarifPerJam, gaji, lembur;

    cout << "Masukkan jumlah jam kerja: ";
    cin >> JamKerja;
    cout << "Masukkan tarif per jam: ";
    cin >> tarifPerJam;

    if (JamKerja <= 40) {
        gaji = JamKerja * tarifPerJam;
    } else {
        lembur = JamKerja - 40;
        gaji = 40 * tarifPerJam + lembur * (tarifPerJam * 1.5);
    }
    
    cout << "Gaji karyawan adalah: " << gaji << endl;

    return 0;
}
