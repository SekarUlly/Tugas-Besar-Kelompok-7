#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Nengah Sekar Ully Pinasti Oros 122430043
// Nindi Gustina Putri 122430044
// Sesi Ulfah Salsabila 122430040

string toString(double);
int toInt(string);
double toDouble(string);

int main()
{
    int kebutuhanCairan, faktorTetes, lamaPemberian, tPM;
    string jenisTetesan, pilihan;

    do {
        cout << "Program Perhitungan Tetesan Infus per Menit(TPM)" << endl;

        for (int i = 0; i < 3; i++) {
            cout << "Inputkan banyak kebutuhan cairan" << endl;
            cin >> kebutuhanCairan;
            cout << "Inputkan faktor tetes cairan (per menit)" << endl;
            cin >> faktorTetes;
            cout << "Inputkan lama pemberian cairan (dalam jam)" << endl;
            cin >> lamaPemberian;
            tPM = (int)((double)(kebutuhanCairan * faktorTetes) / (lamaPemberian * 60));
            if (faktorTetes >= 10 && faktorTetes <= 20) {
                jenisTetesan = "Makro";
            } else {
                if (faktorTetes >= 45 && faktorTetes <= 60) {
                    jenisTetesan = "Mikro";
                }
            }
            cout << "Anda akan mendapat " << tPM << " tetes cairan infus per menit dengan jenis tetesan " << jenisTetesan << " sebelum cairan di kantung infus habis dan diganti dengan yang baru" << endl;
        }

        cout << "Apakah Anda ingin mengulangi program? (ya/tidak): ";
        cin >> pilihan;
    } while (pilihan == "ya");

    return 0;
}
