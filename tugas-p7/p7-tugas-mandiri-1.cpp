#include <stdio.h>

int main() {
    // Deklarasi array untuk menyimpan nilai mahasiswa
    int nilai[10];

    // Input nilai mahasiswa
    printf("Masukkan 10 nilai mahasiswa:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nilai mahasiswa %i: ", i + 1);
        scanf("%i", &nilai[i]);
    }

    // Cetak daftar nilai mahasiswa yang lulus
    printf("\nDaftar nilai mahasiswa yang lulus:\n");
    for (int i = 0; i < 10; i++) {
        if (nilai[i] >= 60) {
            printf("Mahasiswa %i: %i\n", i + 1, nilai[i]);
        }
    }

    return 0;
}
