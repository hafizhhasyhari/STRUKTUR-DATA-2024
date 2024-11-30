#include <iostream>
#include <queue>
#include <string>
using namespace std;

// Struktur data untuk akun
struct Account {
    string name;
    string nim;
    string password;
};

// Fungsi menampilkan menu utama
void displayMainMenu() {
    cout << "\n===========================================================\n";
    cout << "                    PROYEK QUEUE\n";
    cout << "    DIREKTORI PUSAT RISET DAN TEKNOLOGI HAFIZH\n";
    cout << "    by : Hafizh Hilman Asyhari\n";
    cout << "    repo GitHub : https://github.com/hafizhhasyhari\n";
    cout << "===========================================================\n";
    cout << "[1] Buat Akun\n[2] Gunakan Tanpa Akun\n[3] Keluar\n";
    cout << "-----------------------------------------------------------\n";
}

// Fungsi menampilkan menu pilihan Queue
void displayQueueMenu() {
    cout << "\n----------------------------------------------------\n";
    cout << "                     Menu Pilihan\n";
    cout << "----------------------------------------------------\n";
    cout << "[1] Enqueue\n[2] Dequeue\n[3] Tampilkan Queue\n[4] Reset Queue\n[5] Konsep Dasar Queue\n[6] Keluar\n";
    cout << "----------------------------------------------------\n";
}

// Fungsi untuk menampilkan Queue
void displayQueue(queue<int> q) {
    cout << "QUEUE : ";
    if (q.empty()) {
        cout << "Kosong\n";
    } else {
        while (!q.empty()) {
            cout << q.front();
            q.pop();
            if (!q.empty()) cout << ", ";
        }
        cout << endl;
    }
}

// Fungsi untuk menampilkan konsep dasar Queue
void displayQueueConcept() {
    cout << "\n===========================================================\n";
    cout << "                Konsep Dasar Queue (Antrian)\n";
    cout << "===========================================================\n";
    cout << "1. Queue adalah struktur data yang menggunakan prinsip FIFO\n";
    cout << "   (First In, First Out) di mana elemen pertama yang masuk\n";
    cout << "   akan menjadi elemen pertama yang keluar.\n\n";
    cout << "2. Operasi utama dalam Queue:\n";
    cout << "   - Enqueue: Menambahkan elemen ke bagian belakang antrian.\n";
    cout << "   - Dequeue: Menghapus elemen dari bagian depan antrian.\n\n";
    cout << "3. Aplikasi Queue:\n";
    cout << "   - Sistem antrian pelanggan.\n";
    cout << "   - Penjadwalan CPU dalam OS.\n";
    cout << "   - Buffer data untuk streaming video/audio.\n";
    cout << "-----------------------------------------------------------\n";
}

int main() {
    queue<int> q;
    Account user;
    int mainChoice, queueChoice;

    while (true) {
        displayMainMenu();
        cout << "Masukkan pilihan: ";
        cin >> mainChoice;

        if (mainChoice == 1) { // Buat Akun
            cout << "\nMasukkan Nama Anda   : ";
            cin.ignore();
            getline(cin, user.name);
            cout << "Masukkan NIM Anda    : ";
            getline(cin, user.nim);
            cout << "Masukkan Password    : ";
            getline(cin, user.password);

            cout << "\nAkun berhasil dibuat! Selamat datang, " << user.name << "!\n";

        } else if (mainChoice == 2) { // Gunakan Tanpa Akun
            cout << "\nMenggunakan program tanpa akun...\n";
        } else if (mainChoice == 3) { // Keluar
            cout << "\nSelamat Tinggal! Terima kasih telah menggunakan program ini.\n";
            break;
        } else {
            cout << "\nPilihan tidak valid. Silakan coba lagi.\n";
            continue;
        }

        // Menu Queue setelah membuat atau memilih tanpa akun
        while (true) {
            displayQueueMenu();
            cout << "Masukkan pilihan: ";
            cin >> queueChoice;

            if (queueChoice == 1) { // Enqueue
                int num;
                cout << "\nMasukkan Data (0 untuk selesai):\n";
                while (true) {
                    cin >> num;
                    if (num == 0) break;
                    q.push(num);
                }
                cout << "\nData berhasil ditambahkan.\n";
                displayQueue(q);

            } else if (queueChoice == 2) { // Dequeue
                if (q.empty()) {
                    cout << "\nQUEUE kosong. Tidak ada data untuk dihapus.\n";
                } else {
                    cout << "\nMengambil data \"" << q.front() << "\"....\n";
                    q.pop();
                }
                cout << "\nTampilan saat ini:\n";
                displayQueue(q);

            } else if (queueChoice == 3) { // Tampilkan Queue
                displayQueue(q);

            } else if (queueChoice == 4) { // Reset Queue
                while (!q.empty()) {
                    q.pop();
                }
                cout << "\nQUEUE berhasil direset. Semua data telah dihapus.\n";

            } else if (queueChoice == 5) { // Konsep Dasar Queue
                displayQueueConcept();

            } else if (queueChoice == 6) { // Keluar
                cout << "\nKembali ke menu utama...\n";
                break;

            } else {
                cout << "\nPilihan tidak valid. Silakan coba lagi.\n";
            }
        }
    }

    return 0;
}
