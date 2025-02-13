#include <stdio.h>

// Fungsi untuk menghitung Jobonacci pada indeks n
int jobonacci(int n) {
    // Basis kondisi untuk n = 0 dan n = 1
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    
    // Array untuk menyimpan nilai Jobonacci hingga n
    int jobo[n + 1];
    
    // Inisialisasi nilai dasar
    jobo[0] = 0;
    jobo[1] = 1;
    
    // Hitung Jobonacci untuk n >= 2
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            // Jika i genap, jobo[i] adalah hasil penjumlahan dua angka sebelumnya
            jobo[i] = jobo[i - 1] + jobo[i - 2];
        } else {
            // Jika i ganjil, jobo[i] diset menjadi 1
            jobo[i] = 1;
        }
    }
    
    // Mengembalikan nilai Jobonacci untuk indeks n
    return jobo[n];
}

int main() {
    int n;
    
    // Input dari pengguna
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    
    // Menampilkan hasil Jobonacci pada indeks n
    printf("Jobonacci[%d] = %d\n", n, jobonacci(n));
    
    return 0;
}
