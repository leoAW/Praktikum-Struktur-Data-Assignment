#include <iostream>
#include <vector>

// Fungsi untuk menghitung jumlah kemunculan sebuah angka dalam vektor menggunakan Sequential Search
std::vector<int> hitungAngka(const std::vector<int>& data, int target) {
    int count = 0;
    std::vector<int> indeksDitemukan;

    for (int i = 0; i < data.size(); i++) {
        if (data[i] == target) {
            count++;
            indeksDitemukan.push_back(i);
        }
    }

    std::cout << "Indeks di mana angka " << target << " ditemukan: ";
    for (int indeks : indeksDitemukan) {
        std::cout << indeks << " ";
    }
    std::cout << std::endl;

    return indeksDitemukan;
}

int main() {
    std::vector<int> data = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int angkaTarget = 4;

    // Menghitung jumlah kemunculan angkaTarget menggunakan Sequential Search
    std::vector<int> indeksDitemukan = hitungAngka(data, angkaTarget);

    // Output hasil
    int count = indeksDitemukan.size();
    std::cout << "Jumlah kemunculan angka " << angkaTarget << " dalam data adalah: " << count << std::endl;

    return 0;
}