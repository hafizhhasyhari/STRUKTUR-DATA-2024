// Program Pencarian Kebocoran Listrik menggunakan Linked List
// Deskripsi: Program ini menggunakan linked list untuk mencari kebocoran listrik pada robot.
// Author: Hafizh Hilman Asyhari
// Tahun: 2024

#include <iostream>
#include <string>

using namespace std;

struct Node {
    string lokasi;
    string status;
    Node* next;
};

void tambahKebocoran(Node*& head, string lokasi, string status) {
    Node* newNode = new Node();
    newNode->lokasi = lokasi;
    newNode->status = status;
    newNode->next = head;
    head = newNode;
}

void cariKebocoran(Node* head, string lokasi) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp->lokasi == lokasi) {
            cout << "Kebocoran ditemukan di " << lokasi << " dengan status: " << temp->status << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Kebocoran di lokasi " << lokasi << " tidak ditemukan." << endl;
}

int main() {
    Node* head = nullptr;

    // Menambahkan data kebocoran listrik ke linked list
    tambahKebocoran(head, "Ruang Kontrol", "Terdeteksi");
    tambahKebocoran(head, "Panel Listrik", "Tidak Terdeteksi");
    tambahKebocoran(head, "Motor Penggerak", "Terdeteksi");

    string lokasiCari;
    cout << "Masukkan lokasi kebocoran yang ingin dicari: ";
    cin >> lokasiCari;

    cariKebocoran(head, lokasiCari);

    return 0;
}
