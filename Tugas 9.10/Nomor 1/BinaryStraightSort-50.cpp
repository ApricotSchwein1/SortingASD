#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int Data[MAX];

// Fungsi pengurutan binary insertion
void BinaryInsertSort() {
    int i, j, l, r, m, x;
    int comparisons = 0; // inisiasi perbandinggan
    int swaps = 0; // inisiasi petukaran

    printf("\n");
    printf("Iterasi ke-1: ");
    for (int k = 0; k < MAX; k++) {
        printf("%d ", Data[k]);
    }
    printf("\n");
    for (i = 1; i < MAX; i++) {
        x = Data[i];
        l = 0;
        r = i - 1;
        while (l <= r) {
            m = (l + r) / 2;
            comparisons++; // increment perbandingan
            if (x < Data[m])
                l = m + 1;
            else
                r = m - 1;
        }
        for (j = i - 1; j >= l; j--) {
            Data[j + 1] = Data[j];
            swaps++; // increment pertukaran
        }
        Data[l] = x;

        // menampilkan perubahan setiap iterasi
        printf("Iterasi ke-%d: ", i + 1);
        for (int k = 0; k < MAX; k++) {
            printf("%d ", Data[k]);
        }
        printf("\n");
    }

    // Print berapa perbandinggan dan pertukaran
    printf("\n\nJumlah perbandingan: %d\n", comparisons);
    printf("Jumlah pertukaran: %d\n", swaps);
}

int main() {
    int i;
    // Membuat bilangan acak
    printf("DATA SEBELUM TERURUT\n");
    for (i = 0; i < MAX; i++) {
        Data[i] = (int) rand() / 100 + 1;
        printf("Data ke %d : %d \n", i, Data[i]);
    }
    BinaryInsertSort();

    // Data setelah terurut
    printf("\nDATA SETELAH TERURUT\n");
    for (i = 0; i < MAX; i++) {
        printf("Data ke %d : %d \n", i, Data[i]);
    }

    return 0;
}
