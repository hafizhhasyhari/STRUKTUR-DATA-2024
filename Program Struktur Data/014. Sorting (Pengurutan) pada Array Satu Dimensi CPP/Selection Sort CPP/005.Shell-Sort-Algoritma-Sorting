#include <iostream>
using namespace std;

// Program Shell Sort dengan C++
// Oleh : Hafizh Hilman Asyhari @hafizhhasyhari
int main() {
    int I, K, J, i, n, X, span, mulai;
    int A[14] = {27, 25, 12, 32, 60, 52, 35, 37, 47, 17, 45, 10, 5, 15};  // Mendeklarasikan array dengan 14 elemen
    
    // Menampilkan elemen array sebelum diurutkan
    cout << "Sebelum sort: " << endl;
    for(i = 0; i < 14; i++) {
        cout << A[i] << " ";  // Mencetak setiap elemen array A
    }
    cout << endl;

    // Sorting menggunakan Shell Sort dengan span yang berbeda
    for(span = 5; span >= 1; span -= 2) {  // span dimulai dari 5, kemudian berkurang menjadi 3, dan 1
        for(mulai = 0; mulai <= span - 1; mulai++) {  // Loop untuk setiap start index (mulai)
            n = 14;  // Panjang array
            K = mulai + span;  // Inisialisasi nilai K dengan index mulai ditambah span
            
            while(K <= n - span) {  // Loop sampai K tidak lebih besar dari n - span
                I = K;  // Menyimpan posisi K ke I
                X = A[I];  // Menyimpan nilai A[I] ke X untuk sementara
                
                // Perbandingan dan penggeseran elemen dalam array sesuai dengan span
                while(I >= mulai + span && X < A[I - span]) {  // Jika nilai X lebih kecil dari nilai yang lebih awal dalam array
                    A[I] = A[I - span];  // Geser nilai ke kanan
                    I = I - span;  // Mundur I ke posisi sebelumnya dengan jarak sesuai span
                }
                
                A[I] = X;  // Menyimpan nilai X ke posisi yang benar
                K = K + span;  // Menggeser posisi K ke posisi berikutnya
            }
        }
    }

    // Menampilkan array setelah diurutkan
    cout << "Sesudah sort: " << endl;
    for(i = 0; i < 14; i++) {
        cout << A[i] << " ";  // Mencetak setiap elemen array A setelah sorting
    }
    cout << endl;

    return 0;  // Menyatakan bahwa program telah selesai dengan sukses
}
