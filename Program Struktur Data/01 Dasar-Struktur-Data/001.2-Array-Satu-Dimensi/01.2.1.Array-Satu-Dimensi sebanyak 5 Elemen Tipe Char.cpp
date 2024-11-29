#include <iostream>  // Mengimpor library input-output standar C++ agar dapat menggunakan fungsi seperti cout dan cin
using namespace std;  // Memudahkan penggunaan elemen dari namespace std tanpa perlu menulis 'std::' setiap kali

int main() {  // Fungsi utama yang menandakan awal program. Program akan dieksekusi dari sini.
    char arr[5]; // Mendeklarasikan array 1 dimensi dengan 5 elemen bertipe char

    // Memasukkan elemen ke dalam array
    cout << "Masukkan 5 karakter:" << endl; // Menampilkan pesan untuk meminta pengguna memasukkan 5 karakter
    for (int i = 0; i < 5; i++) { // Loop untuk mengiterasi 5 kali, satu untuk setiap elemen array
        cout << "Karakter ke-" << i + 1 << ": "; // Menampilkan pesan yang meminta input karakter ke-i
        cin >> arr[i];  // Membaca input dari pengguna dan menyimpannya dalam array arr di indeks ke-i
    }

    // Menampilkan elemen array
    cout << "\nElemen Array:" << endl;  // Menampilkan pesan untuk memberi tahu bahwa berikutnya adalah output elemen array
    for (int i = 0; i < 5; i++) {  // Loop lagi untuk mengiterasi array dan mencetak setiap elemennya
        cout << "Elemen ke-" << i + 1 << ": " << arr[i] << endl;  // Menampilkan elemen array di indeks ke-i
    }

    return 0;  // Mengembalikan nilai 0 yang menunjukkan bahwa program selesai dengan sukses

  // oleh : Hafizh Hilman Asyhari @hafizhhasyhari
}
