#include <iostream> // Mengimpor library untuk input dan output
#define N 20 // Mendefinisikan konstanta N dengan nilai 20 sebagai ukuran maksimal array

using namespace std; // Menggunakan namespace std untuk mempermudah penulisan kode

// Fungsi untuk mengurutkan array menggunakan metode Bubble Sort
void bubble(int *arrBilangan, int juml) {
    int tampung; // Variabel sementara untuk pertukaran elemen array
    for (int x = 0; x < juml; x++) { // Loop untuk setiap elemen dalam array
        for (int i = 0; i < juml - 1; i++) { // Loop untuk membandingkan elemen yang berdekatan
            if (arrBilangan[i] > arrBilangan[i + 1]) { // Jika elemen saat ini lebih besar dari elemen berikutnya
                tampung = arrBilangan[i]; // Simpan elemen saat ini di variabel sementara
                arrBilangan[i] = arrBilangan[i + 1]; // Tukar elemen saat ini dengan elemen berikutnya
                arrBilangan[i + 1] = tampung; // Pindahkan elemen sementara ke posisi berikutnya
            }
        }
    }
}

// Fungsi untuk mencari elemen dalam array menggunakan Binary Search
void binary(int arrBilangan[], int max, int cari) {
    int tengah = 0; // Variabel untuk menyimpan indeks tengah array
    int awal = 0; // Indeks awal array
    int akhir = max; // Indeks akhir array
    bool ketemu = false; // Menandai apakah elemen ditemukan

    // Loop selama indeks awal tidak melampaui indeks akhir dan elemen belum ditemukan
    while (awal <= akhir && !ketemu) {
        tengah = (awal + akhir) / 2; // Hitung indeks tengah
        if (arrBilangan[tengah] == cari) { // Jika elemen tengah adalah elemen yang dicari
            ketemu = true; // Tandai elemen ditemukan
            break; // Keluar dari loop
        } else { // Jika elemen tengah bukan elemen yang dicari
            if (arrBilangan[tengah] < cari) { // Jika elemen tengah lebih kecil dari elemen yang dicari
                awal = tengah + 1; // Pindahkan indeks awal ke tengah+1
            } else { // Jika elemen tengah lebih besar
                akhir = tengah - 1; // Pindahkan indeks akhir ke tengah-1
            }
        }
    }

    if (ketemu) { // Jika elemen ditemukan
        cout << "Data Ditemukan Dinomor Indek Ke-" << tengah << endl; // Tampilkan indeks elemen
    } else { // Jika elemen tidak ditemukan
        cout << "Data tidak Ditemukan" << endl; // Tampilkan pesan elemen tidak ditemukan
    }

    // Menampilkan elemen array setelah diurutkan
    for (int i = 0; i < max; ++i) {
        cout << arrBilangan[i] << " ";
    }
    cout << endl; // Baris baru setelah mencetak elemen
}

int main() {
    int tampung; // Variabel sementara
    int cari; // Elemen yang ingin dicari
    int bilangan[N]; // Array untuk menyimpan bilangan, maksimum 20 elemen
    int jumlah; // Jumlah elemen yang akan diinputkan
    int *BilanganPtr = NULL; // Pointer untuk menunjuk ke array
    BilanganPtr = &bilangan[0]; // Pointer menunjuk ke awal array

    // Input jumlah data
    cout << "Masukkan jumlah data yang akan diinputkan : ";
    cin >> jumlah;

    // Input nilai sebanyak jumlah data
    cout << "Masukkan nilai sebanyak " << jumlah << " data" << endl;
    for (int x = 0; x < jumlah; x++) {
        cin >> bilangan[x]; // Input setiap elemen array
    }

    // Input elemen yang ingin dicari
    cout << endl;
    cout << "Masukkan Nilai Yang Dicari : ";
    cin >> cari;

    // Panggil fungsi Bubble Sort untuk mengurutkan array
    bubble(BilanganPtr, jumlah);

    // Panggil fungsi Binary Search untuk mencari elemen
    binary(bilangan, jumlah, cari);

    return 0; // Mengembalikan nilai 0 untuk menandakan program selesai dengan sukses
}

// Dibuat oleh Hafizh Hasyhari
// @hafizhhasyhari
