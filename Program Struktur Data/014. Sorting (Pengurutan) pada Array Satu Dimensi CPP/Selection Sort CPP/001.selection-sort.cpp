#include <iostream> // Mengimpor library untuk input dan output
#include <vector>   // Mengimpor library untuk penggunaan vector
using namespace std; // Mempermudah akses fungsi dan objek dari namespace std

int main() {
    const int n = 7; // Mendefinisikan ukuran array
    vector<int> A; // Membuat vector kosong

    // Menambahkan elemen satu per satu ke dalam vector
    A.push_back(15);
    A.push_back(10);
    A.push_back(7);
    A.push_back(22);
    A.push_back(17);
    A.push_back(5);
    A.push_back(12);

    // Menampilkan elemen array sebelum di-sort
    cout << "Sebelum di sort:" << endl; 
    for (int i = 0; i < n; i++) { // Loop untuk mencetak elemen array
        cout << A[i] << " "; // Mencetak elemen array dipisahkan dengan spasi
    }
    cout << endl; // Berpindah ke baris baru setelah semua elemen dicetak

    // Proses Selection Sort dimulai
    for (int k = 0; k < n - 1; k++) { // Loop utama untuk memindahkan batas sub-array yang belum terurut
        int minIndex = k; // Mengasumsikan elemen pertama dalam sub-array adalah elemen terkecil
        for (int i = k + 1; i < n; i++) { // Loop untuk mencari elemen terkecil dalam sub-array
            if (A[i] < A[minIndex]) { // Jika elemen saat ini lebih kecil dari elemen terkecil
                minIndex = i; // Perbarui indeks elemen terkecil
            }
        }
        swap(A[k], A[minIndex]); // Menukar elemen terkecil dengan elemen pertama dalam sub-array
    }

    // Menampilkan elemen array setelah di-sort
    cout << "Sesudah sort:" << endl; 
    for (int i = 0; i < n; i++) { // Loop untuk mencetak elemen array yang sudah diurutkan
        cout << A[i] << " "; // Mencetak elemen array dipisahkan dengan spasi
    }
    cout << endl; // Berpindah ke baris baru setelah semua elemen dicetak

    return 0; // Menandakan bahwa program selesai dengan sukses
}
