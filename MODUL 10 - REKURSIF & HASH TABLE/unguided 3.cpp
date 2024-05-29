#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

struct Mahasiswa {
    string nim;
    int nilai;
};

// Fungsi hash untuk Mahasiswa berdasarkan NIM
struct HashMahasiswa {
    size_t operator()(const string& nim) const {
        return hash<string>()(nim);
    }
};

// Fungsi untuk menambahkan data baru
void tambahData(unordered_map<string, Mahasiswa, HashMahasiswa>& table, const string& nim, int nilai) {
    Mahasiswa mhs = {nim, nilai};
    table[nim] = mhs;
}

// Fungsi untuk menghapus data berdasarkan NIM
void hapusData(unordered_map<string, Mahasiswa, HashMahasiswa>& table, const string& nim) {
    if (table.erase(nim) > 0) {
        cout << "Data dengan NIM " << nim << " telah dihapus.\n";
    } else {
        cout << "Data dengan NIM " << nim << " tidak ditemukan.\n";
    }
}

// Fungsi untuk mencari data berdasarkan NIM
void cariDataBerdasarkanNIM(const unordered_map<string, Mahasiswa, HashMahasiswa>& table, const string& nim) {
    auto it = table.find(nim);
    if (it != table.end()) {
        cout << "NIM: " << it->second.nim << ", Nilai: " << it->second.nilai << endl;
    } else {
        cout << "Data dengan NIM " << nim << " tidak ditemukan.\n";
    }
}

// Fungsi untuk mencari data berdasarkan rentang nilai
void cariDataBerdasarkanNilai(const unordered_map<string, Mahasiswa, HashMahasiswa>& table, int minNilai, int maxNilai) {
    cout << "Mahasiswa dengan nilai dalam rentang " << minNilai << " - " << maxNilai << ":\n";
    bool found = false;
    for (const auto& pair : table) {
        if (pair.second.nilai >= minNilai && pair.second.nilai <= maxNilai) {
            cout << "NIM: " << pair.second.nim << ", Nilai: " << pair.second.nilai << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Tidak ada data mahasiswa dalam rentang nilai tersebut.\n";
    }
}

// Fungsi untuk menampilkan menu dan menerima input pengguna
void menu() {
    unordered_map<string, Mahasiswa, HashMahasiswa> table;
    int pilihan;

    do {
        cout << "Menu:\n";
        cout << "1. Tambah Data\n";
        cout << "2. Hapus Data\n";
        cout << "3. Cari Data berdasarkan NIM\n";
        cout << "4. Cari Data berdasarkan rentang nilai (80 - 90)\n";
        cout << "5. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                string nim;
                int nilai;
                cout << "Masukkan NIM : ";
                cin >> nim;
                cout << "Masukkan nilai: ";
                cin >> nilai;
                tambahData(table, nim, nilai);
                break;
            }
            case 2: {
                string nim;
                cout << "Masukkan NIM yang akan dihapus: ";
                cin >> nim;
                hapusData(table, nim);
                break;
            }
            case 3: {
                string nim;
                cout << "Masukkan NIM yang akan dicari: ";
                cin >> nim;
                cariDataBerdasarkanNIM(table, nim);
                break;
            }
            case 4: {
                cariDataBerdasarkanNilai(table, 80, 90);
                break;
            }
            case 5:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }
    } while (pilihan != 5);
}

int main() {
    menu();
    return 0;
}