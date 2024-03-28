#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> data_array;
    vector<int> nomor_genap;
    vector<int> nomor_ganjil;

    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    cout << "Masukkan elemen array (pisahkan dengan spasi): ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        data_array.push_back(num);
    }

    // Memisahkan bilangan genap dan ganjil
    for (int i = 0; i < n; i++) {
        if (data_array[i] % 2 == 0) {
            nomor_genap.push_back(data_array[i]);
        } else {
            nomor_ganjil.push_back(data_array[i]);
        }
    }

    // Menampilkan output
    cout << "data array: ";
    for (int num : data_array) {
        cout << num << ",";
    }
    cout << endl;

    cout << "nomor genap: ";
    for (int num : nomor_genap) {
        cout << num << ",";
    }
    cout << endl;

    cout << "nomor ganjil: ";
    for (int num : nomor_ganjil) {
        cout << num << ",";
    }
    cout << endl;

    return 0;
}