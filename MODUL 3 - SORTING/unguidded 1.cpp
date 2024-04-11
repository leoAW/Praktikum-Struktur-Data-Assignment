#include <iostream>
using namespace std;

// Fungsi untuk melakukan Selection Sort
void selectionSort(double arr[], int n) {
    // Iterasi untuk memilih elemen terbesar
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        // Iterasi untuk mencari elemen terbesar
        for (int j = i + 1; j < n; j++) {
            // Membandingkan elemen dengan indeks max_idx
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        // Menukar posisi elemen terbesar dengan elemen pertama
        double temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    // Array IPS mahasiswa
    double ips[] = {3.8, 2.9, 3.3, 4.0, 2.4};
    int n = sizeof(ips) / sizeof(ips[0]);

    // Menampilkan IPS sebelum diurutkan
    cout << "IPS sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << ips[i] << " ";
    }

    // Memanggil fungsi selectionSort untuk mengurutkan IPS
    selectionSort(ips, n);

    // Menampilkan IPS setelah diurutkan secara descending
    cout << "\nIPS setelah diurutkan secara descending: ";
    for (int i = 0; i < n; i++) {
        cout << ips[i] << " ";
    }

    return 0;
}
