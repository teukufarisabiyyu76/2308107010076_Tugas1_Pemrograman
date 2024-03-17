#include <stdio.h>

int main() {
    int choice, num, result;
    
    printf("Pilih konversi yang ingin dilakukan:\n");
    printf("1. Bilangan Desimal ke Biner\n");
    printf("2. Bilangan Biner ke Desimal\n");
    printf("3. Bilangan Desimal ke Octal\n");
    printf("4. Bilangan Octal ke Desimal\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &num);
            printf("Hasil konversi ke biner: ");
            while (num > 0) {
                printf("%d", num % 2);
                num /= 2;
            }
            printf("\n");
            break;
        
        case 2:
            printf("Masukkan bilangan biner: ");
            scanf("%d", &num);
            result = 0;
            int base = 1;
            while (num > 0) {
                int last_digit = num % 10;
                result += last_digit * base;
                num /= 10;
                base *= 2;
            }
            printf("Hasil konversi ke desimal: %d\n", result);
            break;
        
        case 3:
            printf("Masukkan bilangan desimal: ");
            scanf("%d", &num);
            printf("Hasil konversi ke octal: %o\n", num);
            break;
        
        case 4:
            printf("Masukkan bilangan octal: ");
            scanf("%o", &num);
            printf("Hasil konversi ke desimal: %d\n", num);
            break;
        
        default:
            printf("Pilihan tidak valid!\n");
    }

    return 0;
}
