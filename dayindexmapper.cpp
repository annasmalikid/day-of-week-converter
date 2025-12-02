// Nama File: angka_ke_hari.cpp
// Deskripsi: Program C++ menggunakan struktur switch untuk mengkonversi angka (1-7)
//            menjadi nama hari dalam seminggu.

#include <iostream>
#include <limits> // Diperlukan untuk std::numeric_limits

using namespace std;

int main() {
    int angka;

    // Loop untuk validasi input: memastikan angka ada di rentang 1-7
    while (true) {
        cout << "===========================================" << endl;
        cout << "Masukkan angka untuk hari (1=Senin, 7=Minggu): ";

        // Memeriksa apakah input adalah integer yang valid
        if (cin >> angka) {
            // Memeriksa apakah angka berada dalam rentang yang diizinkan (1 sampai 7)
            if (angka >= 1 && angka <= 7) {
                break; // Input valid, keluar dari loop
            } else {
                cout << "⚠️ Input harus berupa angka antara 1 dan 7. Silakan coba lagi." << endl;
            }
        } else {
            // Penanganan jika input bukan angka (gagal membaca integer)
            cout << "❌ Input tidak valid. Masukkan hanya angka bulat (integer)." << endl;
            cin.clear(); // Mengatur ulang flag kesalahan pada cin
            // Mengabaikan input yang tersisa di buffer sampai newline
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    cout << "===========================================" << endl;

    // Struktur switch untuk menentukan hari
    switch (angka) {
        case 1:
            cout << "Angka " << angka << " = Hari Senin (Awal Pekan)" << endl;
            break;
        case 2:
            cout << "Angka " << angka << " = Hari Selasa" << endl;
            break;
        case 3:
            cout << "Angka " << angka << " = Hari Rabu" << endl;
            break;
        case 4:
            cout << "Angka " << angka << " = Hari Kamis" << endl;
            break;
        case 5:
            cout << "Angka " << angka << " = Hari Jumat (Jelang Akhir Pekan)" << endl;
            break;
        case 6:
            cout << "Angka " << angka << " = Hari Sabtu (Akhir Pekan)" << endl;
            break;
        case 7:
            cout << "Angka " << angka << " = Hari Minggu (Akhir Pekan)" << endl;
            break;
        
        // Blok default tidak akan tercapai karena adanya validasi while-loop, 
        // tetapi tetap merupakan praktik yang baik dalam struktur switch
        default:
            cout << "Ini seharusnya tidak tercetak karena ada validasi input." << endl; 
    }

    return 0;
}
