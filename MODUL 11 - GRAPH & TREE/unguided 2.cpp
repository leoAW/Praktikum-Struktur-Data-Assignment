#include <iostream>

using namespace std;

// Definisi struktur pohon
struct pohon {
    pohon* kanan;
    char data;
    pohon* kiri;
};

// Deklarasi variabel global
pohon* simpul;
pohon* root;
pohon* saatini;
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
        cout << "Silahkan Masukkan Data untuk Root: ";
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
            cout << "Masukkan data kiri (masukkan '0' jika tidak ada): ";
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
            penanda = 0;
            cout << "Masukkan data kanan (masukkan '0' jika tidak ada): ";
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

// Fungsi untuk traversal pre-order
void preOrder(pohon* akar) {
    if (akar != NULL) {
        cout << akar->data << " ";
        preOrder(akar->kiri);
        preOrder(akar->kanan);
    }
}

// Fungsi untuk traversal in-order
void inOrder(pohon* akar) {
    if (akar != NULL) {
        inOrder(akar->kiri);
        cout << akar->data << " ";
        inOrder(akar->kanan);
    }
}

// Fungsi untuk traversal post-order
void postOrder(pohon* akar) {
    if (akar != NULL) {
        postOrder(akar->kiri);
        postOrder(akar->kanan);
        cout << akar->data << " ";
    }
}

// Fungsi untuk menampilkan menu
void tampilkanMenu() {
    cout << "\nMenu:\n";
    cout << "1. Tambah Simpul\n";
    cout << "2. Tampilkan Pohon\n";
    cout << "3. Traversal Pre-order\n";
    cout << "4. Traversal In-order\n";
    cout << "5. Traversal Post-order\n";
    cout << "6. Keluar\n";
    cout << "Pilihan Anda: ";
}

// Fungsi Utama
int main() {
    inisialisasi();
    simpulAkar();

    int pilihan_2311110058;
    do {
        tampilkanMenu();
        cin >> pilihan_2311110058;

        switch (pilihan_2311110058) {
            case 1:
                tambahSimpul();
                break;
            case 2:
                bacaPohon();
                break;
            case 3:
                cout << "Pre-order: ";
                preOrder(root);
                cout << endl;
                break;
            case 4:
                cout << "In-order: ";
                inOrder(root);
                cout << endl;
                break;
            case 5:
                cout << "Post-order: ";
                postOrder(root);
                cout << endl;
                break;
            case 6:
                cout << "PROGRAM SELESAI...\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
                break;
        }
    } while (pilihan_2311110058 != 6);

    return 0;
}