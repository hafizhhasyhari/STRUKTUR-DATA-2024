#include <iostream> // Mengimpor library untuk input-output
using namespace std; // Mempermudah akses fungsi di namespace std

// oleh Hafizh Hilman Asyhari @hafizhhasyhari

#define n 7 // Mendefinisikan konstanta n sebagai ukuran array

int main() { // Fungsi utama program
    int i, k, X; // Mendeklarasikan variabel untuk iterasi dan proses
    int A[n] = {15, 10, 7, 22, 17, 5, 12}; // Array dengan 7 elemen awal

    // Menampilkan elemen array sebelum proses sorting
    cout << "Sebelum sort : \n"; // Pesan awal sebelum elemen ditampilkan
    for (i = 0; i <= n - 1; i++) { // Loop untuk mencetak setiap elemen array
        cout << " " << A[i]; // Menampilkan elemen array dengan spasi
    }
    cout << endl; // Menambahkan baris baru setelah elemen ditampilkan

    // Proses Insertion Sort dimulai
    for (k = 1; k <= n - 1; k++) { // Loop mulai dari elemen kedua hingga akhir
        i = k; // Menyimpan indeks elemen yang akan diproses
        X = A[i]; // Menyimpan nilai elemen saat ini ke dalam variabel X
        // Memindahkan elemen-elemen yang lebih besar dari X ke kanan
        while (i > 0 && A[i - 1] > X) { // Selama elemen sebelumnya lebih besar dari X
            A[i] = A[i - 1]; // Geser elemen ke kanan
            i--; // Kurangi indeks untuk memeriksa elemen sebelumnya
        }
        A[i] = X; // Menempatkan nilai X ke posisi yang benar
    }

    // Menampilkan elemen array setelah proses sorting
    cout << "\nSesudah sort : \n"; // Pesan setelah elemen diurutkan
    for (i = 0; i <= n - 1; i++) { // Loop untuk mencetak elemen array yang sudah diurutkan
        cout << " " << A[i]; // Menampilkan elemen array dengan spasi
    }
    cout << endl; // Menambahkan baris baru setelah elemen ditampilkan

    return 0; // Mengembalikan nilai 0 sebagai indikasi program berjalan sukses
}
