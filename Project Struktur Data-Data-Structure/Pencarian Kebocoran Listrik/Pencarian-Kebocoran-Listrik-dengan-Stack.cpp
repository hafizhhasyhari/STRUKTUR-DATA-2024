// Program Pencarian Kebocoran Listrik menggunakan Stack
// Deskripsi: Program ini menggunakan stack untuk mencari kebocoran listrik pada robot.
// Author: Hafizh Hilman Asyhari
// Tahun: 2024

#include <iostream>
#include <stack>
#include <string>

using namespace std;

struct KebocoranListrik {
    string lokasi;
    string status;
};

int main() {
    stack<KebocoranListrik> kebocoranStack;
    
    // Menambahkan data kebocoran listrik ke stack
    kebocoranStack.push({"Ruang Kontrol", "Terdeteksi"});
    kebocoranStack.push({"Panel Listrik", "Tidak Terdeteksi"});
    kebocoranStack.push({"Motor Penggerak", "Terdeteksi"});
    
    string lokasiCari;
    cout << "Masukkan lokasi kebocoran yang ingin dicari: ";
    cin >> lokasiCari;

    bool ditemukan = false;
    while (!kebocoranStack.empty()) {
        KebocoranListrik kebocoran = kebocoranStack.top();
        kebocoranStack.pop();
        
        if (kebocoran.lokasi == lokasiCari) {
            cout << "Kebocoran ditemukan di " << lokasiCari << " dengan status: " << kebocoran.status << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Kebocoran di lokasi " << lokasiCari << " tidak ditemukan." << endl;
    }

    return 0;
}
