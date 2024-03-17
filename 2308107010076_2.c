#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int year;
    char buffer[10]; 

    while (1) {
        printf("Masukkan tahun (4 angka): ");
        fgets(buffer, sizeof(buffer), stdin);

        // Menghapus newline character dari buffer
        size_t len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n') {
            buffer[len - 1] = '\0';
        }

        // Memeriksa panjang input
        if (strlen(buffer) != 4) {
            printf("Input tidak valid. Masukkan tahun (4 angka)!\n");
            continue;
        }

        // Memeriksa apakah semua karakter adalah angka
        int valid_input = 1;
        for (int i = 0; buffer[i] != '\0'; i++) {
            if (!isdigit(buffer[i])) {
                valid_input = 0;
                break;
            }
        }

        if (!valid_input) {
            printf("Input tidak valid. Masukkan tahun (4 angka)!\n");
            continue;
        }

        // Mengonversi input ke integer
        if (sscanf(buffer, "%d", &year) != 1) {
            printf("Input tidak valid. Masukkan tahun (4 angka)!\n");
            continue;
        }

        // Memeriksa apakah tahun kabisat
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d adalah tahun kabisat.\n", year);
        } else {
            printf("%d bukan tahun kabisat.\n", year);
        }

        break;
    }

    return 0;
}
