#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int Data[MAX];

// Fungsi pertukaran bilangan
void Swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Fungsi pengurutan seleksi
void SelectionSort() {
    int i, j, k;
    int comparisons = 0; // inisiasi perbandingan
    int swaps = 0; // inisiasi pertukaran

    for (i = 0; i < MAX - 1; i++) {
        k = i;
        for (j = i + 1; j < MAX; j++) {
            comparisons++; // increment perbandingan 
            if (Data[k] < Data[j]) {
                k = j;
            }
        }
        if (k != i) {
            Swap(&Data[i], &Data[k]);
            swaps++; // increment pertukaran 
        }

        // Tampilkan perubahan setiap iterasi
        printf("\nIterasi ke-%d: ", i+1);
        for (int m = 0; m < MAX; m++) {
            printf("%d ", Data[m]);
        }
    }

    printf("\n\nJumlah perbandingan: %d\n", comparisons);
    printf("Jumlah pertukaran: %d\n", swaps);
}

int main() {
    int i;
    // Membuat bilangan acak
    printf("DATA SEBELUM TERURUT\n");
    for (i = 0; i < MAX; i++) {
        Data[i] = (int) rand() / 1000 + 1;
        printf("Data ke %d : %d \n", i, Data[i]);
    }
    SelectionSort();

    // Data setelah terurut
    printf("\n\nDATA SETELAH TERURUT\n");
    for (i = 0; i < MAX; i++) {
        printf("Data ke %d : %d \n", i, Data[i]);
    }
    return 0;
}
