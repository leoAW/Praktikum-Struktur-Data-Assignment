#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

// Fungsi untuk menghitung jumlah huruf vokal dalam sebuah kalimat dan mengembalikan indeks huruf vokal
std::vector<int> hitungHurufVokal(const std::string& kalimat) {
    int jumlahVokal = 0;
    std::string vokal = "aiueoAIUEO"; // Daftar huruf vokal dalam huruf kecil dan huruf besar
    std::vector<int> indeksVokal;

    for (int i = 0; i < kalimat.size(); i++) {
        if (vokal.find(kalimat[i]) != std::string::npos) {
            jumlahVokal++;
            indeksVokal.push_back(i);
        }
    }

    std::cout << "Indeks huruf vokal yang digunakan dalam kalimat: ";
    for (int i = 0; i < indeksVokal.size(); i++) {
        std::cout << indeksVokal[i] << " ";
    }
    std::cout << std::endl;

    return indeksVokal;
}

int main() {
    // Memasukkan kalimat
    std::string kalimat;
    std::cout << "Masukkan sebuah kalimat: ";
    std::getline(std::cin, kalimat);

    // Menghitung jumlah huruf vokal dan mendapatkan indeks huruf vokal
    std::vector<int> indeksVokal = hitungHurufVokal(kalimat);

    // Menampilkan hasil
    std::cout << "Jumlah huruf vokal dalam kalimat tersebut adalah: " << indeksVokal.size() << std::endl;

    return 0;
}