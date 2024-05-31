# <h1 align="center">Laporan Praktikum Modul Rekursif dan Hash Table</h1>
<p align="center">Leonardus Ananto Widodo</p>

## Dasar Teori

# 1. Rekursif

Rekursif adalah proses dimana fungsi memanggil dirinya sendiri secara langsung atau tidak langsung [1]. Fungsi rekursif adalah fungsi dari suatu proses yang memanggil dirinya sendiri artinya fungsi tersebut dipanggil didalam tubuh fungsi itu sendiri [2]. Dalam rekursif sebenarnya terkandung pengertian prosedur atau fungsi. Perbedaannya adalah bahwa rekursif bisa memanggil ke dirinya sendiri, tetapi prosedur atau fungsi harus dipanggil lewat pemanggil prosedur atau fungsi. Pemanggilan prosedur atau fungsi ke dirinya sendiri bisa berarti proses yang berulang yang tidak bisa diketahui kapan akan berakhir [2]. Dalam sebuah fungsi rekursif pemanggilan dapat terjadi berulang kali karena ada proses yang berulang-ulang maka harus ada suatu kondisi yang mengakhiri prosesnya. Jika tidak, maka proses tidak akan pernah berhenti sampai memori yang digunakan tidak dapat menampung lagi [3].

Berikut ini merupakan jenis-jenis rekursif diantaranya yaitu:
a.	Rekursif langsung (Direct Recursion)
Rekursif langsung terjadi ketika sebuah fungsi memanggil dirinya sendiri secara langsung. Contoh klasik dari rekursif langsung adalah perhitungan faktorial dari sebuah bilangan.
b.	Rekursif tidak langsung
Rekursif tidak langsung terjadi ketika sebuah fungsi memanggil fungsi lain, yang kemudian memanggil fungsi asli. Contohnya adalah dua fungsi yang saling memanggil.

Selain itu, rekursif juga memiliki kelebihan dan kekurangan diantaranya yaitu:

**Kelebihan Rekursif**
- Kesederhanaan dan Keterbacaan: Rekursif seringkali menghasilkan solusi yang lebih sederhana dan lebih mudah dipahami untuk masalah-masalah yang memiliki sifat berulang, seperti pohon biner dan algoritma pembagian dan penaklukan (divide and conquer).
- Pemecahan Masalah yang Alami: Rekursif dapat menangani masalah yang secara alami memiliki struktur rekursif, seperti traversal pohon dan graf.
- Pemrograman Fungsional: Rekursif sering digunakan dalam bahasa pemrograman fungsional di mana perulangan eksplisit kurang umum.
 
**Kekurangan Rekursif**

- Kinerja: Rekursif dapat memiliki kinerja yang lebih buruk dibandingkan dengan iterasi karena overhead pemanggilan fungsi berulang kali. 
- Penggunaan Memori: Rekursif menggunakan lebih banyak memori karena setiap pemanggilan fungsi harus disimpan dalam stack, yang dapat menyebabkan stack overflow jika kedalaman rekursi terlalu besar.
- Kesulitan dalam Pemahaman: Untuk beberapa programmer, rekursif bisa lebih sulit dipahami dan debug dibandingkan dengan iterasi, terutama jika rekursinya kompleks.

**Alokasi Memori dalam Rekursif**
	Call Stack: Setiap pemanggilan fungsi menambahkan frame baru ke call stack. Frame ini berisi informasi seperti parameter fungsi, variabel lokal, dan alamat pengembalian.
	Stack Overflow: Jika rekursi terlalu dalam (misalnya, tidak ada kondisi basis yang cukup kuat atau input yang sangat besar), call stack bisa penuh, menyebabkan stack overflow.
	Efisiensi Memori: Rekursif yang tidak dioptimalkan bisa menghabiskan banyak memori, terutama jika ada banyak frame yang ditumpuk di call stack. Beberapa bahasa pemrograman dan compiler mendukung optimisasi tail-call untuk mengurangi penggunaan memori pada rekursif tail-call.

# 2. Hash Table**

Hash table (atau hash map) adalah struktur data yang digunakan untuk menyimpan pasangan kunci-nilai (key-value pairs) secara efisien. Hash table adalah sebuah array atau daftar di mana setiap indeks atau posisi dalam array diakses melalui nilai kunci (key). Untuk mengakses elemen di hash table, kunci tersebut dipetakan ke indeks dalam array menggunakan fungsi hash. Fungsi hash mengubah kunci menjadi indeks array, sehingga memungkinkan akses langsung ke nilai yang diinginkan. Hash table memungkinkan pencarian, penyisipan, dan penghapusan elemen dengan waktu rata-rata yang sangat cepat, umumnya O(1). Fungsi hash yang baik memiliki sifat yaitu mudah dihitung, cukup mampu mendistribusikan key, meminimalkan jumlah collision (tabrakan) yang terjadi [5]. Fungsi hash dapat menggunakan beberapa teknik, diantaranya yaitu [5]:
a. Truncation   : Mengambil beberapa digit dari key sebagai indeks
b. Folding      : Menjumlahkan beberapa digit dari key, hasil penjumlahan sebagai indeks
c. Modular      : Menggunakan sisa hasil bagi dari key (bilangan bulat) dengan ukuran hash table.

Berikut ini operasi yang terdapat pada hash table diantaranya yaitu:
1)	Penyisipan (Insertion): Menambahkan pasangan kunci-nilai baru ke hash table. Kunci diproses melalui fungsi hash untuk menemukan indeks array yang sesuai, dan nilai disimpan di lokasi tersebut.
2)	Pencarian (Search): Mencari nilai berdasarkan kunci. Kunci diproses melalui fungsi hash untuk menemukan indeks array yang sesuai, dan nilai diambil dari lokasi tersebut.
3)	Penghapusan (Deletion): Menghapus pasangan kunci-nilai dari hash table. Kunci diproses melalui fungsi hash untuk menemukan indeks array yang sesuai, dan nilai dihapus dari lokasi tersebut.

Berdasarkan teknik untuk menangani collision, hash table dapat dikategorikan menjadi Closed Hashing (Open Addressing) dan Open hashing (Separate Chaining). Collision sendiri terjadi ketika terdapat dua key/lebih yang dipetakkan pada sebuah sel array yang sama [5].

1) Closed Hashing (Open Addressing)

Ide dari teknik ini adalah mencari alternative sel lain pada table ketika terjadi collision. Pada proses insertion, ketika indeks yang telah ditentukan dari Fungsi hash yang digunakan sudah berisi suatu item, maka akan mencari sel lain sesuai urutan menggunakan fungsi pencarian urutan. Beberapa startegi untuk menentukan fungsi pencarian urutan, yaitu [5]:

a. Linier probing: Jika terjadi collision, pencarian dilakukan secara linier ke indeks berikutnya hingga menemukan slot kosong.

b. Quadratic probing: Pencarian dilakukan dengan jarak kuadrat (i^2) dari indeks asal.

c. Double hashing: Menggunakan fungsi hash kedua jika terjadi collision untuk menentukan langkah pencarian berikutnya.

2) Open hashing (Separate Chaining)
Pada teknik ini, permasalahan collision diselesaikan dengan menambah seluruh elemen yang memiliki nilai sama pada sebuah sel. Hal ini dilakukan dengan cara menyediakan sebuah linked list untuk setiap elemen yang memiliki nilai hash yang sama. Tiap sel pada hash table memiliki sebuah lisked list yang berisi data/elemen [5].


## Guided 

### 1. Rekursif Langsung (Direct Recursion)

```C++
#include <iostream>
using namespace std;

// Code ini berfungsi untuk melakukan hitung mundur dari angka yang diinputkan

void countdown(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    countdown(n - 1);
}

int main() {
    cout << "Rekursif Langsung: ";
    countdown(5); // 5 merupakan input nya
    cout << endl;
    return 0;
}
```
Pada program di atas, terdapat fungsi countdown yang merupakan fungsi rekursif untuk melakukan hitung mundur dari angka yang diinputkan. Fungsi ini menerima parameter n yang merupakan angka awal untuk hitung mundur. Dalam fungsi countdown, terdapat kondisi base case yang akan menghentikan rekursi ketika nilai n sama dengan 0. Jika kondisi ini terpenuhi, maka fungsi akan langsung mengembalikan nilai dan mengakhiri eksekusi. Jika kondisi base case belum terpenuhi, maka program akan menampilkan nilai n ke layar menggunakan perintah cout << n << " ", kemudian memanggil kembali fungsi countdown dengan parameter n - 1. Dengan demikian, proses hitung mundur akan terus dilakukan hingga n mencapai nilai 0. Di dalam fungsi main, terdapat pemanggilan fungsi countdown dengan nilai 5 sebagai parameter. Sehingga ketika program dijalankan, output yang akan ditampilkan adalah "5 4 3 2 1". Ini karena fungsi countdown akan melakukan pencetakan nilai n ke layar dan memanggil kembali dirinya sendiri dengan nilai n yang lebih kecil, sehingga membentuk pola hitung mundur.

### Output
<img width="780" alt="Screenshot 2024-05-31 221109" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/587fe909-8395-4726-a663-9e485a86c4a1">

### 2. Rekursif Tidak Langsung (Indirect Recursion)

```C++
#include <iostream>
using namespace std;

void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";
        functionB(n - 1); // Panggilan rekursif tidak langsung
    }
} 

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";
        functionA(n / 2); // Panggilan rekursif tidak langsung
    }
}

int main() {
    int num = 5;
    cout << "Rekursif Tidak Langsung: ";
    functionA(num);
    return 0;
}
```
### Penjelasan Program

Pada program di atas, terdapat dua fungsi yaitu functionA dan functionB yang merupakan fungsi rekursif tidak langsung. Fungsi functionA melakukan pemanggilan fungsi functionB dengan parameter n-1, sedangkan fungsi functionB melakukan pemanggilan fungsi functionA dengan parameter n/2. Di dalam fungsi functionA, terdapat kondisi base case if (n > 0) yang akan menjalankan proses rekursif selama nilai n masih lebih besar dari 0. Jika kondisi terpenuhi, nilai n akan dicetak ke layar menggunakan cout dan kemudian fungsi functionB dipanggil dengan parameter n-1. Di dalam fungsi functionB juga terdapat kondisi base case if (n > 0) yang menjalankan proses rekursif selama nilai n masih lebih besar dari 0. Jika kondisi terpenuhi, nilai n akan dicetak ke layar menggunakan cout dan kemudian fungsi functionA dipanggil dengan parameter n/2. Di dalam fungsi main, terdapat inisialisasi variabel num dengan nilai 5. Kemudian fungsi functionA dipanggil dengan parameter num. Sehingga ketika program dijalankan, output yang akan ditampilkan adalah "5 4 3 1". Ini karena proses panggilan fungsi rekursif tidak langsung antara functionA dan functionB yang berjalan sesuai dengan mekanisme pemanggilan tersebut.

### Output
<img width="780" alt="Screenshot 2024-05-31 221542" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/8bd888f8-58aa-4abc-ab56-b3a0648019d8">

### 3. Hash table

```C++
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int TABLE_SIZE = 11;



string name;
string phone_number;
class HashNode {
public:
    string name;
    string phone_number;
    
    
    
    HashNode(string name, string phone_number) {
        this->name = name;
        this->phone_number = phone_number;
    }
};


class HashMap {
private:
    vector<HashNode*> table[TABLE_SIZE];
public:
    int hashFunc(string key) {
        int hash_val = 0;
        for (char c : key) {
            hash_val += c;
        }
    return hash_val % TABLE_SIZE; // 4 bisa aja 204,12004, 6 bisa aja 266, 300
    }
    void insert(string name, string phone_number) {
        int hash_val = hashFunc(name);
        
        
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                node->phone_number = phone_number;
                return;
            }
        }
        table[hash_val].push_back(new HashNode(name, phone_number));
    }
    
    
    void remove(string name) {
        int hash_val = hashFunc(name);
        
        for (auto it = table[hash_val].begin(); it != 
table[hash_val].end(); it++) {
            if ((*it)->name == name) {
                table[hash_val].erase(it);
                return;
            }
        }
    }
    string searchByName(string name) {
        int hash_val = hashFunc(name);
        for (auto node : table[hash_val]) {
            if (node->name == name) {
                return node->phone_number;
            }
        }
        return "";
    }

    void print() {
        for (int i = 0; i < TABLE_SIZE; i++) {
            cout << i << ": ";
            for (auto pair : table[i]) {
                if(pair != nullptr) {
                    cout << "[" << pair->name << ", " <<
pair->phone_number << "]";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    HashMap employee_map;
    employee_map.insert("Mistah", "1234");
    employee_map.insert("Pastah", "5678");
    employee_map.insert("Ghana", "91011");
    cout << "Nomer Hp Mistah : " << employee_map.searchByName("Mistah") << endl;
    cout << "Phone Hp Pastah : " << employee_map.searchByName("Pastah") << endl;
    cout << "Phone Hp Ghana : " << employee_map.searchByName("Ghana") << endl;
    employee_map.remove("Mistah");
    cout << "Nomer Hp Mistah setelah dihapus : " << employee_map.searchByName("Mistah") << endl << endl;
    cout << "Hash Table : " << endl;

    employee_map.print();
    
    return 0;
}
```

### Penjelasan Program

Program di atas merupakan implementasi dari struktur data Hash Table pada bahasa pemrograman C++. Berikut ini fungsi yang digunakan pada program tersebut diantaranya yaitu:

1. **HashNode class**: Kelas yang digunakan untuk mewakili simpul (node) dalam tabel hash. Setiap simpul ini memiliki dua atribut yaitu `name` dan `phone_number`. Konstruktor dari kelas ini digunakan untuk inisialisasi nilai `name` dan `phone_number`.

2. **HashMap class**: Kelas yang berisi implementasi dari Hash Table. Di dalam kelas ini terdapat beberapa fungsi kunci seperti:
   - **hashFunc(string key)**: Fungsi ini digunakan untuk menghitung nilai hash dari sebuah kunci (key) yang diberikan. Fungsi ini mengembalikan nilai hash_val yang merupakan hasil dari penjumlahan nilai ASCII karakter dari setiap karakter kunci kemudian dimodulo dengan TABLE_SIZE.
   - **insert(string name, string phone_number)**: Fungsi ini digunakan untuk menyisipkan (insert) data baru ke dalam tabel hash. Fungsi ini menghitung nilai hash dari nama, kemudian memeriksa apakah data sudah ada sebelumnya. Jika sudah ada, maka data nomor telepon akan diperbarui, jika tidak maka data baru akan dimasukkan.
   - **remove(string name)**: Fungsi ini digunakan untuk menghapus data berdasarkan nama yang diberikan. Fungsi ini menghitung nilai hash dari nama, kemudian mencari node dengan nama tersebut. Jika ditemukan, maka node tersebut akan dihapus dari tabel.
   - **searchByName(string name)**: Fungsi ini digunakan untuk mencari dan mengembalikan nomor telepon berdasarkan nama yang diberikan. Fungsi ini menghitung nilai hash dari nama, kemudian mencari node dengan nama tersebut dan mengembalikan nomor teleponnya.
   - **print()**: Fungsi ini digunakan untuk mencetak seluruh isi dari tabel hash, termasuk indeksnya dan data-datanya.

3. **main function**: Di dalam fungsi main, dibuat objek `employee_map` dari kelas `HashMap`, kemudian dilakukan serangkaian operasi seperti penyisipan data, pencarian data berdasarkan nama, penghapusan data berdasarkan nama, dan pencetakan isi tabel hash menggunakan fungsi print.

Program ini menggunakan hash table untuk menyimpan nama dan nomor telepon karyawan serta memberikan fungsionalitas untuk menyisipkan data, mencari data berdasarkan nama, menghapus data berdasarkan nama, dan mencetak isi dari tabel hash.

### Output
<img width="780" alt="Screenshot 2024-05-31 222128" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/ddfa8155-de23-4111-ac73-92c216dbe064">

## Unguided 

### 1. Buatlah sebuah program Rekursif Langsung (Direct Recursion) yang menghitung nilai faktorial dari sebuah inputan bilangan bulat positif!!

```C++
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
```

### Penjelasan Program 

Program di atas merupakan implementasi fungsi rekursif untuk menghitung faktorial dari sebuah bilangan bulat positif. Berikut ini penjelasan dari fungsi yang digunakan dalam program tersebut yaitu:

1. **faktorial(int n)**: Fungsi rekursif yang digunakan untuk menghitung faktorial dari bilangan bulat positif `n`. Fungsi ini mengikuti aturan faktorial matematika yang didefinisikan sebagai berikut:
   - Basis kasus: jika `n` sama dengan 0 atau 1, maka faktorialnya adalah 1. Ini adalah kondisi terminasi rekursi.
   - Rekursi kasus: jika `n` lebih besar dari 1, maka faktorial dari `n` adalah `n` dikali dengan faktorial dari `n-1`.

2. **main() function**: Di dalam fungsi `main`, program meminta pengguna untuk memasukkan bilangan bulat positif. Kemudian, program memeriksa apakah input yang dimasukkan tersebut benar-benar bilangan bulat positif. Jika iya, program memanggil fungsi `faktorial()` dengan input bilangan yang dimasukkan oleh pengguna. Hasil faktorial kemudian dicetak ke layar.

Oleh karena itu penggunaan rekursi pada program di atas dapat menghitung faktorial dari bilangan bulat positif yang dimasukkan oleh pengguna. Jika pengguna memasukkan bilangan negatif, program memberikan pesan kesalahan bahwa input tidak valid dan meminta untuk memasukkan bilangan bulat positif. Jika pengguna memasukkan bilangan bulat positif, program akan mencetak hasil faktorialnya ke layar.

#### Output:
<img width="694" alt="Screenshot 2024-05-31 222846" src=" https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/44fae205-d25f-4258-9f6f-0fccb0fa7bf1">

### 2. Buatlah versi program Rekursif Tidak Langsung (Indirect Recursion) dari soal nomor 1 di atas!

```C++
#include <iostream>

using namespace std;

// Deklarasi fungsi
int fungsiA(int n);
int fungsiB(int n);

// Fungsi A memanggil Fungsi B
int fungsiA(int n) {
    // Basis kasus: jika n adalah 0 atau 1, faktorialnya adalah 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fungsiB(n - 1);
    }
}

// Fungsi B memanggil Fungsi A
int fungsiB(int n) {
    return fungsiA(n);
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
        // Menghitung faktorial menggunakan fungsi rekursif tidak langsung
        int hasil = fungsiA(bilangan);
        cout << "Faktorial dari " << bilangan << " adalah: " << hasil << endl;
    }

    return 0;
}
```

### Penjelasan Program

Program di atas merupakan implementasi fungsi rekursif untuk menghitung faktorial dari sebuah bilangan bulat positif, namun dengan sedikit perbedaan karena rekursif tersebut merupakan rekursif tidak langsung. Fungsi A dan Fungsi B saling memanggil satu sama lain secara bergantian. Berikut adalah penjelasan detail dari fungsi yang digunakan dalam program tersebut yaitu:

1. **fungsiA(int n)**: Fungsi ini merupakan fungsi rekursif yang digunakan untuk menghitung faktorial dari bilangan bulat positif `n`. Namun, yang menarik dari fungsi ini adalah ketika `n` tidak bersifat basis (bukan 0 atau 1), maka fungsi A akan memanggil fungsi B dengan parameter `n - 1` untuk menghitung faktorial.
   
2. **fungsiB(int n)**: Fungsi ini juga merupakan fungsi rekursif. Fungsi B hanya memanggil fungsi A dengan parameter `n`.

3. **main() function**: Program memiliki struktur yang serupa dengan program sebelumnya, di mana pengguna diminta untuk memasukkan bilangan bulat positif. Jika input pengguna benar, program akan memanggil fungsi A dengan bilangan yang dimasukkan oleh pengguna dan kemudian mencetak hasil faktorial ke layar.

Dalam program implementasi rekursif ini, kedua fungsi saling memanggil satu sama lain untuk menghitung faktorial dari bilangan bulat positif yang dimasukkan oleh pengguna. Proses rekursi antara fungsi A dan fungsi B terjadi secara bergantian, di mana fungsi A memanggil fungsi B untuk menghitung faktorial saat kondisi fungsi A tidak bersifat basis, dan sebaliknya fungsi B memanggil fungsi A. Proses ini tetap akan berakhir saat basis kasus tercapai (yaitu nilai `n` sama dengan 0 atau 1).

### Output
<img width="777" alt="Screenshot 2024-05-31 223713" src=" https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/644c9579-f1af-4acf-a621-6df54da6459c"> 

### 3. Implementasikan hash table untuk menyimpan data mahasiswa. Setiap mahasiswa memiliki NIM dan nilai. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan nilai. Dengan ketentuan :
### a. Setiap mahasiswa memiliki NIM dan nilai.
### b. Program memiliki tampilan pilihan menu berisi poin C.
### c. Implementasikan fungsi untuk menambahkan data baru, menghapus data, mencari data berdasarkan NIM, dan mencari data berdasarkan rentang nilai (80 – 90)

```C++
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
```

### Penjelasan Program 

Program di atas merupakan program yang memanfaatkan sebuah `unordered_map` untuk menyimpan data mahasiswa berdasarkan NIM. Program tersebut memiliki beberapa fungsi yang digunakan untuk melakukan operasi-operasi seperti menambah data mahasiswa, menghapus data berdasarkan NIM, mencari data berdasarkan NIM, mencari data berdasarkan rentang nilai, menampilkan menu, dan mengelola input dari pengguna. Berikut ini penjelasan dari setiap fungsi yang digunakan dalam program diantaranya yaitu:

1. **struct Mahasiswa**: Struktur yang digunakan untuk merepresentasikan data seorang mahasiswa, terdiri dari string `nim` dan integer `nilai`.

2. **struct HashMahasiswa**: Fungsi hash yang digunakan untuk melakukan hashing berdasarkan NIM mahasiswa yang akan berguna saat menyimpan data dalam `unordered_map`.

3. **tambahData(unordered_map<string, Mahasiswa, HashMahasiswa>& table, const string& nim, int nilai)**: Fungsi ini digunakan untuk menambahkan data mahasiswa ke dalam `unordered_map`. Fungsi ini membuat objek `Mahasiswa` berdasarkan NIM dan nilai yang diberikan, lalu menambahkannya ke dalam tabel menggunakan NIM sebagai kunci.

4. **hapusData(unordered_map<string, Mahasiswa, HashMahasiswa>& table, const string& nim)**: Fungsi ini digunakan untuk menghapus data mahasiswa dari tabel berdasarkan NIM yang diberikan. Jika data berhasil dihapus, pesan sukses akan dicetak. Jika tidak, pesan data tidak ditemukan akan dicetak.

5. **cariDataBerdasarkanNIM(const unordered_map<string, Mahasiswa, HashMahasiswa>& table, const string& nim)**: Fungsi ini digunakan untuk mencari data mahasiswa berdasarkan NIM yang diberikan. Jika data ditemukan, informasi mahasiswa (NIM dan nilai) akan dicetak. Jika tidak, pesan data tidak ditemukan akan dicetak.

6. **cariDataBerdasarkanNilai(const unordered_map<string, Mahasiswa, HashMahasiswa>& table, int minNilai, int maxNilai)**: Fungsi ini digunakan untuk mencari data mahasiswa berdasarkan rentang nilai yang diberikan. Fungsi akan mencetak semua mahasiswa yang memenuhi rentang nilai tersebut. Jika tidak ada data yang memenuhi, pesan tidak ada data akan dicetak.

7. **menu()**: Fungsi ini menampilkan menu pilihan operasi kepada pengguna dan meminta input untuk memilih opsi. Sesuai dengan pilihan yang dipilih, fungsi akan memanggil fungsi-fungsi yang sesuai untuk melakukan operasi yang diminta. Proses ini akan terus berlangsung hingga pengguna memilih untuk keluar dari program.

Oleh karena itu, dengan adanya fungsi-fungsi diatas menyebabkan program dapat memberikan fungsionalitas untuk menambah, menghapus, dan mencari data mahasiswa berdasarkan NIM dan rentang nilai, serta memberikan interaksi dengan pengguna melalui menu yang disediakan.

### Output
<img width="778" alt="Screenshot 2024-05-31 224643" src= "https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/66ef196a-f24e-4a73-8bdd-f600fcdb85f1">

<img width="778" alt="Screenshot 2024-05-31 224835" src= "https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/ae5d52a5-b6b4-4f75-a296-fe669a3d178b">

<img width="778" alt="Screenshot 2024-05-31 224917" src= "https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/ef7b7a3e-c87d-4f49-89d0-549b4f5d86e8">

<img width="778" alt="Screenshot 2024-05-31 224938" src= "https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/349f6a0d-48b4-4e73-9d8e-ea276d5f97ae">

## Kesimpulan
Rekursif adalah proses sebuah fungsi yang memanggil dirinya sendiri dengan cara rekursif langsung atau rekursif tidak langsung. Rekursif langsung merupakan fungsi yang memanggil dirinya sendiri secara langsung atau tidak langsung memanggil dirinya sendiri, sedangkan rekursif tidak langsung merupakan fungsi yang memanggil fungsi lain dengan cara memanggil fungsi rekursif lain, bukan fungsi itu sendiri. Kekurangan dari rekursif adalah setiap programnya memiliki persyaratan ruang yang lebih besar dan memiliki persyaratan yang lebih besar juga, rekursif seringkali berhenti, memakan memori lebih besar. Kelebihan dari rekursif adalah rekursi menyediakan cara yang bersih dan sederhaan dalam penulisan kode program, beberapa masalah dianjurkan untuk menggunakan rekursif dalam penyelesaiannya, program lebih singkat dan efisien secara iteratif. Alokasi memori untuk rekursif adalah di atas memori yang dialokasikan untuk fungsi pemanggil dan salinan variabel lokal yang berbeda dibuat untuk setiap panggilan fungsi, ketika base case tercapai, fungsi mengembalikan nilainya ke fungsi yang memanggil, dilanjutkan dengan melepas memori dan proses pun berlanjut.

## Referensi
[1] Oematan, M. Zusane. Pengenalan C/C++. Indonesia: Unikom.ac.id: 2010.

[2] MTD Putra, D Pradeka, AR Yuniarti. Belajar Dasar Pemrograman C++. Indonesia: penerbitwidina.com: 2022.

[3] Ma'Arif, Alfian. Buku Ajar Dasar Pemrograman C++. Yogyakarta: UAD Press: 2020.

[4] Faradiba. PENGGUNAAN APLIKASI VISUAL C++ UNTUK PEMROGRAMAN KOMPUTER. Jakarta: 2019.

[5] Maulida, Anisa Fitri. dibimbing.id. https://dibimbing.id/blog/detail/seperti-apa-tipe-data-primitif, accessed 12 November  2023. 
