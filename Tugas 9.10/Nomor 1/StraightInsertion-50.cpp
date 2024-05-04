#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int Data[MAX];

// Fungsi pengurutan penyisipan langsung
void StraightInsertSort() {
    int i, j, x;
    int comparisons = 0; // inisiasi perbandingan
    int swaps = 0; // inisiasi pertukaran

    printf("\n"); 
    printf("Iterasi ke-1: ");
    for (int k = 0; k < MAX; k++) {
        printf("%d ", Data[k]);
    }
    printf("\n");
    for (i = 1; i < MAX; i++) {
        x = Data[i];
        j = i - 1;
        while (j >= 0 && x > Data[j]) {
            comparisons++; // increment perbandinggan
            Data[j + 1] = Data[j];
            j--;
        }
        Data[j + 1] = x;
        swaps++; // increment pertukaran

        // menampilkan perubahan setiap iterasi
        printf("Iterasi ke-%d: ", i + 1);
        for (int k = 0; k < MAX; k++) {
            printf("%d ", Data[k]);
        }
        printf("\n");
    }

    // Print berapa perbandingan dan pertukaran
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
    StraightInsertSort();

    // Data setelah terurut
    printf("\nDATA SETELAH TERURUT\n");
    for (i = 0; i < MAX; i++) {
        printf("Data ke %d : %d \n", i, Data[i]);
    }

    return 0;
}
