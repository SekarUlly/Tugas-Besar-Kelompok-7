#include <iostream>: Baris ini mengikutsertakan pustaka input/output stream, yang memungkinkan operasi masukan dan keluaran.
using namespace std;: Baris ini memungkinkan Anda menggunakan nama-nama dari namespace std secara langsung tanpa menambahkan awalan std::.
String toString(double); int toInt(string); double toDouble(string); mendeklarasikan prototipe fungsi yang akan digunakan dalam program, yaitu, toSting, toInt, toDouble. Namun, fungsi tersebut tidak terdapat kode yang diberikan.
int main() {: Ini adalah titik awal program, di mana eksekusi dimulai. Mendeklarasikan fungsi utama program.
Int kebutuhanCairan, faktorTetes, lamaPemberian, tPM;
string jenisTetesan, pilihan;. Deklarasi variabel yang akan digunakan dalam program, yaitu kebutuhan cairan berdasarkan jumlah kebtuhan cairan pasien, faktor tetes (FTM), lamaPemberian (lama pemberian dalam jumlah jam), tPM(jumlah tetesan per menit), jenisTetesan(jens tetesan infus), dan pilihan (untuk input pengulangan program).
cout << "Program Perhitungan Tetesan Infus per Menit(TPM)" << endl; untuk mencetak judul.
cout << "Inputkan banyak kebutuhan cairan" << endl; cin >> kebutuhanCairan; untuk mencetak ke layar untuk meminta input dari pengguna, yaitu banyaknya kebutuhan cairan.
cout << "Inputkan faktor tetes cairan (per menit)" << endl;cin >> faktorTetes; untuk mencetak pesan agar pengguna dapat menginput faktor tetes cairan permenit.
cout << "Inputkan lama pemberian cairan (dalam jam)" << endl;cin >> lamaPemberian; untuk mencetak pesan agar pengguna dapat menginput pemberian cairan dalam jam.
tPM = (int)((double)(kebutuhanCairan * faktorTetes) / (lamaPemberian * 60)); untuk melakukan perhitungan jumlah tetesan infus per menit(TPM). 
Pada bagian if else if. Jika faktor tetes dalam rentang 10-20, jenis tetesan akan muncul output “Makro”. Jika faktor tetes dalam rentang 45-80, jenis tetesan akan muncul output “Mikro”
cout << "Anda akan mendapat " << tPM << " tetes cairan infus per menit dengan jenis tetesan " << jenisTetesan << " sebelum cairan di kantung infus habis dan diganti dengan yang baru" << endl;
    } untuk mencetak hasil perhitungan ke layar, jumlah (TPM) dan tetesan jenis infus
While (pilihan == “ya”); untuk pengguna dapat memilih ingin melanjutkan program atau tidak.
