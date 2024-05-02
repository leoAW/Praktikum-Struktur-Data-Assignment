# <h1 align="center">Laporan Praktikum Modul Struct</h1>
<p align="center">Leonardus Ananto Widodo</p>

## Dasar Teori
**1. Struct**
Struct adalah tipe data bentukan yang berisi kumpulan variabel-variabel yang bernaung dalam satu nama yang sama dan memiliki kaitan satu sama lain. Berbeda dengan array hanya berupa kumpulan variabel yang bertipe data sama, struct bisa memiliki variabel-variabel yang bertipe data sama atau berbeda, bahkan bisa menyimpan variabel yang bertipe data array atau struct itu sendiri [1]. Variabel-variabel yang menjadi anggota struct ini disebut dengan elemen struct. Selain itu, struct yaitu koleksi dari variabel yang dinyatakan dengan sebuah nama, dengan sifat setiap variabel dapat memiliki tipe yang berlainan. Struct biasanya sering dipakai untuk mengelompokkan beberapa informasi yang berkaitan menjadi sebuah satu kesatuan [2]. 

Array dan struct mempunyai persamaan serta perbedaan. Persamaan antara array dan struct adalah alokasi memori untuk elemen - elemennya sudah ditentukan sebelum program dijalankan (statis). Sedangkan perbedaan antara array dengan struct adalah sebagai berikut [3]:
1) Array adalah struktur data yang tipe data dari elemen - elemennya sama (homogen) dan elemen - elemennya          diakses atau diidentifikasi menggunakan index.
2) Struct adalah struktur data yang tipe data dari elemen - elemennya boleh tidak sama (heterogen) dan elemen –     elemennya diakses atau diidentifikasi menggunakan identifier atau nama variabel.

a. Bentuk umum :

struct <nama_struct> {
		tipe_data <nama_var>;
		tipe_data <nama_var>;
		....
}

b. Cara mendeklarasikan Struct
   
	struct Mahasiswa {
	char NIM[8];
	char nama[50];
	float ipk;
   };

   Keterangan deklarasi struct
    - Untuk menggunakan struct Mahasiswa dengan membuat variabel mhs dan mhs2
      Mahasiswa mhs, mhs2;
    - Untuk menggunakan struct Mahasiswa dengan membuat variabel array m;
      Mahasiswa m[100];

c. Cara Menggunakan Struct
Penggunaan/pemakaian tipe data struct dilakukan dengan membuat suatu variabel yang bertipe data struct tersebut. Pengaksesan elemen struct dilakukan secara individual dengan menyebutkan nama variabel struct diikuti dengan operator titik (.) [1].


## Guided 

### 1. Buatlah sebuah struktur dengan nama buku yang berisi judul_buku, pengarang, penerbit, tebal_halaman,harga_buku. Isi dengan nilai kemudian tampilkan.

```C++
#include <iostream>
#include <string>

using namespace std;

struct Buku{
    string judul_buku;      //Atribut
    string pengarang;
    string penerbit;
    int tebal_buku;
    double harga_buku;
}; Buku buku1; Buku buku2;  //Variabel

int main(){
    buku1.judul_buku    = "Azab di Alam Barzakh"; //Memanggil
    buku1.pengarang     = "Oel Ananta";
    buku1.penerbit      = "Erlangga";
    buku1.tebal_buku    = 250;
    buku1.harga_buku    = 150000;

    buku2.judul_buku    = "Cerita Rakyat Nusantara"; //Memanggil
    buku2.pengarang     = "Ilham Gozali";
    buku2.penerbit      = "Yudhistira";
    buku2.tebal_buku    = 150;
    buku2.harga_buku    = 120000;

    //Menampilkan data
    cout << "\tInformasi buku" << endl;
    cout << "Judul          : " << buku1.judul_buku << endl;
    cout << "Pengarang      : " << buku1.pengarang << endl;
    cout << "Penerbit       : " << buku1.penerbit << endl;
    cout << "Tebal Halaman  : " << buku1.tebal_buku << endl;
    cout << "Harga Buku     : " << buku1.harga_buku << endl;

    cout << "\tInformasi buku" << endl;
    cout << "Judul          : " << buku2.judul_buku << endl;
    cout << "Pengarang      : " << buku2.pengarang << endl;
    cout << "Penerbit       : " << buku2.penerbit << endl;
    cout << "Tebal Halaman  : " << buku2.tebal_buku << endl;
    cout << "Harga Buku     : " << buku2.harga_buku << endl;

return 0;
}
```

### Penjelasan Program (Interpretasi)
Program tersebut merupakan program sederhana yang menggunakan struct untuk membuat data buku. Struct Buku memiliki beberapa atribut seperti judul_buku, pengarang, penerbit, tebal_buku, dan harga_buku. Pada program ini, terdapat dua variabel buku yaitu buku1 dan buku2. Setiap variabel buku memiliki nilai untuk setiap atribut yang dimasukkan secara manual.

Fungsi yang digunakan dalam program ini yaitu:

1. **Header Files Inclusion:**
    - Program dimulai dengan penggunaan preprocessor directive `#include` yang mengarahkan compiler untuk menyertakan dua header files, yaitu `<iostream>` dan `<string>`. Dua header ini diperlukan untuk mengakses fungsi input-output standar dan tipe data string.

2. **`using namespace std;`**
    - Baris ini menggunakan `using namespace std;` untuk mempermudah penggunaan elemen-elemen dari namespace `std` tanpa menyebutkannya secara spesifik setiap kali digunakan.

3. **Struct `Buku`:**
    - Struct `Buku` didefinisikan dengan beberapa atribut sebagai data member, yaitu `judul_buku`, `pengarang`, `penerbit`, `tebal_buku`, dan `harga_buku`. Struct ini digunakan untuk merepresentasikan objek buku.

4. **Variabel Buku:**
    - Dideklarasikan dua variabel `buku1` dan `buku2` dengan tipe struct `Buku`, yang akan menyimpan informasi tentang dua buku yang berbeda.

5. **Fungsi `main()`:**
    - Fungsi `main()` adalah titik masuk utama program yang akan dijalankan. Di dalamnya, informasi untuk kedua buku diinisialisasi.

6. **Inisialisasi Data Buku:**
    - Setiap atribut dari `buku1` dan `buku2` diisi dengan informasi yang relevan seperti judul buku, pengarang, penerbit, tebal halaman, dan harga buku.

7. **Pencetakan Informasi Buku:**
    - Dilakukan pencetakan informasi masing-masing buku ke layar menggunakan `cout`, memberikan informasi seperti judul, pengarang, penerbit, jumlah halaman, dan harga buku.

8. **Output:**
    - Setelah semua informasi buku dikeluarkan, program mengembalikan nilai 0, menandakan bahwa program telah berakhir dengan sukses.

Dengan demikian, program ini memanfaatkan struct untuk merepresentasikan data objek buku dan menyediakan informasi terperinci tentang dua buku yang berbeda.

### Output
<img width="780" alt="Screenshot 2024-05-02 072837" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/dcd5a7c1-e2c2-4ebc-b624-cfa2fd33b26f">

Program ini mencetak informasi dari kedua buku yang telah didefinisikan sebelumnya. Oleh karena itu, setiap informasi buku seperti judul, pengarang, penerbit, tebal halaman, dan harga buku ditampilkan di layar.

### 2. Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai kemudian jalankan.

<img width="780" alt="Screenshot 2024-05-02 071209" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/1c3833e7-5cdf-42b9-910d-8acf40120d0e">

```C++
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
```

### Penjelasan Program (Interpretasi)
Program tersebut merupakan program C++ yang menggunakan struct untuk menggambarkan informasi tentang hewan, dengan tambahan informasi khusus untuk hewan darat dan hewan laut. Berikut ini penjelasan terkait fungsi-fungsi yang digunakan dalam program tersebut yaitu:

1. **Header Files Inclusion:**
    - Program dimulai dengan menggunakan preprocessor directive `#include` untuk menyertakan header files `<iostream>` dan `<string>`. Hal ini diperlukan untuk penggunaan fungsi input-output standar (e.g., `cout`) dan tipe data string.

2. **Struct `Hewan`:**
    - Struct `Hewan` didefinisikan untuk menyimpan informasi dasar tentang hewan, seperti nama hewan, jenis kelamin, cara berkembangbiak, alat bernafas, tempat hidup, dan apakah hewan tersebut karnivora.

3. **Struct `Hewan_darat` dan `Hewan_laut`:**
    - Dua struct tambahan, yaitu `Hewan_darat` dan `Hewan_laut`, digunakan untuk menambahkan informasi tambahan yang spesifik untuk hewan darat dan hewan laut masing-masing.

4. **Variabel dan Data Member:**
    - Dua variabel `hewan1` dan `hewan2` dibuat, masing-masing bertipe `Hewan_darat` dan `Hewan_laut`.
    - Informasi hewan darat dan hewan laut diinisialisasi dengan memberikan nilai kepada setiap atribut.

5. **Pencetakan Informasi Hewan:**
    - Setelah inisialisasi, informasi hewan darat dan hewan laut dicetak ke layar menggunakan `cout`. Informasi seperti nama hewan, jenis kelamin, cara berkembangbiak, alat bernafas, tempat hidup, apakah karnivora, jumlah kaki (hanya untuk hewan darat), apakah menyusui (hanya untuk hewan darat), suara (hanya untuk hewan darat), bentuk sirip (hanya untuk hewan laut), dan pertahanan diri (hanya untuk hewan laut) ditampilkan.

6. **Output:**
    - Setelah semua informasi dicetak, program mengembalikan nilai 0 untuk menunjukkan bahwa program telah berakhir dengan sukses.

Dengan demikian, penggunaan struct pada program ini dapat menyimpan informasi hewan dengan atribut yang sama maupun tambahan, yang memungkinkan untuk merepresentasikan hewan darat dan hewan laut secara terpisah dengan informasi yang relevan.  

### Output
<img width="780" alt="Screenshot 2024-05-02 074331" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/3cce62e9-d104-491e-a5d5-35bff85eccf7">

Program ini mencetak informasi dari informasi hewan yang telah didefinisikan sebelumnya. Oleh karena itu, setiap informasi hewan pada hewan darat dan hewan laut akan ditampilkan pada layar.

## Unguided 

### 1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan.

```C++
#include <iostream>
#include <string>
using namespace std;

struct Buku{
    string judul_buku[5];     // Atribut
    string pengarang[5];
    string penerbit[5];
    int tebal_halaman[5];
    double harga_buku[5]; 
};

int main(){
    // Mendeklarasi variabel BukuNovel dengan tipe Buku
    Buku BukuNovel;
    cout << "======= Buku Novel Terkenal di Indonesia =======";
    //Mengisi data ke dalam variabel BukuNovel untuk buku 1
    BukuNovel.judul_buku[0]         = "Ayat-Ayat Cinta";
    BukuNovel.pengarang[0]          = "Habiburrahman El Shirazy";
    BukuNovel.penerbit[0]           = "Republika";
    BukuNovel.tebal_halaman[0]      = 356;
    BukuNovel.harga_buku[0]         = 80000;

    //Mengisi data ke dalam variabel BukuNovel untuk buku 2
    BukuNovel.judul_buku[1]         = "Perahu Kertas";
    BukuNovel.pengarang[1]          = "Dee Lestari";
    BukuNovel.penerbit[1]           = "Bentang Pustaka";
    BukuNovel.tebal_halaman[1]      = 360;
    BukuNovel.harga_buku[1]         = 75000;

    //Mengisi data ke dalam variabel BukuNovel untuk buku 3
    BukuNovel.judul_buku[2]         = "Ronggeng Dukuh Paruk";
    BukuNovel.pengarang[2]          = "Ahmad Tohari";
    BukuNovel.penerbit[2]           = "Grasindo";
    BukuNovel.tebal_halaman[2]      = 456;
    BukuNovel.harga_buku[2]         = 85000;

    //Mengisi data ke dalam variabel BukuNovel untuk buku 4
    BukuNovel.judul_buku[3]         = "Supernova: Ksatria, Puteri, dan Bintang Jatuh ";
    BukuNovel.pengarang[3]          = "Dee Lestari";
    BukuNovel.penerbit[3]           = "Bentang Pustaka";
    BukuNovel.tebal_halaman[3]      = 376;
    BukuNovel.harga_buku[3]         = 85000;

    //Mengisi data ke dalam variabel BukuNovel untuk buku 5
    BukuNovel.judul_buku[4]         = "Laskar Pelangi";
    BukuNovel.pengarang[4]          = "Andrea Hirata";
    BukuNovel.penerbit[4]           = "Bentang Pustaka";
    BukuNovel.tebal_halaman[4]      = 352;
    BukuNovel.harga_buku[4]         = 65000;

    for (int i=0; i<5; i++){
        cout << "\n\tBuku Novel ke-" << i+1 << endl;
        cout << "\tJudul Buku          : "      << BukuNovel.judul_buku[i] << endl;
        cout << "\tPengarang           : "      << BukuNovel.pengarang[i] << endl;
        cout << "\tPenerbit            : "      << BukuNovel.penerbit[i] << endl;
        cout << "\tTebal Halaman       : "      << BukuNovel.tebal_halaman[i] << endl;
        cout << "\tHarga Buku          : Rp "   << BukuNovel.harga_buku[i] << endl;
    }
    return 0;
}
```

### Penjelasan Program (Interpretasi)

Program tersebut menggunakan fungsi main() sebagai entry point dari program. Di dalam fungsi main(), terdapat definisi dari struct Buku yang memiliki beberapa atribut berupa array dengan ukuran 5 untuk menyimpan informasi tentang buku. Atribut-atribut tersebut meliputi judul buku, pengarang, penerbit, tebal halaman, dan harga buku.

Selanjutnya, program mendeklarasikan variabel BukuNovel dengan tipe data Buku untuk menyimpan data buku-buku novel yang akan diisi. Data buku novel kemudian diisi untuk 5 buku yang berbeda, mulai dari judul, pengarang, penerbit, tebal halaman, dan harga buku.

Setelah data buku diisi, program menggunakan loop for untuk menampilkan informasi dari setiap buku novel yang disimpan dalam variabel BukuNovel. Informasi yang ditampilkan meliputi judul buku, pengarang, penerbit, tebal halaman, dan harga buku.

#### Output:
<img width="694" alt="Screenshot 2024-05-02 084724" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/1d77dac2-8939-40fd-a7f8-ad1158e60010">

<img width="694" alt="Screenshot 2024-05-02 084735" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/06f05fcb-c397-4250-be21-76e01b572cfd">

Program ini membantu dalam menyimpan dan menampilkan informasi tentang beberapa buku novel terkenal di Indonesia menggunakan struct dan array di dalam bahasa pemrograman C++

### 2. Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I, berjenis Array. Bagaimana cara mengisi data dan menampilkannya ?

```C++
#include <iostream>
#include <string>
using namespace std;

struct Buku{
    string judul_buku[5];     // Atribut
    string pengarang[5];
    string penerbit[5];
    int tebal_halaman[5];
    double harga_buku[5]; 
};

int main(){
    // Mendeklarasi variabel BukuNovel dengan tipe Buku
    Buku BukuNovel;
    cout << "======= Buku Novel Terkenal di Indonesia =======";
    //Mengisi data ke dalam variabel BukuNovel untuk buku 1
    BukuNovel.judul_buku[0]         = "Ayat-Ayat Cinta";
    BukuNovel.pengarang[0]          = "Habiburrahman El Shirazy";
    BukuNovel.penerbit[0]           = "Republika";
    BukuNovel.tebal_halaman[0]      = 356;
    BukuNovel.harga_buku[0]         = 80000;

    //Mengisi data ke dalam variabel BukuNovel untuk buku 2
    BukuNovel.judul_buku[1]         = "Perahu Kertas";
    BukuNovel.pengarang[1]          = "Dee Lestari";
    BukuNovel.penerbit[1]           = "Bentang Pustaka";
    BukuNovel.tebal_halaman[1]      = 360;
    BukuNovel.harga_buku[1]         = 75000;

    //Mengisi data ke dalam variabel BukuNovel untuk buku 3
    BukuNovel.judul_buku[2]         = "Ronggeng Dukuh Paruk";
    BukuNovel.pengarang[2]          = "Ahmad Tohari";
    BukuNovel.penerbit[2]           = "Grasindo";
    BukuNovel.tebal_halaman[2]      = 456;
    BukuNovel.harga_buku[2]         = 85000;

    //Mengisi data ke dalam variabel BukuNovel untuk buku 4
    BukuNovel.judul_buku[3]         = "Supernova: Ksatria, Puteri, dan Bintang Jatuh ";
    BukuNovel.pengarang[3]          = "Dee Lestari";
    BukuNovel.penerbit[3]           = "Bentang Pustaka";
    BukuNovel.tebal_halaman[3]      = 376;
    BukuNovel.harga_buku[3]         = 85000;

    //Mengisi data ke dalam variabel BukuNovel untuk buku 5
    BukuNovel.judul_buku[4]         = "Laskar Pelangi";
    BukuNovel.pengarang[4]          = "Andrea Hirata";
    BukuNovel.penerbit[4]           = "Bentang Pustaka";
    BukuNovel.tebal_halaman[4]      = 352;
    BukuNovel.harga_buku[4]         = 65000;

    for (int i=0; i<5; i++){
        cout << "\n\tBuku Novel ke-" << i+1 << endl;
        cout << "\tJudul Buku          : "      << BukuNovel.judul_buku[i] << endl;
        cout << "\tPengarang           : "      << BukuNovel.pengarang[i] << endl;
        cout << "\tPenerbit            : "      << BukuNovel.penerbit[i] << endl;
        cout << "\tTebal Halaman       : "      << BukuNovel.tebal_halaman[i] << endl;
        cout << "\tHarga Buku          : Rp "   << BukuNovel.harga_buku[i] << endl;
    }
    return 0;
}
```

### Penjelasan Program
Kode program di atas merupakan program sederhana yang menghitung jumlah huruf vokal dalam sebuah kalimat dan mengembalikan indeks dari huruf vokal tersebut. Berikut ini penjelasan mengenai fungsi-fungsi dan bagian penting dari program yang digunakan yaitu:

1. **Fungsi `hitungHurufVokal`**: Fungsi ini digunakan untuk menghitung jumlah huruf vokal dalam sebuah kalimat dan mengembalikan vektor yang berisi indeks dari huruf vokal tersebut. Fungsi menerima parameter `kalimat` yang merupakan kalimat yang akan dihitung. Fungsi ini menggunakan string `vokal` yang berisi huruf vokal baik huruf kecil maupun huruf besar. Selanjutnya, fungsi melakukan iterasi melalui setiap karakter dalam kalimat dan memeriksa apakah karakter tersebut termasuk dalam huruf vokal. Jika ya, maka jumlah huruf vokal akan ditambahkan dan indeks karakter tersebut akan dimasukkan ke dalam vektor `indeksVokal`. Fungsi ini juga mencetak indeks huruf vokal yang digunakan dalam kalimat.

2. **Fungsi `main`**: Pada fungsi `main`, program meminta pengguna untuk memasukkan sebuah kalimat. Selanjutnya, program memanggil fungsi `hitungHurufVokal` untuk menghitung jumlah huruf vokal dalam kalimat dan mendapatkan indeks huruf vokal. Hasil perhitungan jumlah huruf vokal kemudian ditampilkan ke layar.

3. **Penggunaan `std::vector`**: Vektor digunakan untuk menyimpan indeks dari huruf vokal yang ditemukan dalam kalimat. Vektor memungkinkan penyimpanan dinamis dari indeks-indeks tersebut.

4. **Penggunaan `std::string::npos`**: Fungsi `std::string::npos` digunakan untuk mengecek apakah suatu karakter tidak ditemukan dalam string `vokal`. Jika karakter tidak ditemukan, maka nilai yang dikembalikan adalah `std::string::npos`.

5. **Output**: Program akan mencetak pesan untuk meminta pengguna memasukkan kalimat. Setelah itu, program akan menampilkan indeks dari huruf vokal yang digunakan dalam kalimat beserta jumlah huruf vokal yang ditemukan.

Dengan menggunakan program ini, pengguna dapat dengan mudah menghitung jumlah huruf vokal dalam sebuah kalimat dan melihat indeks dari huruf vokal tersebut. Program ini juga dapat dijadikan contoh penggunaan vektor untuk menyimpan indeks-indeks yang ditemukan selama proses perhitungan.

### Output
<img width="777" alt="Screenshot 2024-04-25 231037" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/b41b0c71-2f4e-407f-b4c7-ac3ab7359885">

<img width="777" alt="Screenshot 2024-04-25 231037" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/b41b0c71-2f4e-407f-b4c7-ac3ab7359885">

## Kesimpulan

Struct adalah sebuah struktur data yang memungkinkan terjadinya pembentukan tipe data baru dengan menggabungkan antara berbagai macam variabel dengan tipe data yang berbeda. Struct digunakan untuk membentuk tipe data dengan anggota tertentu, yang dilakukan dengan menentukan anggota-anggotanya. Di dalam struct terdapat variabel sebagai anggota, setiap anggota struct memiliki nama dan data yang unik. Variabel memiliki dua jenis, yaitu variabel lokal yang dibuat didalam fungsi dan dapat dipanggil oleh fungsi yang mendeklarasikannya, dan variabel global yang dibuat diluar fungsi dan dapat dipanggil oleh semua fungsi yang ada dalam program tersebut.  Selain itu, struct juga mempermudah pembuatan program dengan membuat kode lebih terstruktur dan mudah dibaca. Dengan fleksibilitasnya, struct adalah salah satu fitur yang paling sering digunakan dalam C++ dan bahasa pemrograman lainnya, membantu pengembang dalam membangun program yang lebih efisien dan terstruktur.

## Referensi
[1] T. Triase, "Struktur Data: Diktat Edisi Revisi," 2020.

[2] R. M. S. Anita Sindar, "Struktur Data Dan Algoritma Dengan C++ (Vol. 1)," CV. AA. RIZKY, 2019.

[3] S. Buku Ajar Data, "DATA," 3.

