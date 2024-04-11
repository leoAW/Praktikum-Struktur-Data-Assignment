# <h1 align="center">Laporan Praktikum Modul Tipe Sorting</h1>
<p align="center">Leonardus Ananto Widodo</p>

## Dasar Teori

	Pengurutan data atau “sorting” adalah proses menyusun kembali data yang sebelumnya telah tersusun secara acak 
hingga tersusun secara teratur menurut aturan tertentu. Data ini biasanya bertipe numerik dan karakter.Pengurutan data 
memiliki banyak  fungsi  dalam  sistem.  Data yang  diurutkan  mudah  dicari dan mudah diperiksa  jika  terjadi  kesalahan  
mudah diperbaiki.  Data  yang  diurutkan  dengan  baik  juga  mudah  dihapus  jika terkadang  data  tidak  lagi diperlukan. 
Selain  itu, dengan memilah data, kita akan lebih mudah memasukkan data atau lakukan penggabungan. Pengurutan 
data merupakan bagian integral dari analisis data.Setiap algoritma dalam perancangan perangkat lunak pasti membutuhkan 
data, baik data analog maupun data digital. Dimana datanya kebanyakan angka bahkan huruf, maka akan dikelola untuk 
menjadikannya hasil yang diinginkan [1].

	Selain itu, pengurutan (sorting) adalah suatu proses di mana elemen-elemen dalam sebuah array atau list diatur 
ulang dengan tujuan untuk menyusun data dalam urutan tertentu. Urutan ini dapat berupa urutan menaik (ascending) yaitu 
elemen-elemen disusun dari nilai terkecil ke nilai terbesar, atau urutan menurun (descending) yaitu elemen-elemen disusun 
dari nilai terbesar ke nilai terkecil. Tujuannya utama dari pengurutan adalah untuk mempermudah pencarian data dan 
menganalisis data dengan lebih efisien dan dapat membantu meningkatkan kinerja aplikasi komputasi. Pengurutan merupakan 
salah satu aspek dasar dari pemrograman dan komputasi yang sering kali diabaikan, namun memiliki peran yang sangat penting 
dalam berbagai aplikasi komputasi [2].  

Berikut ini ada 3 metode sorting yang digunakan pada praktikum algoritma dan strukdur data yaitu:

**1. Bubble Sort**

	Bubble Sort  adalah  metode  pengurutan  data  dengan  cara  menukar  data  pada  data  pertama  dan  data  pada 
data  pertama tetap  duduk  di  sebelahnya  sampai Anda  yakin  tidak  akan  ada  lagi  perubahan  atau  pertukaran  dalam 
iterasi  tertentu. Algoritma menggunakan perbandingan dalam operasi antar elemen. Algoritma bubble sort adalah algoritma 
pengurutan yang  paling  dasar,  dan  metode  pengurutan  juga  yang  paling  sederhana  daripada  algoritma  pengurutan  
lainnya.Proses pencarian solusi dilakukan secara brute force, direct to the point, yaitu. Bandingkan elemen dalam tabel. 
Algoritma bubble sort adalah proses penyortiran yang secara bertahap memindahkan data ke lokasi yang benar. Karena itulah 
algoritma ini disebut  “bubble”  atau  jika  diterjemahkan  ke  dalam  bahasa  Indonesia  Gelembung. Fungsi  dari  
algoritma  ini  adalah mengurutkan  data  dari  kecil  ke  besar  (ascending)  atau  sebaliknya  (menurun) [1].  Berikut  
syarat  dan  langkah yang  harus diperhatikan sebelum kita memulai proses produksi.

Metode pengurutan gelembung

• Jumlah iterasi sama dengan jumlah angka dikurangi 1.

• Pada setiap iterasi, jumlah swap sama dengan jumlah digit.

• Pada algoritma bubble sort, meskipun deretan angka telah diurutkan, proses pengurutan akan tetap berjalan.

• Tidak ada perbedaan metode yang signifikan antara teknik algoritma bubble sort ascending dan descending.

	Untuk mempelajari algoritma bubble sort, kita hanya perlu memahami metode yang digunakan untuk mengurutkan 
data.Logikanya  sederhana,  algoritma  menggunakan  perbandingan  dalam  operasi  antar  elemen. terdapat pro  dan  
kontra algoritma pengurutan gelembung. Kedua hal ini menjadi pertimbangan programmer saat menulis program.

	Berikut adalah beberapa keuntungan yang dimiliki algoritma Bubble Sort
 
• Algoritma ini adalah metode paling sederhana untuk mengurutkan data.

• Bubble Sort adalah algoritma yang mudah dipahami.

• Sedangkan kekurangan dari algoritma Bubble Sort adalah sebagai berikut.

• Tingkat efisiensinya yang kurang. Bubble Sort ini merupakan metode pengurutan yang tidak efisien, khususnya ketika 	 
  menangani  data  yang  jumlahnya  besar.  Hal  ini  karena  ketika  mengurutkan  data  yang  sangat  besar  akan sangat 
  lambat prosesnya.
  
• Jumlah pengulangan yang dilakukan oleh algoritma ini akan tetap sama jumlahnya meskipun data yang diurutkan sudah cukup 
  terurut.

Dengan beberapa faktor di atas, kita dapat menyesuaikan saat kapan sebaiknya algoritma Bubble Sort ini digunakan [1].

**2. Insertion Sort**

	Algoritma insertion sort adalah sebuah algoritma sederhana yang cukup efisien untuk mengurutkan sebuah list yang 
hampir terurut. Algorima ini juga bisa digunakan sebagai bagian dari algoritma yang lebih canggih. Cara kerja algoritma ini 
adalah dengan mengambil elemen list satu-per-satu dan memasukkannya di posisi yang benar seperti namanya. Pada array, list 
yang baru dan elemen sisanya dapat berbagi tempat di array, meskipun cukup rumit. Untuk menghemat memori, implementasinya 
menggunakan pengurutan di tempat yang membandingkan elemen saat itu dengan elemen sebelumnya yang sudah diurut, lalu 
menukarnya terus sampai posisinya tepat. Hal ini terus dilakukan sampai tidak ada elemen tersisa diinput. Seperti sudah 
dibahas di bagian pendahuluan, salah satu implementasinya pada kehidupan sehari-hari adalah saat kita mengurutkan kartu 
remi. Kita ambil kartu satu per satu lalu membandingkan dengan kartu sebelumnya untuk mencari posisi yang tepat [4].

	Variasi pada umumnya yang dilakukan terhadap array pada insertion sort adalah sebagai berikut:
 
• Elemen awal di masukkan sembarang, lalu elemen berikutnya dimasukkan di bagian paling akhir.

• Elemen tersebut dibandingkan dengan elemen ke (x-1). Bila belum terurut posisi elemen sebelumnya digeser sekali ke kanan 
  terus sampai elemen yang sedang diproses menemukan posisi yang tepat atau sampai elemen pertama.
  
• Setiap pergeseran akan mengganti nilai elemen berikutnya, namun hal ini tidak menjadi persoalan sebab elemen berikutnya 
  sudah diproses lebih dahulu.

**3. Selection Sort**
	
	Selection Sort adalah suatu metode pengurutan yang membandingkan elemen yang sekarang dengan elemen berikutnya sampai  ke  elemen  yang  terakhir.  Jika  ditemukan  elemen  lain  yang  lebih  kecil  dari  elemen  sekarang  maka  dicatat posisinya dan  langsung  ditukar.  Metode  selection sort  adalah  melakukan  pemilihan  dari  suatu  nilai  yang  terkecil  dan kemudian menukarnya dengan elemen paling awal, lalu membandingkan dengan elemen yang sekarang dengan elemen berikutnya sampai dengan elemen terakhir, perbandingan dilakukan terus sampai tidak ada lagi pertukaran data [3]. Selection Sort diakui karena kesederhanaan algoritmanya dan performanya lebih bagus daripada algoritma lain yang lebih rumit dalam situasi tertentu [4].

	Cara kerja algoritma selection sort yaitu:
 
• Mencari nilai minimum (jika ascending) atau maksimum (jika descending) dalam sebuah list

• Menukarkan nilai ini dengan elemen pertama list

• Mengulangi langkah di atas untuk sisa list dengan dimulai pada posisi kedua.

	Secara efisien kita membagi list menjadi dua bagian yaitu bagian yang sudah diurutkan, yang didapat dengan 
membangun dari kiri ke kanan dan dilakukan pada saat awal, dan bagian list yang elemennya akan diurutkan [4].

## Guided 

### 1. Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort

```C++
#include <iostream>
using namespace std;

void bubble_sort(double arr [], int length){
    bool not_sorted = true;
    int j=0;
    double tmp;

       while (not_sorted) {
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++) {
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }// end of if 
        }// end of for loop
    }//end of while loop
}// end of bubble_sort

void print_array(double a[], int length){

    for (int i = 0; i < length; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {

    int length = 5;
    double a [] = {22.1, 15.3, 8.2, 33.21, 99.99};

    cout << "Urutan bilangan sebelum sorting: " << endl;
    print_array(a, length);

    bubble_sort(a, length);

    cout << "\nUrutan bilangan setelah sorting: " << endl;
    print_array(a, length);
}
```
TDalam program tersebut, terdapat implementasi algoritma Bubble Sort untuk mengurutkan array karakter dari terkecil ke terbesar (ascending). Berikut ini penjelasan mengenai setiap fungsi dari program tersebut bekerja  yaitu:

1. Fungsi `bubble_sort`:
   - Fungsi ini bertanggung jawab untuk mengurutkan array menggunakan algoritma Bubble Sort.
   - Parameter:
     - `arr[]`: Merupakan array yang akan diurutkan.
     - `length`: Panjang array yang akan diurutkan.
   - Algoritma:
     - Fungsi ini menggunakan pendekatan iteratif untuk melakukan pengurutan.
     - Pertama-tama, variabel `not_sorted` diinisialisasi sebagai `true` untuk menandakan bahwa array belum terurut sepenuhnya.
     - Dilakukan iterasi menggunakan while loop selama `not_sorted` masih bernilai `true`.
     - Di dalam while loop, variabel `not_sorted` diatur sebagai `false` di awal setiap iterasi, dan variabel `j` digunakan untuk membatasi jumlah iterasi yang dilakukan.
     - Dilakukan iterasi menggunakan for loop untuk membandingkan setiap elemen dengan elemen berikutnya.
     - Jika elemen saat ini lebih besar dari elemen berikutnya, maka keduanya ditukar posisinya.
     - Jika ada pertukaran yang dilakukan, variabel `not_sorted` diatur sebagai `true` untuk menandakan bahwa array masih belum terurut.
   - Setelah tidak ada lagi pertukaran yang dilakukan pada suatu iterasi, algoritma dianggap selesai dan array dianggap sudah terurut.

2. Fungsi `print_array`:
   - Fungsi ini digunakan untuk mencetak isi dari array ke layar.
   - Parameter:
     - `a[]`: Array yang akan dicetak.
     - `length`: Panjang array yang akan dicetak.
   - Algoritma:
     - Dilakukan iterasi menggunakan for loop untuk mencetak setiap elemen array.
     - Setiap elemen array dicetak ke layar diikuti dengan tabulasi.
     - Setelah semua elemen dicetak, dilakukan pemindahan baris ke baris baru.

3. Fungsi `main`:
   - Fungsi utama yang akan dieksekusi saat program dijalankan.
   - Algoritma:
     - Membuat array `a` yang berisi bilangan desimal.
     - Mencetak array sebelum proses pengurutan.
     - Memanggil fungsi `bubble_sort` untuk mengurutkan array.
     - Mencetak array setelah proses pengurutan.

Dengan menggunakan algoritma Bubble Sort dan fungsi-fungsi yang telah dijelaskan di atas, program dapat mengurutkan array bilangan desimal dari nilai terkecil ke nilai terbesar dan menampilkan hasilnya ke layar.

### Output

<img width="780" alt="Screenshot 2024-03-15 090823" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/4c6aa061-9bed-4770-9044-c19ae9689ea6">

### 2. Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort

```C++
#include <iostream>
using namespace std;

void insertion_sort(char arr[], int length){
    int i, j;
    char tmp;

    for ( i = 1; i < length; i++) {
        j = i;

       while (j > 0 && arr[j - 1] < arr[j]) {
        tmp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = tmp;
        j--;
       }// end of while loop
    }// end of for loop
}

void print_array(char a[], int length) {

    for(int i = 0; i < length; i++) {
        cout << a[i] << "\t";;
    }
    cout << endl;
}

int main() {
    int length = 6;
    char a[length] = {'c', 'f', 'a', 'z', 'd', 'p'};
    
    cout << "Urutan karakter sebelum sorting: " << endl;
    print_array(a, length);
    
    insertion_sort(a, length);
    
    cout << "\nUrutan karakter setelah sorting: " << endl;
    print_array(a, length);
}
```

Dalam program tersebut, terdapat implementasi algoritma Insertion Sort untuk mengurutkan array karakter dari terbesar ke terkecil (descending). Berikut ini penjelasan mengenai setiap fungsi dari program tersebut bekerja  yaitu:

1. Fungsi `insertion_sort`:
   - Fungsi ini bertanggung jawab untuk mengurutkan array karakter menggunakan algoritma Insertion Sort.
   - Parameter:
     - `arr[]`: Array karakter yang akan diurutkan.
     - `length`: Panjang array karakter yang akan diurutkan.
   - Algoritma:
     - Dilakukan iterasi menggunakan for loop yang dimulai dari indeks 1 hingga panjang array.
     - Pada setiap iterasi, nilai indeks saat ini disimpan dalam variabel `j`.
     - Dilakukan while loop untuk membandingkan elemen dengan indeks sebelumnya hingga elemen tersebut sudah berada pada posisi yang tepat.
     - Jika elemen sebelumnya lebih kecil dari elemen saat ini, maka dilakukan pertukaran posisi antara keduanya.
     - Iterasi berlanjut hingga elemen saat ini sudah berada pada posisi yang benar dalam array.

2. Fungsi `print_array`:
   - Fungsi ini digunakan untuk mencetak isi dari array karakter ke layar.
   - Parameter:
     - `a[]`: Array karakter yang akan dicetak.
     - `length`: Panjang array karakter yang akan dicetak.
   - Algoritma:
     - Dilakukan iterasi menggunakan for loop untuk mencetak setiap elemen array karakter.
     - Setiap elemen array karakter dicetak ke layar diikuti dengan tabulasi.
     - Setelah semua elemen dicetak, dilakukan pemindahan baris ke baris baru.

3. Fungsi `main`:
   - Fungsi utama yang akan dieksekusi saat program dijalankan.
   - Algoritma:
     - Membuat array `a` yang berisi karakter.
     - Mencetak array karakter sebelum proses pengurutan.
     - Memanggil fungsi `insertion_sort` untuk mengurutkan array karakter.
     - Mencetak array karakter setelah proses pengurutan.

Dengan menggunakan algoritma Insertion Sort dan fungsi-fungsi yang telah dijelaskan di atas, program dapat mengurutkan array karakter dari besar ke kecil dan menampilkan hasilnya ke layar.

### Output
<img width="780" alt="Screenshot 2024-03-15 090823" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/4c6aa061-9bed-4770-9044-c19ae9689ea6">

## Unguided 

### 1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort!

```C++
#include <iostream>
using namespace std;

// Fungsi untuk melakukan Selection Sort
void selectionSort(double arr[], int n) {
    // Iterasi untuk memilih elemen terbesar
    for (int i = 0; i < n - 1; i++) {
        int max_idx = i;
        // Iterasi untuk mencari elemen terbesar
        for (int j = i + 1; j < n; j++) {
            // Membandingkan elemen dengan indeks max_idx
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        // Menukar posisi elemen terbesar dengan elemen pertama
        double temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    // Array IPS mahasiswa
    double ips[] = {3.8, 2.9, 3.3, 4.0, 2.4};
    int n = sizeof(ips) / sizeof(ips[0]);

    // Menampilkan IPS sebelum diurutkan
    cout << "IPS sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << ips[i] << " ";
    }

    // Memanggil fungsi selectionSort untuk mengurutkan IPS
    selectionSort(ips, n);

    // Menampilkan IPS setelah diurutkan secara descending
    cout << "\nIPS setelah diurutkan secara descending: ";
    for (int i = 0; i < n; i++) {
        cout << ips[i] << " ";
    }

    return 0;
}
```

### Penjelasan Program (Interpretasi)
Dalam program tersebut, terdapat implementasi algoritma Selection Sort untuk mengurutkan array bilangan desimal secara descending. Berikut adalah penjelasan detail mengenai setiap fungsi dan bagaimana program tersebut bekerja:

1. Fungsi `selectionSort`:
   - Fungsi ini bertanggung jawab untuk mengurutkan array bilangan desimal menggunakan algoritma Selection Sort.
   - Parameter:
     - `arr[]`: Array bilangan desimal yang akan diurutkan.
     - `n`: Jumlah elemen dalam array `arr`.
   - Algoritma:
     - Dilakukan iterasi menggunakan for loop yang dimulai dari indeks 0 hingga `n-1`.
     - Pada setiap iterasi, elemen dengan indeks `i` dipilih sebagai elemen terbesar awal.
     - Dilakukan iterasi lainnya untuk mencari elemen terbesar setelah elemen awal.
     - Jika ditemukan elemen yang lebih besar, maka posisi elemen terbesar diupdate.
     - Setelah iterasi mencari elemen terbesar selesai, dilakukan pertukaran posisi elemen terbesar dengan elemen pertama.
     - Proses ini diulang untuk seluruh elemen array hingga array terurut secara descending.

2. Fungsi `main`:
   - Fungsi utama yang akan dieksekusi saat program dijalankan.
   - Algoritma:
     - Membuat array `ips` yang berisi nilai IPS mahasiswa.
     - Menghitung jumlah elemen dalam array `ips`.
     - Mencetak nilai IPS sebelum proses pengurutan.
     - Memanggil fungsi `selectionSort` untuk mengurutkan nilai IPS secara descending.
     - Mencetak nilai IPS setelah proses pengurutan.

Dengan menggunakan algoritma Selection Sort dan fungsi-fungsi yang telah dijelaskan di atas, program dapat mengurutkan array nilai IPS secara descending dan menampilkan hasilnya ke layar.

#### Output:
<img width="694" alt="![Screenshot 2024-03-29 073438](https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/7ff4709d-f86c-4903-8680-ea04495b633d)">

### 2.Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan namanama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort!

```C++
#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk melakukan Bubble Sort pada array of strings
void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Membandingkan dua string dan menukar posisi jika diperlukan
            if (arr[j] > arr[j + 1]) {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Array of strings berisi nama warga Pak RT
    string names[] = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};
    int n = sizeof(names) / sizeof(names[0]);

    // Menampilkan nama warga sebelum diurutkan
    cout << "Nama warga sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }

    // Memanggil fungsi bubbleSort untuk mengurutkan nama warga
    bubbleSort(names, n);

    // Menampilkan nama warga setelah diurutkan sesuai urutan alfabet
    cout << "\nNama warga setelah diurutkan sesuai urutan alfabet: ";
    for (int i = 0; i < n; i++) {
        cout << names[i] << " ";
    }

    return 0;
}
```

### Penjelasan Program

Dalam kodingan program tersebut, terdapat implementasi algoritma Bubble Sort untuk mengurutkan array of strings berisi nama warga Pak RT sesuai urutan alfabet. Berikut adalah penjelasan detail mengenai setiap fungsi dan bagaimana program tersebut bekerja:

1. Fungsi `bubbleSort`:
   - Fungsi ini bertanggung jawab untuk mengurutkan array of strings menggunakan algoritma Bubble Sort.
   - Parameter:
     - `arr[]`: Array of strings yang akan diurutkan.
     - `n`: Jumlah elemen dalam array `arr`.
   - Algoritma:
     - Dilakukan dua iterasi menggunakan nested for loop.
     - Iterasi pertama digunakan untuk mengakses setiap elemen array kecuali elemen terakhir.
     - Iterasi kedua digunakan untuk membandingkan dua string berturut-turut dan menukar posisi jika diperlukan.
     - Jika string pada indeks `j` lebih besar dari string pada indeks `j+1`, maka dilakukan pertukaran posisi.
     - Proses ini diulang hingga seluruh elemen array terurut sesuai urutan alfabet.

2. Fungsi `main`:
   - Fungsi utama yang akan dieksekusi saat program dijalankan.
   - Algoritma:
     - Membuat array `names` yang berisi nama warga Pak RT.
     - Menghitung jumlah elemen dalam array `names`.
     - Mencetak nama warga sebelum proses pengurutan.
     - Memanggil fungsi `bubbleSort` untuk mengurutkan nama warga sesuai urutan alfabet.
     - Mencetak nama warga setelah proses pengurutan.

Dengan menggunakan algoritma Bubble Sort dan fungsi-fungsi yang telah dijelaskan di atas, program dapat mengurutkan array of strings berisi nama warga Pak RT sesuai urutan alfabet dan menampilkan hasilnya ke layar.

### Output
<img width="777" alt="![Screenshot 2024-03-29 074457](https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/79011a6b-5605-47ff-806e-32a8898f11ef)">

<img width="777" alt="![Screenshot 2024-03-29 074513](https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/e88be074-573d-4c39-bf39-f532417db341)">

### 3. Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)!

<img width="778" alt="![Screenshot 2024-03-29 074828](https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/e9c76004-51b4-457e-93b9-96cfc08620a0)">

```C++
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah karakter (n): ";
    cin >> n;

    vector<char> characters(n);

    for (int i = 0; i < n; ++i) {
        cout << "Karakter ke-" << i + 1 << ": ";
        cin >> characters[i];
    }

    cout << "Urutan karakter sebelum sorting: " << endl;
    for (char character : characters) {
        cout << character << "\t";
    }
    cout << endl;

    // Sorting secara ascending
    sort(characters.begin(), characters.end());
    cout << "Urutan karakter setelah ascending sort: " << endl;
    for (char character : characters) {
        cout << character << "\t";
    }
    cout << endl;

    // Sorting secara descending
    sort(characters.rbegin(), characters.rend());
    cout << "Urutan karakter setelah descending sort: " << endl;
    for (char character : characters) {
        cout << character << "\t";
    }
    cout << endl;

    return 0;
}
```

### Penjelasan Program (Interpretasi)

Dalam kodingan program tersebut, terdapat implementasi penggunaan vector dan fungsi sort() dari library algorithm untuk mengurutkan karakter secara ascending dan descending. Berikut adalah penjelasan detail mengenai setiap bagian program:

1. Fungsi `main`:
   - Fungsi utama yang akan dieksekusi saat program dijalankan.
   - Algoritma:
     - Meminta pengguna untuk memasukkan jumlah karakter (n).
     - Membuat vector `characters` yang akan digunakan untuk menyimpan karakter-karakter yang dimasukkan oleh pengguna.
     - Menggunakan loop for untuk meminta pengguna memasukkan karakter sebanyak n kali.
     - Menampilkan urutan karakter sebelum proses pengurutan.
     - Menggunakan fungsi `sort` untuk mengurutkan karakter secara ascending dengan parameter `characters.begin()` dan `characters.end()`.
     - Menampilkan urutan karakter setelah proses pengurutan secara ascending.
     - Menggunakan fungsi `sort` untuk mengurutkan karakter secara descending dengan parameter `characters.rbegin()` dan `characters.rend()`.
     - Menampilkan urutan karakter setelah proses pengurutan secara descending.

Dengan menggunakan vector untuk menyimpan karakter-karakter yang dimasukkan pengguna dan fungsi `sort` dari library algorithm, program dapat mengurutkan karakter secara ascending dan descending sesuai dengan input yang diberikan dan menampilkan hasilnya ke layar.

### Output
<img width="778" alt="![Screenshot 2024-03-29 074828](https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/e9c76004-51b4-457e-93b9-96cfc08620a0)">

## Kesimpulan

Kesimpulannya, array adalah suatu struktur data yang digunakan untuk menyimpan data dengan cara yang efisien, ukuran dan tipe array tidak dapat diubah setelah deklarasinya serta berisi komponen-komponen yang memiliki tipe data yang sama yang dapat diakses melalui suatu indeks. Array menurut dimensi ada 4 yaitu, array satu dimensi, array dua dimensi, array tiga dimensi, dan array multidimensi. Array memiliki kekurangan dan kelebihan, kelebihan seperti efifiensi memori, akses data cepat, sederhana, fleksibel, sedangkan kekurangan dari array yaitu ukurannya yang tetap, memori terbuang, kompleksitas, dan keamanan memori.

## Referensi

[1] R. Nasution et al., "Persepsi Mahasiswa Informatika Terhadap Keefektifan Algoritma Bubble Sort dalam Mengurutkan Data," 
    Blend Sains Jurnal Teknik, vol. 1, no. 3, pp. 220-225, 2023.

[2] W. Purbasari et al., "ALGORITMA PEMROGRAMAN," 2024.

[3] Y. A. Sandria et al., "Penerapan Algoritma Selection Sort untuk Melakukan Pengurutan Data dalam Bahasa Pemrograman 
    PHP," Hello World Jurnal Ilmu Komputer, vol. 1, no. 4, pp. 190-194, 2023.

[4] S. N. B. Tjaru, "Kompleksitas Algoritma Pengurutan Selection Sort dan Insertion Sort," IF2091 STRATEGI ALGORITMIK, pp. 
    1-5, 2009.
