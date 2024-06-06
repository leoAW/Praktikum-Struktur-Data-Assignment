#include <iostream>

using namespace std;

// Definisi struktur pohon
struct pohon{
    pohon* kanan;
    char data;
    pohon* kiri;
};

// Deklarasi variabel global
pohon* simpul;
pohon* root;
pohon* saatini;
pohon* helperA;
pohon* helperB;
pohon* alamat[256];

// Fungsi untuk menginisialisasi root
void inisialisasi() {
    root = NULL;
}

// Fungsi untuk membuat simpul baru
void simpulBaru(char dataMasukan) {
    simpul = new pohon;
    simpul->data = dataMasukan;
    simpul->kanan = NULL;
    simpul->kiri = NULL;
}

// Fungsi untuk membuat simpul akar
void simpulAkar() {
    if (root == NULL) {
        char dataAnda;
        cout << "Silahkan Masukkan Data: ";
        cin >> dataAnda;
        simpulBaru(dataAnda);
        root = simpul;
        cout << "Root terbentuk..." << endl;
    } else {
        cout << "Root sudah ada..." << endl; 
    }
}

// Fungsi untuk menambah simpul
void tambahSimpul() {
    if (root != NULL) {
        int i = 1, j = 1, penanda = 0;
        char dataUser;
        alamat[i] = root;

        while (penanda == 0 && j < 256) {
            cout << "Masukkan data kiri : ";
            cin >> dataUser;
            if (dataUser != '0') {
                simpulBaru(dataUser);
                saatini = alamat[i];
                saatini->kiri = simpul;
                j++;
                alamat[j] = simpul;
            } else {
                penanda = 1;
                j++;
                alamat[j] = NULL;
            }
            if (penanda == 0) {
                cout << "Masukkan data kanan : ";
                cin >> dataUser;
                if(dataUser != '0') {
                    simpulBaru(dataUser);
                    saatini = alamat[i];
                    saatini->kanan = simpul;
                    j++;
                    alamat[j] = simpul;
                } else {
                    penanda = 1;
                    j++;
                    alamat[j] = NULL;
                }
            }
            i++;
        }
        
    }
}

// Fungsi untuk membaca pohon
void bacaPohon() {
    if(root != NULL) {
        int i = 1, n = 1, pencacah = 0;
        cout << endl;
        while (alamat[i] != NULL) {
            saatini = alamat[i];
            cout << saatini->data << " ";
            pencacah++;
            if(pencacah == n) {
                cout << endl;
                pencacah = 0;
                n = n * 2;
            }
            i++;
        }
    }
}

// Fungsi Utama
int main () {
    inisialisasi();
    simpulAkar();
    tambahSimpul();
    bacaPohon();
    return 0;
}
