#include<stdio.h>

int main() {
    int I, K, J, i, n, X, span, mulai;
    int A[14] = {27, 25, 12, 32, 60, 52, 35, 37, 47, 17, 45, 10, 5, 15};  // Array A yang berisi 14 elemen yang akan disortir

    // Menampilkan array sebelum proses sorting
    printf("Sebelum sort : \n");
    for(i = 0; i < 14; i++) {  // Loop untuk menampilkan elemen-elemen array A
        printf("%d ", A[i]);  // Menampilkan elemen A[i]
    }
    printf("\n");  // Menambahkan baris baru setelah menampilkan array

    // Algoritma Shell Sort
    for(span = 5; span >= 1; span -= 2) {  // span dimulai dari 5, kemudian berkurang menjadi 3 dan 1
        for(mulai = 0; mulai < span; mulai++) {  // Loop untuk setiap index awal sesuai span
            n = 14;  // Menetapkan panjang array A
            K = mulai + span;  // Menetapkan posisi K berdasarkan index mulai dan span

            // Proses sorting dengan pergeseran elemen
            while(K < n) {  // Looping untuk memproses setiap elemen dalam jangkauan array
                I = K;  // Menyimpan posisi K ke I
                X = A[I];  // Menyimpan nilai A[I] ke X

                // Menggeser elemen-elemen array ke kanan jika elemen lebih besar dari X
                while(I >= mulai + span && X < A[I - span]) {  // Jika X lebih kecil dari elemen yang lebih besar
                    A[I] = A[I - span];  // Geser elemen A[I] ke posisi sebelumnya
                    I = I - span;  // Pindahkan posisi I ke index sebelumnya sesuai span
                }
                A[I] = X;  // Tempatkan nilai X pada posisi yang benar setelah pergeseran
                K = K + span;  // Geser posisi K untuk memproses elemen berikutnya
            }
        }
    }

    // Menampilkan array setelah proses sorting
    printf("Sesudah sort : \n");
    for(i = 0; i < 14; i++) {  // Loop untuk menampilkan array A setelah diurutkan
        printf("%d ", A[i]);  // Menampilkan elemen A[i]
    }
    printf("\n");  // Menambahkan baris baru setelah menampilkan array yang sudah disort

    return 0;  // Mengembalikan nilai 0 menandakan program selesai dengan sukses

  // Program Shell Sort 
  // Oleh : hafizhhasyhari
}
