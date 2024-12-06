// Program Pencarian Kebocoran Listrik menggunakan Queue
// Deskripsi: Program ini menggunakan queue untuk mencari kebocoran listrik pada robot.
// Author: Hafizh Hilman Asyhari
// Tahun: 2024

#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct KebocoranListrik {
    string lokasi;
    string status;
};

int main() {
    queue<KebocoranListrik> kebocoranQueue;
    
    // Menambahkan data kebocoran listrik ke queue
    kebocoranQueue.push({"Ruang Kontrol", "Terdeteksi"});
    kebocoranQueue.push({"Panel Listrik", "Tidak Terdeteksi"});
    kebocoranQueue.push({"Motor Penggerak", "Terdeteksi"});
    
    string lokasiCari;
    cout << "Masukkan lokasi kebocoran yang ingin dicari: ";
    cin >> lokasiCari;

    bool ditemukan = false;
    while (!kebocoranQueue.empty()) {
        KebocoranListrik kebocoran = kebocoranQueue.front();
        kebocoranQueue.pop();
        
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
