; Program Binary Search
; Deskripsi: Program ini mencari sebuah nilai dalam array yang telah diurutkan menggunakan metode pencarian biner.
; Author: Hafizh Hilman Asyhari
; Tahun: 2024

section .data
    array db 5, 7, 12, 15, 17, 19, 22, 25, 27, 32 ; Array yang telah diurutkan
    n equ 10                                     ; Panjang array
    msg_input db "Masukkan nilai yang ingin dicari: ", 0
    msg_found db "Nilai ditemukan pada indeks: ", 0
    msg_notfound db "Nilai tidak ditemukan", 0

section .bss
    input resb 4                                 ; Buffer untuk input nilai
    lo resd 1                                    ; Variabel batas bawah
    hi resd 1                                    ; Variabel batas atas
    mid resd 1                                   ; Variabel indeks tengah
    flag resd 1                                  ; Penanda keberhasilan pencarian

section .text
    global _start

_start:
    ; Cetak pesan input
    mov eax, 4
    mov ebx, 1
    mov ecx, msg_input
    mov edx, len msg_input
    int 0x80

    ; Baca input nilai
    mov eax, 3
    mov ebx, 0
    mov ecx, input
    mov edx, 4
    int 0x80

    ; Konversi input ke integer
    xor eax, eax
    mov esi, input
    mov ecx, 10
.convert_input:
    movzx ebx, byte [esi]
    sub ebx, '0'
    mul ecx
    add eax, ebx
    inc esi
    cmp byte [esi], 0xA
    jne .convert_input
    mov [value], eax

    ; Inisialisasi variabel
    xor eax, eax
    mov [lo], eax
    mov eax, n
    dec eax
    mov [hi], eax
    xor eax, eax
    mov [flag], eax

    ; Proses Binary Search
.binary_search:
    cmp [lo], [hi]
    jg .not_found

    mov eax, [lo]
    add eax, [hi]
    shr eax, 1
    mov [mid], eax

    movzx eax, byte [array + eax]
    cmp eax, [value]
    je .found

    cmp eax, [value]
    jl .greater

    ; Jika nilai lebih kecil
    mov eax, [mid]
    dec eax
    mov [hi], eax
    jmp .binary_search

.greater:
    ; Jika nilai lebih besar
    mov eax, [mid]
    inc eax
    mov [lo], eax
    jmp .binary_search

.found:
    mov eax, 4
    mov ebx, 1
    mov ecx, msg_found
    mov edx, len msg_found
    int 0x80
    jmp .exit

.not_found:
    mov eax, 4
    mov ebx, 1
    mov ecx, msg_notfound
    mov edx, len msg_notfound
    int 0x80

.exit:
    mov eax, 1
    xor ebx, ebx
    int 0x80
