// Program Stack dengan C++
// Oleh : Hafizh Hilman Asyhari  @hafizhhasyhari

#include <iostream> // Mengimpor library untuk input-output
using namespace std;

#define MAX_CAP 9 // Mendefinisikan kapasitas maksimum stack
typedef int Element; // Mendefinisikan tipe data Element sebagai integer

// Struktur untuk menyimpan stack
struct StackRecord{
    int tos; // Top of stack (penunjuk elemen teratas stack)
    Element stack_array[MAX_CAP]; // Array untuk menyimpan elemen-elemen stack
};

typedef struct StackRecord Stack; // Alias nama struct StackRecord menjadi Stack

// Deklarasi fungsi yang digunakan
void initStack(Stack &s); // Fungsi untuk menginisialisasi stack
bool isEmpty(Stack s); // Fungsi untuk mengecek apakah stack kosong
bool isFull(Stack s); // Fungsi untuk mengecek apakah stack penuh
void push(Stack &s, Element val); // Fungsi untuk menambahkan elemen ke stack
Element pop(Stack &s); // Fungsi untuk menghapus dan mengembalikan elemen teratas stack
int top(Stack s); // Fungsi untuk mendapatkan indeks elemen teratas stack
void printStack(Stack s); // Fungsi untuk mencetak elemen-elemen stack

int main()
{
    Stack A; // Mendeklarasikan stack A
    Stack B; // Mendeklarasikan stack B
    Stack C; // Mendeklarasikan stack C

    // Menginisialisasi ketiga stack
    initStack(A);
    initStack(B);
    initStack(C);

    // Menambahkan elemen ke stack A
    push(A, 50);
    push(A, 75);
    push(A, 100);

    // Menampilkan stack A
    cout<<"Menara A : "<<endl;
    printStack(A);

    return 0;
}

// Fungsi untuk menginisialisasi stack
void initStack(Stack &s)
{
    s.tos = -1; // Menandakan stack kosong dengan tos (top of stack) di -1
}

// Fungsi untuk mengecek apakah stack kosong
bool isEmpty(Stack s)
{
    return s.tos == - 1; // Mengembalikan true jika tos == -1 (stack kosong)
}

// Fungsi untuk mengecek apakah stack penuh
bool isFull(Stack s)
{
    return s.tos == MAX_CAP - 1; // Mengembalikan true jika tos sudah mencapai kapasitas maksimum
}

// Fungsi untuk menambahkan elemen ke stack
void push(Stack &s, Element val)
{
    if (isFull(s)) // Mengecek apakah stack penuh
        cout<<"penuh"; // Jika penuh, tampilkan pesan "penuh"
    else {
        s.tos++; // Naikkan tos untuk menambahkan elemen
        s.stack_array[s.tos] = val; // Simpan nilai ke dalam stack pada posisi tos
    }
}

// Fungsi untuk menghapus dan mengembalikan elemen teratas stack
Element pop(Stack &s)
{
    Element temp; // Variabel untuk menyimpan nilai sementara
    if (isEmpty(s)) // Mengecek apakah stack kosong
        cout<<"kosong"; // Jika kosong, tampilkan pesan "kosong"
    else {
        temp = s.stack_array[s.tos]; // Simpan elemen teratas ke dalam temp
        s.tos--; // Turunkan tos untuk menghapus elemen teratas
        return temp; // Mengembalikan nilai elemen yang dihapus
    }
}

// Fungsi untuk mendapatkan indeks elemen teratas stack
int top(Stack s)
{
    int tos; // Variabel untuk menyimpan indeks tos
    tos = s.tos; // Menyimpan nilai tos (indeks elemen teratas)
    return tos; // Mengembalikan indeks elemen teratas
}

// Fungsi untuk mencetak elemen-elemen stack
void printStack(Stack s)
{
    if(isEmpty(s)) { // Mengecek apakah stack kosong
        cout<<"Kosong"; // Jika kosong, tampilkan "Kosong"
    } else {
        // Menampilkan elemen-elemen stack satu per satu
        while (top(s) != -1) {
            Element val1 = pop(s); // Mengambil elemen teratas dan mengurangi tos
            cout << val1 << endl; // Mencetak elemen yang diambil
        }
    }
}


// OUTPUT 
// Menara A : 
100
75
50 //
