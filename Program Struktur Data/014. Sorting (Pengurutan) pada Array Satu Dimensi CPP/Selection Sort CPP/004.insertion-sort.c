#include<stdio.h> // Mengimpor library standar untuk input dan output
#define n 7 // Mendefinisikan ukuran array sebagai 7

void main() { // Fungsi utama program
    int i, k, X; // Mendeklarasikan variabel untuk iterasi dan untuk menyimpan nilai sementara
    int A[n] = {15, 10, 7, 22, 17, 5, 12}; // Mendefinisikan array A dengan 7 elemen yang tidak terurut
    
    // Menampilkan elemen array sebelum proses sorting
    printf("Sebelum sort : \n"); // Pesan untuk menunjukkan elemen sebelum diurutkan
    for(i = 0; i <= n - 1; i++) { // Loop untuk menampilkan elemen array
        printf(" %d", A[i]); // Mencetak elemen array satu per satu
    }
    
    // Proses Insertion Sort dimulai
    for(k = 1; k <= n - 1; k++) { // Loop untuk iterasi mulai dari elemen kedua hingga terakhir
        i = k; // Menyimpan indeks elemen yang akan diproses
        X = A[i]; // Menyimpan nilai elemen yang akan dipindahkan ke posisi yang benar
        
        // Proses pemindahan elemen-elemen yang lebih besar dari X ke kanan
        while(i >= 0 && A[i - 1] > X) { // Jika elemen sebelumnya lebih besar dari X
            A[i] = A[i - 1]; // Geser elemen sebelumnya ke kanan
            i--; // Kurangi indeks untuk memeriksa elemen sebelumnya
        }
        A[i] = X; // Menempatkan nilai X pada posisi yang benar setelah pergeseran
    }

    // Menampilkan elemen array setelah proses sorting
    printf("\nSesudah sort :\n"); // Pesan untuk menunjukkan elemen setelah diurutkan
    for(i = 0; i <= n - 1; i++) { // Loop untuk menampilkan elemen array yang sudah diurutkan
        printf(" %d", A[i]); // Mencetak elemen array satu per satu
    }
}


// oleh : hafizhhasyhari
