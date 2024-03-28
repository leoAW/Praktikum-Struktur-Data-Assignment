#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];
    double total = 0;
    int maksimum = INT_MIN;
    int minimum = INT_MAX;

    // Meminta pengguna untuk memasukkan elemen array
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr[i];
        total += arr[i];
        maksimum = max(maksimum, arr[i]);
        minimum = min(minimum, arr[i]);
    }

    double rata_rata = total / n;

    // Menampilkan hasil
    cout << "Nilai Maksimum: " << maksimum << endl;
    cout << "Nilai Minimum: " << minimum << endl;
    cout << "Nilai Rata-rata: " << rata_rata << endl;

    return 0;
}