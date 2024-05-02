#include <iostream>
#include <string>

using namespace std;

// Mendefinisikan struct Hewan
struct Hewan {
    string Nama_hewan;
    string Jenis_kelamin;
    string cara_berkembangbiak;
    string alat_bernafas;
    string tempat_hidup;
    bool karnivora;
};

// Mendefinisikan struct Hewan_darat yang memiliki informasi tambahan untuk hewan darat
struct Hewan_darat {
    int jumlah_kaki;
    bool apakah_menyusui;
    string suara;
    Hewan info_hewan; // Menggunakan struct Hewan untuk informasi umum hewan
};

// Mendefinisikan struct Hewan_laut yang memiliki informasi tambahan untuk hewan laut
struct Hewan_laut {
    string Bentuk_sirip;
    string Pertahanan_diri;
    Hewan info_hewan; // Menggunakan struct Hewan untuk informasi umum hewan
};

int main() {
    Hewan_darat hewan1;
    Hewan_laut hewan2;

    // Mengisi informasi hewan darat (Hewan 1)
    hewan1.info_hewan.Nama_hewan = "Kucing";
    hewan1.info_hewan.Jenis_kelamin = "B";
    hewan1.info_hewan.cara_berkembangbiak = "Melahirkan";
    hewan1.info_hewan.alat_bernafas = "Paru-paru";
    hewan1.info_hewan.tempat_hidup = "Daratan";
    hewan1.info_hewan.karnivora = true;
    hewan1.jumlah_kaki = 4;
    hewan1.apakah_menyusui = true;
    hewan1.suara = "Meow";

    // Mengisi informasi hewan laut (Hewan 2)
    hewan2.info_hewan.Nama_hewan = "Penyu";
    hewan2.info_hewan.Jenis_kelamin = "B";
    hewan2.info_hewan.cara_berkembangbiak = "Bertelur";
    hewan2.info_hewan.alat_bernafas = "Paru-paru dan insang";
    hewan2.info_hewan.tempat_hidup = "Lautan";
    hewan2.info_hewan.karnivora = false;
    hewan2.Bentuk_sirip = "Sirip dan ekor";
    hewan2.Pertahanan_diri = "Cangkang yang kuat";

    // Menampilkan informasi hewan darat (Hewan 1)
    cout << "\t Hewan Darat :" << endl;
    cout << "Nama Hewan                     : " << hewan1.info_hewan.Nama_hewan << endl;
    cout << "Jenis Kelamin                  : " << hewan1.info_hewan.Jenis_kelamin << endl;
    cout << "Cara Berkembangbiak            : " << hewan1.info_hewan.cara_berkembangbiak << endl;
    cout << "Pernapasan                     : " << hewan1.info_hewan.alat_bernafas << endl;
    cout << "Tempat Hidup                   : " << hewan1.info_hewan.tempat_hidup << endl;
    cout << "Apakah Karnivora?              : " << (hewan1.info_hewan.karnivora ? "Ya" : "Tidak") << endl;
    cout << "Jumlah Kaki                    : " << hewan1.jumlah_kaki << endl;
    cout << "Apakah Menyusui?               : " << (hewan1.apakah_menyusui ? "Ya" : "Tidak") << endl;
    cout << "Suara                          : " << hewan1.suara << endl;

    // Menampilkan informasi hewan laut (Hewan 2)
    cout << "\n\t Hewan Laut :" << endl;
    cout << "Nama Hewan                     : " << hewan2.info_hewan.Nama_hewan << endl;
    cout << "Jenis Kelamin                  : " << hewan2.info_hewan.Jenis_kelamin << endl;
    cout << "Cara Berkembangbiak            : " << hewan2.info_hewan.cara_berkembangbiak << endl;
    cout << "Pernapasan                     : " << hewan2.info_hewan.alat_bernafas << endl;
    cout << "Tempat Hidup                   : " << hewan2.info_hewan.tempat_hidup << endl;
    cout << "Apakah Karnivora?              : " << (hewan2.info_hewan.karnivora ? "Ya" : "Tidak") << endl;
    cout << "Bentuk Sirip                   : " << hewan2.Bentuk_sirip << endl;
    cout << "Pertahanan Diri                : " << hewan2.Pertahanan_diri << endl;

    return 0;
}