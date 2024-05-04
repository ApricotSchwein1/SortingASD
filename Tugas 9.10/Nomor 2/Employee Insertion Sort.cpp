#include <iostream>
using namespace std;

struct employee 
{
    int NIP;
    string Nama;
};

// Pengurutan insertion berdasarkan NIP
void SortNIP(employee arr[], int n) 
{
    int i, j;
    employee x;
    for (i = 1; i < n; i++) 
    {
        x = arr[i];
        j = i - 1;
        while (j >= 0 && x.NIP < arr[j].NIP)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
}

// Pengurutan insertion berdasarkan Nama
void SortName(employee arr[], int n) 
{
    int i, j;
    employee x;
    for (i = 1; i < n; i++) 
    {
        x = arr[i];
        j = i - 1;
        while (j >= 0 && x.Nama < arr[j].Nama)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
    }
}

// menampilkan data yang sudah diurutkan
void PrintEmployee(employee arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        if (arr[i].NIP != 0 && arr[i].Nama != "") 
        {
            cout << "NIP: " << arr[i].NIP << ", Nama: " << arr[i].Nama << endl;
        }
    }
}

int main() 
{
    const int MAX = 10;
    int input;
    employee employee[MAX] = {{416, "Hoshimachi Suisei"}, {231, "Tokino Aqua"}, {532, "Housho Marine"}, {129, "Ozora Subaru"}, {341, "Shiure UI"} };

   
    cout << "===== DATA SEBELUM DIURUTKAN =====\n";
    PrintEmployee(employee, MAX);
    cout << endl;

    // Pengurutan berdasarkan NIP
    SortNIP(employee, MAX);
    cout << "===== DATA SETELAH DIURUTKAN DENGAN METODE INSERTION SORT =====\n";
    cout << "Berdasarkan NIP (Ascending):\n";
    PrintEmployee(employee, MAX);
    cout << endl;

    // Pengurutan berdasarkan Nama
    SortName(employee, MAX);
    cout << "Berdasarkan Nama (Ascending):\n";
    PrintEmployee(employee, MAX);

    return 0;
}
