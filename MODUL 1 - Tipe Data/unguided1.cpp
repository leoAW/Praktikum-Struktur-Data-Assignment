#include <iostream>
using namespace std;

const double PI = 3.14; // Nilai pi

// Fungsi untuk menghitung volume tabung
double hitungVolumeTabung(double jari_jari, double tinggi) {
    return PI * jari_jari * jari_jari * tinggi;
}

// Fungsi untuk menghitung volume kerucut
double hitungVolumeKerucut(double jari_jari, double tinggi) {
    return (1.0 / 3.0) * PI * jari_jari * jari_jari * tinggi;
}

int main() {
    double jari_jari_tabung, tinggi_tabung;
    double jari_jari_kerucut, tinggi_kerucut;

    // Input jari-jari dan tinggi tabung
    std::cout << "Masukkan jari-jari tabung: ";
    std::cin >> jari_jari_tabung;
    std::cout << "Masukkan tinggi tabung: ";
    std::cin >> tinggi_tabung;

    // Input jari-jari dan tinggi kerucut
    std::cout << "Masukkan jari-jari kerucut: ";
    std::cin >> jari_jari_kerucut;
    std::cout << "Masukkan tinggi kerucut: ";
    std::cin >> tinggi_kerucut;

    // Hitung volume tabung dan kerucut
    double volume_tabung = hitungVolumeTabung(jari_jari_tabung, tinggi_tabung);
    double volume_kerucut = hitungVolumeKerucut(jari_jari_kerucut, tinggi_kerucut);

    // Tampilkan hasil
    std::cout << "Volume tabung: " << volume_tabung << std::endl;
    std::cout << "Volume kerucut: " << volume_kerucut << std::endl;

    return 0;
}
