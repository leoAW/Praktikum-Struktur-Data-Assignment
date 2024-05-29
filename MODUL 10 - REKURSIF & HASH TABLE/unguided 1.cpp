#include <iostream>

using namespace std;

// Fungsi rekursif untuk menghitung faktorial
int faktorial(int n) {
    // Basis kasus: jika n sama dengan 0 atau 1, faktorialnya adalah 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Rekursif kasus dengan rumus: n! = n * (n-1)!
    else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int bilangan;

    // Meminta input dari pengguna
    cout << "Masukkan bilangan bulat positif: ";
    cin >> bilangan;

    // Memastikan input adalah bilangan bulat positif
    if (bilangan < 0) {
        cout << "Input tidak valid. Masukkan bilangan bulat positif." << endl;
    } else {
        // Menghitung faktorial menggunakan fungsi rekursif
        int hasil = faktorial(bilangan);
        cout << "Faktorial dari " << bilangan << " adalah: " << hasil << endl;
    }

    return 0;
}