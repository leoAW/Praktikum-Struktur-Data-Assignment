#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk melakukan Bubble Sort pada array of strings
void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Membandingkan dua string dan menukar posisi jika diperlukan
            if (arr[j] > arr[j + 1]) {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Array of strings berisi nama warga Pak RT
    string names[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    int n = sizeof(names) / sizeof(names[0]);

    // Menampilkan nama warga sebelum diurutkan
    cout << "Nama warga sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }

    // Memanggil fungsi bubbleSort untuk mengurutkan nama warga
    bubbleSort(names, n);

    // Menampilkan nama warga setelah diurutkan sesuai urutan alfabet
    cout << "\nNama warga setelah diurutkan sesuai urutan alfabet: ";
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }

    return 0;
}