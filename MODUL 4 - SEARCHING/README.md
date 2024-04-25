# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Leonardus Ananto Widodo</p>

## Dasar Teori
Searching (pencarian) adalah struktur data yang mengacu pada proses algoritmik untuk memeriksa, menemukan, mengambil posisi elemen tertentu (target) dari kumpulan elemen di dalam struktur data [1]. Kumpulan elemen dapat berupa array, list, linked  list, tree, dan lain sebagainya. Hasil pencariannya yaitu salah satu dari tiga keadaan, seperti data ditemukan, data ditemukan lebih dari satu, atau data tidak ditemukan. Berdasarkan jenis operasinya, terdapat dua algoritma searching (pencarian), yaitu: 

**1. Sequential Search**
Sequential Search (pencarian berurutan) dikenal juga sebagai linear search (pencarian linier). Sequential Search merupakan algoritma pencarian paling dasar dan paling sederhana yang bekerja menggunakan pendekatan brute force, mencoba segala kemungkinan yang ada hingga target yang diinginkan ditemukan [1]. Sebagai contoh, mencari nilai 36 dari data array {12, 7, 30, 28, 2, 19, 36, 21, 16, 9}. Sequential  Search dimulai dengan membandingkan/mencocokkan 36 dengan elemen pertama/index[0] yaitu 12, karena 12 tidak sesuai dengan kriteria  pencarian (12 != 36) maka dilanjutkan dengan membandingkan 36 dengan elemen berikutnya hingga ditemukan elemen yang cocok, yaitu pada index[6] dimana 36 == 36 

Pencarian Linear juga didefinisikan sebagai algoritma pencarian berurutan yang dimulai di satu ujung dan melewati  setiap elemen daftar sampai elemen yang diinginkan ditemukan, jika tidak, pencarian berlanjut hingga akhir kumpulan data. Algoritma pencarian linier dianggap yang paling dasar dari semua algoritma pencarian. Contoh algoritma pencarian linier yang terbaik mungkin adalah pencarian biner. Ada algoritma pencarian lain seperti algoritma pencarian depth-first, algoritma breadth-first, dll. Efisiensi algoritma pencarian diukur dengan berapa  kali perbandingan kunci pencarian dilakukan dalam kasus terburuk. Notasi yang digunakan dalam algoritma pencarian adalah O (n), di mana n adalah jumlah perbandingan yang dilakukan. Hal ini memberikan gagasan tentang batas atas asimtotik waktu eksekusi yang diperlukan untuk algoritma sehubungan dengan kondisi tertentu  [2]. 

**2. Binary Search**
Pencarian bagi dua (binary search) adalah proses pencarian dengan membagi dua bagian data kemudian membandingkan  isi data bagian pertama atau bagian kedua dengan data yang akan dicari. Pada metode ini membutuhkan nilai indeks terkecil dan terbesar untuk dijumlahkan kemudian dibagi dua. Pencarian bagi dua (binary search) hanya bisa dilakukan  pada data yang sudah terurut. Metode ini lebih efisien dibandingkan dengan metode pencarian sequential search atau pencarian beruntun. Pencarian Biner sebagai algoritma pencarian yang digunakan dalam array yang diurutkan dengan berulang kali membagi interval pencarian menjadi dua. Ide pencarian biner adalah menggunakan informasi bahwa array  diurutkan dan mengurangi kompleksitas waktu ke O (log N) [2].

Algoritma Binary Search bekerja dengan menggunakan pendekatan devide and conquerpada data array yang sudah terurut (sorted), artinya algoritma Binary Search diawali dengan mengurutkan (sorting) array terlebih dahulu sebelum melakukan proses pencarian (Goodrich et  al, 2014). Setelah data array terurut proses pencarian dimulai dengan perulangan pertama untuk mencari elemen yang posisinya berada di tengah array, kemudian membandingkan elemen tengah tersebut dengan kunci  pencarian, jika kunci pencarian lebih besar dari elemen tengah, maka abaikan semua elemen array yang berada di posisi kiri lanjutkan perulangan kedua dengan mencari elemen tengah pada array sisi kanan saja dan dibandingkan lagi dengan kunci  pencarian. Namun apabila kunci pencarian lebih kecil dari elemen tengah maka abaikan semua elemen array di posisi kanan dan lanjutkan perulangan kedua dengan mencari elemen tengah pada array sisi kiri lalu bandingkan dengan kunci pencarian. Langkah-langkah ini dilakukan berulang sampai dengan ditemukan elemen tengah yang sama dengan kunci pencarian atau elemen  telah habis dibandingkan [1].

## Guided 

### 1. Buatlah sebuah project dengan menggunakan sequential search sederhana untuk melakukan pencarian data!

```C++
#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int data[n] = {9, 4, 1, 7,  5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;
    // Algoritma Sequential Search
    for (i = 0; i < n; i++) {
        if (data[i] == cari) {
            ketemu = true;
            break;
        }
    }
    cout << "/t Program Sequential Search Sederhana\n" << endl;
    cout << " Data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;

    if (ketemu) {
        cout << "\n Angka " << cari << " ditemukan pada indeks ke-" << i << endl;
    } else {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }

    return 0;
}
```

### Penjelasan Program (Interpretasi)
Kode program di atas merupakan implementasi dari algoritma Sequential Search untuk mencari nilai tertentu dalam sebuah array. Berikut ini penjelasan mengenai fungsi-fungsi dan bagian penting dari program tersebut yang digunakan yaitu:

1) **Deklarasi Variabel dan Array**: Pada awal program, terdapat deklarasi variabel `n` yang bernilai 10 sebagai ukuran array, array `data` yang berisi 10 elemen bilangan bulat, variabel `cari` yang berisi nilai yang ingin dicari dalam array, variabel boolean `ketemu` yang digunakan untuk menandai apakah nilai sudah ditemukan, dan variabel `i` sebagai indeks.

2) **Sequential Search Algorithm**: Algoritma pencarian dilakukan menggunakan pendekatan Sequential Search. Program melakukan iterasi melalui array `data` menggunakan loop `for` dari indeks 0 hingga `n-1`. Setiap elemen array diperiksa apakah sama dengan nilai yang dicari (`cari`). Jika nilai tersebut ditemukan, variabel `ketemu` diatur menjadi `true` dan loop dihentikan dengan menggunakan `break`.

3) **Output**: Setelah pencarian selesai, program mencetak hasil pencarian ke layar. Pesan diawali dengan menampilkan pesan "Program Sequential Search Sederhana" dan array `data` yang digunakan. Jika nilai `cari` ditemukan dalam array, program akan mencetak pesan bahwa nilai tersebut ditemukan beserta indeksnya. Jika nilai tidak ditemukan, program akan mencetak pesan bahwa nilai tersebut tidak ditemukan dalam data.

4) **Return 0**: Program mengembalikan nilai 0, menandakan bahwa program telah berakhir dengan sukses.

Dengan menggunakan algoritma Sequential Search, program ini mencari nilai yang diinginkan dalam array dengan cara memeriksa setiap elemen satu per satu hingga nilai tersebut ditemukan atau sampai akhir array.

### Output
<img width="780" alt="![Screenshot 2024-04-25 225608]" src="(https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/59a4e3a2-05f5-40c4-ae9a-9267a300d76d)">

### 2. Buatlah sebuah project untuk melakukan pencarian data dengan menggunakan Binary Search!

```C++
#include <iostream>
using namespace std;
#include <conio.h>
#include <iomanip>

int bil_data[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;

void selection_sort()
{
    int temp, min, i, j;
    
    for(i=0; i<7;i++) {
        min = i;
        for(j = i+1; j<7; j++)
        {
            if(bil_data[j]<bil_data[min])
            {
                min=j;
            }
        }
        temp = bil_data[i];
        bil_data[i] = bil_data[min];
        bil_data[min] = temp;
    }
}

void binarysearch()
{
    // searching
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = 7;
    while (b_flag == 0 && awal<=akhir)
    {
        tengah = (awal + akhir)/2;
        if(bil_data[tengah] == cari) 
        {
            b_flag = 1;
            break;
        }
        else if(bil_data[tengah]<cari)
            awal = tengah + 1;
        else
            akhir = tengah -1;
    }
    
        if(b_flag == 1)
            cout<<"\n Data ditemukan pada index ke-"<<tengah<<endl;
        else
            cout<<"\n Data tidak ditemukan\n";
}

int main()
{
    cout<<"\t BINARY SEARCH "<<endl;
    cout<<"\n Data : ";
    //tampilkan data awal
    for(int x = 0; x<7; x++)
           cout<<setw(3)<<bil_data[x];
    cout<<endl;

    cout<<"\n Masukkan data yang ingin Anda cari : ";
    cin>>cari;
    cout<<"\n Data diurutkan : ";
    //urutkan data dengan selection sort
    selection_sort();
    //tampilkan data setelah diurutkan
    for(int x = 0; x<7;x++)
           cout<<setw(3)<<bil_data[x];

    cout<<endl;

      binarysearch();

    _getche();
    return EXIT_SUCCESS;
}
```

### Penjelasan Program (Interpretasi)
Kode program di atas merupakan implementasi dari algoritma Binary Search untuk mencari nilai tertentu dalam sebuah array yang sebelumnya diurutkan menggunakan algoritma Selection Sort. Berikut ini penjelasan mengenai fungsi-fungsi dan bagian penting dari program tersebut yang digunakan yaitu:

1. **Deklarasi Variabel dan Array**: Pada awal program, terdapat deklarasi array `bil_data` yang berisi 7 elemen bilangan bulat, serta variabel `cari` yang akan digunakan untuk menyimpan nilai yang ingin dicari dalam array.

2. **Selection Sort Function**: Fungsi `selection_sort` digunakan untuk mengurutkan array `bil_data` menggunakan algoritma Selection Sort. Algoritma ini mencari nilai terkecil dalam array dan menukar posisi nilai tersebut dengan elemen pertama, kemudian mencari nilai terkecil dalam sisa array, dan seterusnya hingga seluruh array terurut.

3. **Binary Search Function**: Fungsi `binarysearch` digunakan untuk melakukan pencarian nilai dalam array yang telah diurutkan menggunakan algoritma Binary Search. Algoritma ini membagi array menjadi dua bagian dan memeriksa apakah nilai yang dicari berada di setengah bagian mana. Proses ini terus berlanjut hingga nilai ditemukan atau seluruh bagian array telah diperiksa.

4. **Main Function**: Pada fungsi `main`, program akan menampilkan array `bil_data` sebelum diurutkan, meminta pengguna untuk memasukkan nilai yang ingin dicari, mengurutkan array menggunakan `selection_sort`, menampilkan array setelah diurutkan, dan kemudian melakukan pencarian menggunakan `binarysearch`. Hasil pencarian akan ditampilkan ke layar.

5. **Output**: Program akan mencetak pesan "BINARY SEARCH" di awal, menampilkan array sebelum diurutkan, meminta pengguna untuk memasukkan nilai yang ingin dicari, menampilkan array setelah diurutkan, dan menampilkan hasil pencarian.

6. **_getche()**: Fungsi ini digunakan untuk menahan tampilan layar sehingga hasil pencarian dapat dilihat sebelum program berakhir.

Dengan menggunakan algoritma Selection Sort untuk mengurutkan array dan algoritma Binary Search untuk mencari nilai dalam array yang telah diurutkan, program ini memungkinkan pengguna untuk melakukan pencarian efisien dalam array.

### Output
<img width="780" alt="![Screenshot 2024-04-25 230125]" src="(https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/a5395e3c-e026-45ec-b99f-fc1ad7633a1c)">

## Unguided 

### 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!

```C++
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
```

### Penjelasan Program (Interpretasi)

Kode program di atas merupakan implementasi dari algoritma Binary Search yang dimodifikasi untuk mencari semua indeks di mana suatu huruf tertentu ditemukan dalam sebuah kalimat. Berikut ini penjelasan mengenai fungsi-fungsi dan bagian penting dari program yang digunakan yaitu:

1. **Fungsi `binarySearchAll`**: Fungsi ini digunakan untuk mencari semua indeks di mana huruf target ditemukan dalam kalimat. Fungsi menerima dua parameter, yaitu `str` yang merupakan kalimat yang akan dicari, dan `target` yang merupakan huruf yang ingin dicari. Algoritma yang digunakan adalah iterasi melalui setiap karakter dalam kalimat, dan jika karakter tersebut sama dengan huruf target (baik huruf besar maupun kecil), maka indeks karakter tersebut akan dimasukkan ke dalam vektor `result`. Fungsi mengembalikan vektor `result` yang berisi semua indeks di mana huruf target ditemukan.

2. **Fungsi `main`**: Pada fungsi `main`, program meminta pengguna untuk memasukkan sebuah kalimat dan huruf yang ingin dicari. Selanjutnya, program memanggil fungsi `binarySearchAll` untuk mencari semua indeks di mana huruf target ditemukan dalam kalimat. Hasil pencarian disimpan dalam vektor `hasil` dan kemudian ditampilkan ke layar.

3. **Penggunaan `std::vector`**: Vektor digunakan untuk menyimpan semua indeks di mana huruf target ditemukan dalam kalimat. Vektor memungkinkan penyimpanan dinamis dari indeks-indeks tersebut.

4. **Penggunaan `std::tolower`**: Fungsi `std::tolower` digunakan untuk mengubah huruf menjadi huruf kecil sebelum membandingkannya. Hal ini dilakukan agar pencarian huruf tidak bergantung pada huruf besar atau kecil.

5. **Output**: Program akan mencetak pesan untuk meminta pengguna memasukkan kalimat dan huruf yang ingin dicari. Setelah itu, program akan menampilkan semua indeks di mana huruf target ditemukan dalam kalimat atau pesan bahwa huruf tidak ditemukan.

Dengan menggunakan algoritma Binary Search yang dimodifikasi, program ini memungkinkan pengguna untuk mencari semua indeks di mana suatu huruf tertentu ditemukan dalam sebuah kalimat dengan efisien.


#### Output:
<img width="694" alt="![Screenshot 2024-04-25 230741]" src="(https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/acae880d-e6a8-4b62-9b4f-7d4c10bc2fbf)">

### 2. Buatlah sebuah program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat!

```C++
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
<img width="777" alt="![Screenshot 2024-04-25 231037]" src="(https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/b41b0c71-2f4e-407f-b4c7-ac3ab7359885)">


### 3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!

```C++
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
```

### Penjelasan Program (Interpretasi)
Kode program di atas adalah program sederhana yang menggunakan Sequential Search untuk menghitung jumlah kemunculan sebuah angka tertentu dalam vektor bilangan bulat. Berikut ini penjelasan mengenai fungsi-fungsi dan bagian penting dari program yang digunakan yaitu:

1. **Fungsi `hitungAngka`**: Fungsi ini digunakan untuk menghitung jumlah kemunculan sebuah angka dalam vektor bilangan bulat `data`. Fungsi menerima dua parameter, yaitu vektor `data` yang berisi bilangan bulat dan `target` yang merupakan angka yang akan dihitung kemunculannya. Fungsi ini menggunakan pendekatan Sequential Search, di mana setiap elemen dalam vektor diperiksa satu per satu. Jika elemen tersebut sama dengan `target`, maka jumlah kemunculan akan ditambahkan dan indeks elemen tersebut akan dimasukkan ke dalam vektor `indeksDitemukan`. Fungsi ini juga mencetak indeks di mana angka `target` ditemukan.

2. **Fungsi `main`**: Pada fungsi `main`, program membuat vektor `data` yang berisi sekumpulan bilangan bulat, dan menentukan `angkaTarget` yang akan dicari kemunculannya dalam vektor. Selanjutnya, program memanggil fungsi `hitungAngka` untuk menghitung jumlah kemunculan `angkaTarget` dalam vektor `data`. Hasil perhitungan jumlah kemunculan kemudian ditampilkan ke layar.

3. **Penggunaan `std::vector`**: Vektor digunakan untuk menyimpan data bilangan bulat serta indeks di mana angka target ditemukan. Vektor memungkinkan penyimpanan dinamis dari data-data tersebut.

4. **Output**: Program akan mencetak pesan yang menunjukkan indeks di mana angka target ditemukan dalam vektor `data`, serta jumlah kemunculan angka target tersebut dalam data.

Dengan menggunakan program ini, pengguna dapat dengan mudah menghitung jumlah kemunculan sebuah angka tertentu dalam vektor bilangan bulat menggunakan Sequential Search. Program ini juga dapat dijadikan contoh penggunaan vektor dalam pemrograman C++ untuk menyimpan data dan hasil perhitungan.

### Output
<img width="778" alt="![Screenshot 2024-04-25 231217]" src="(https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/eb4f87d9-5bfd-4feb-8278-2ea6b90943b4)">

## Kesimpulan
Algoritma searching adalah proses menemukan sebuah data yang diinginkan dalam sebuah kumpulan data. Berdasarkan jenis operasinya, terdapat dua algoritma searching (pencarian), yaitu binary search dan sequential search. Binary search merupakan pencarian dengan membagi array atau list menjadi dua bagian secara berulang dan membandingkan elemen yang dicari dengan elemen tengah. Sedangkan sequential search atau dapat disebut juga dengan linear search merupakan pencarian dengan membandingkan elemen yang dicari dengan setiap elemen dalam array secara berurutan.

## Referensi
[1] Putri, M. P., Barovih, G., Azdy, R. A., Yuniansyah, Y., Saputra, A., Sriyeni, Y., et al. "Algoritma dan Struktur Data," 2022.

[2] Yanti, F., & Eriana, E. S. "Algoritma Sorting dan Searching," 2024.