#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

// Fungsi Binary Search untuk mencari semua indeks di mana huruf target ditemukan dalam kalimat
std::vector<int> binarySearchAll(const std::string &str, char target) {
    std::vector<int> result;
    for (int i = 0; i < str.size(); i++) {
        if (std::tolower(str[i]) == std::tolower(target)) {
            result.push_back(i); // Menambahkan indeks di mana huruf target ditemukan ke dalam vektor hasil
        }
    }
    return result; // Mengembalikan vektor yang berisi semua indeks di mana huruf target ditemukan
}

int main() {
    std::string kalimat;

    // Meminta pengguna memasukkan kalimat
    std::cout << "Masukkan sebuah kalimat: ";
    std::getline(std::cin, kalimat);

    char hurufTarget;

    // Meminta pengguna memasukkan huruf yang ingin dicari
    std::cout << "Masukkan huruf yang ingin dicari: ";
    std::cin >> hurufTarget;

    // Mencari semua indeks di mana huruf target ditemukan dalam kalimat
    std::vector<int> hasil = binarySearchAll(kalimat, hurufTarget);

    // Menampilkan hasil pencarian
    if (!hasil.empty()) {
        std::cout << "Huruf '" << hurufTarget << "' ditemukan pada indeks: ";
        for (int i = 0; i < hasil.size(); i++) {
            std::cout << hasil[i] << " "; // Menampilkan semua indeks di mana huruf target ditemukan
        }
        std::cout << std::endl;
    } else {
        std::cout << "Huruf '" << hurufTarget << "' tidak ditemukan dalam kalimat." << std::endl;
    }

    return 0;
}