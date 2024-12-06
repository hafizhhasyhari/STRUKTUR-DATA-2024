// Program Binary Search
// Deskripsi: Program ini mencari sebuah nilai dalam array yang telah diurutkan menggunakan metode pencarian biner (Binary Search).
// Binary Search bekerja dengan membagi array menjadi dua bagian secara berulang hingga nilai yang dicari ditemukan atau tidak ditemukan.
// Author: Hafizh Hilman Asyhari
// Tahun: 2024

#include <iostream>
#define n 10

using namespace std;

int main() {
    // Deklarasi variabel
    int N; // Nilai yang akan dicari dalam array
    int A[n] = {5, 7, 12, 15, 17, 19, 22, 25, 27, 32}; // Array yang telah diurutkan
    int lo, hi, Mid, Flag; // Variabel untuk batas bawah, batas atas, posisi tengah, dan penanda keberhasilan pencarian

    // Meminta input dari pengguna
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> N; // Input nilai yang ingin dicari

    // Inisialisasi variabel pencarian
    lo = 0; // Indeks batas bawah
    hi = n - 1; // Indeks batas atas
    Flag = 0; // Penanda, 0 berarti nilai belum ditemukan

    // Proses pencarian biner
    while (lo <= hi && Flag == 0) { // Perulangan berhenti jika batas bawah melebihi batas atas atau nilai ditemukan
        Mid = (lo + hi) / 2; // Menghitung indeks tengah
        if (N == A[Mid]) { // Jika nilai pada indeks tengah sama dengan nilai yang dicari
            Flag = 1; // Penanda bahwa nilai ditemukan
        } else if (N < A[Mid]) { // Jika nilai yang dicari lebih kecil dari nilai di indeks tengah
            hi = Mid - 1; // Mengubah batas atas ke indeks sebelum tengah
        } else { // Jika nilai yang dicari lebih besar dari nilai di indeks tengah
            lo = Mid + 1; // Mengubah batas bawah ke indeks setelah tengah
        }
    }

    // Menampilkan hasil pencarian
    if (Flag == 1) { // Jika nilai ditemukan
        cout << "\nNilai " << N << " ditemukan pada indeks " << Mid << endl;
    } else { // Jika nilai tidak ditemukan
        cout << "\nNilai " << N << " tidak ditemukan" << endl;
    }

    return 0; // Mengakhiri program
}
