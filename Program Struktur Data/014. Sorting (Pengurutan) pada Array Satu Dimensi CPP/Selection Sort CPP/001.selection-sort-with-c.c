#include<stdio.h> // Mengimpor library standar untuk input dan output
#define n 7        // Mendefinisikan konstanta n dengan nilai 7

// Dibuat oleh Hafizh Hilman Asyhari @hafizhhasyhari
void main() {
    int A[n] = {15, 10, 7, 22, 17, 5, 12}; // Mendeklarasikan array A dengan ukuran n dan elemen awal
    int X, I, K;                           // Mendeklarasikan variabel X (sementara), I, dan K untuk iterasi

    // Menampilkan elemen array sebelum diurutkan
    printf("Sebelum di sort\n");
    for (I = 0; I <= n - 1; I++) {          // Loop untuk mencetak semua elemen dalam array A
        printf(" %d", A[I]);               // Mencetak elemen array dengan spasi di antaranya
    }
    printf("\n");                          // Pindah baris setelah semua elemen dicetak

    // Proses Selection Sort dimulai
    K = 0;                                 // Menginisialisasi K sebagai indeks awal
    while (K <= n - 2) {                   // Loop utama, berjalan hingga elemen ke-n-2
        int J = K;                         // Mengasumsikan elemen pada indeks K adalah yang terkecil
        I = K + 1;                         // Mulai pencarian dari elemen setelah K

        while (I <= n - 1) {               // Loop untuk mencari elemen terkecil di sub-array
            if (A[I] < A[J]) {             // Jika elemen saat ini lebih kecil dari elemen pada indeks J
                J = I;                     // Perbarui indeks elemen terkecil
            }
            I++;                           // Iterasi ke elemen berikutnya
        }

        // Menukar elemen terkecil dengan elemen pada indeks K
        X = A[J];                          // Simpan elemen terkecil dalam X
        A[J] = A[K];                       // Pindahkan elemen pada indeks K ke indeks J
        A[K] = X;                          // Pindahkan elemen terkecil ke indeks K

        K++;                               // Lanjutkan ke elemen berikutnya
    }

    // Menampilkan elemen array setelah diurutkan
    printf("Sesudah Sort \n");
    for (I = 0; I <= n - 1; I++) {         // Loop untuk mencetak elemen array yang sudah diurutkan
        printf("%d ", A[I]);               // Mencetak elemen array dengan spasi di antaranya
    }
    printf("\n");                          // Pindah baris setelah semua elemen dicetak
}
