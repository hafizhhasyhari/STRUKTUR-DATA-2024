#include <stdio.h>

int main() {
    char arr[5]; // Mendeklarasikan array 1 dimensi dengan 5 elemen bertipe char

    // Memasukkan elemen ke dalam array
    printf("Masukkan 5 karakter:\n");
    for (int i = 0; i < 5; i++) {
        printf("Karakter ke-%d: ", i + 1);
        scanf(" %c", &arr[i]);  // Menggunakan format " %c" untuk membaca karakter
    }

    // Menampilkan elemen array
    printf("\nElemen Array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemen ke-%d: %c\n", i + 1, arr[i]);
    }

    return 0;
}
