# <h1 align="center">Laporan Praktikum Modul Tipe Sorting</h1>
<p align="center">Leonardus Ananto Widodo</p>

## Dasar Teori

	Pengurutan data atau “sorting” adalah proses menyusun kembali data yang sebelumnya telah tersusun secara acak hingga tersusun secara teratur menurut aturan tertentu. Data ini biasanya bertipe numerik dan karakter.Pengurutan data memiliki banyak  fungsi  dalam  sistem.  Data yang  diurutkan  mudah  dicari dan mudah diperiksa  jika  terjadi  kesalahan  mudah diperbaiki.  Data  yang  diurutkan  dengan  baik  juga  mudah  dihapus  jika terkadang  data  tidak  lagi  diperlukan.  Selain  itu, dengan memilah data, kita akan lebih mudah memasukkan data atau lakukan penggabungan. Pengurutan data merupakan bagian integral dari analisis data.Setiap algoritma dalam perancangan perangkat lunak pasti membutuhkan data, baik data analog maupun data digital. Dimana datanya kebanyakan angka bahkan huruf, maka akan dikelola untuk menjadikannya hasil yang diinginkan [1].
	Selain itu, pengurutan (sorting) adalah suatu proses di mana elemen-elemen dalam sebuah array atau list diatur ulang dengan tujuan untuk menyusun data dalam urutan tertentu. Urutan ini dapat berupa urutan menaik (ascending) yaitu elemen-elemen disusun dari nilai terkecil ke nilai terbesar, atau urutan menurun (descending) yaitu elemen-elemen disusun dari nilai terbesar ke nilai terkecil. Tujuannya utama dari pengurutan adalah untuk mempermudah pencarian data dan menganalisis data dengan lebih efisien dan dapat membantu meningkatkan kinerja aplikasi komputasi. Pengurutan merupakan salah satu aspek dasar dari pemrograman dan komputasi yang sering kali diabaikan, namun memiliki peran yang sangat penting dalam berbagai aplikasi komputasi [2].  

Berikut ini ada 3 metode sorting yang digunakan pada praktikum algoritma dan strukdur data yaitu:

**1. Bubble Sort**

	Bubble Sort  adalah  metode  pengurutan  data  dengan  cara  menukar  data  pada  data  pertama  dan  data  pada  data  pertama tetap  duduk  di  sebelahnya  sampai Anda  yakin  tidak  akan  ada  lagi  perubahan  atau  pertukaran  dalam  iterasi  tertentu. Algoritma menggunakan perbandingan dalam operasi antar elemen. Algoritma bubble sort adalah algoritma pengurutan yang  paling  dasar,  dan  metode  pengurutan  juga  yang  paling  sederhana  daripada  algoritma  pengurutan  lainnya.Proses pencarian solusi dilakukan secara brute force, direct to the point, yaitu. Bandingkan elemen dalam tabel.Algoritma bubble sort adalah proses penyortiran yang secara bertahap memindahkan data ke lokasi yang benar. Karena itulah algoritma ini disebut  “bubble”  atau  jika  diterjemahkan  ke  dalam  bahasa  Indonesia  Gelembung. Fungsi  dari  algoritma  ini  adalah mengurutkan  data  dari  kecil  ke  besar  (ascending)  atau  sebaliknya  (menurun) [1].  Berikut  syarat  dan  langkah yang  harus diperhatikan sebelum kita memulai proses produksi.

Metode pengurutan gelembung

• Jumlah iterasi sama dengan jumlah angka dikurangi 1.
• Pada setiap iterasi, jumlah swap sama dengan jumlah digit.
• Pada algoritma bubble sort, meskipun deretan angka telah diurutkan, proses pengurutan akan tetap berjalan.
• Tidak ada perbedaan metode yang signifikan antara teknik algoritma bubble sort ascending dan descending.

	Untuk mempelajari algoritma bubble sort, kita hanya perlu memahami metode yang digunakan untuk mengurutkan data.Logikanya  sederhana,  algoritma  menggunakan  perbandingan  dalam  operasi  antar  elemen. terdapatpro  dan  kontraalgoritma pengurutan gelembung. Kedua hal ini menjadi pertimbangan programmer saat menulis program.

	Berikut adalah beberapa keuntungan yang dimiliki algoritma Bubble Sort
 
• Algoritma ini adalah metode paling sederhana untuk mengurutkan data.
• Bubble Sort adalah algoritma yang mudah dipahami.
• Sedangkan kekurangan dari algoritma Bubble Sort adalah sebagai berikut.
• Tingkat efisiensinya yang kurang. Bubble Sort ini merupakan metode pengurutan yang tidak efisien, khususnya ketika 	 
  menangani  data  yang  jumlahnya  besar.  Hal  ini  karena  ketika  mengurutkan  data  yang  sangat  besar  akan sangat 
  lambat prosesnya.
• Jumlah pengulangan yang dilakukan oleh algoritma ini akan tetap sama jumlahnya meskipun data yang diurutkan sudah cukup 
  terurut.

Dengan beberapa faktor di atas, kita dapat menyesuaikan saat kapan sebaiknya algoritma Bubble Sort ini digunakan.

**2. Insertion Sort**

	Algoritma insertion sort adalah sebuah algoritma sederhana yang cukup efisien untuk mengurutkan sebuah list yang hampir terurut. Algorima ini juga bisa digunakan sebagai bagian dari algoritma yang lebih canggih. Cara kerja algoritma ini adalah dengan mengambil elemen list satu-per-satu dan memasukkannya di posisi yang benar seperti namanya. Pada array, list yang baru dan elemen sisanya dapat berbagi tempat di array, meskipun cukup rumit. Untuk menghemat memori, implementasinya menggunakan pengurutan di tempat yang membandingkan elemen saat itu dengan elemen sebelumnya yang sudah diurut, lalu menukarnya terus sampai posisinya tepat. Hal ini terus dilakukan sampai tidak ada elemen tersisa diinput. Seperti sudah dibahas di bagian pendahuluan, salah satu implementasinya pada kehidupan sehari-hari adalah saat kita mengurutkan kartu remi. Kita ambil kartu satu per satu lalu membandingkan dengan kartu sebelumnya untuk mencari posisi yang tepat.

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

	Secara efisien kita membagi list menjadi dua bagian yaitu bagian yang sudah diurutkan, yang didapat dengan membangun dari kiri ke kanan dan dilakukan pada saat awal, dan bagian list yang elemennya akan diurutkan.

## Guided 

### 1. Program Input Array Tiga Dimensi

```C++
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI
int main()
{
    // Deklarasi array
    int arr[2][3][3];
    // Input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z <<
"] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z <<
"] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}
```
Program di atas adalah program C++ yang memungkinkan pengguna untuk menginputkan elemen-elemen array tiga dimensi, kemudian menampilkannya. Berikut adalah penjelasan detail dari setiap baris program:

1. `#include <iostream>`: Mendefinisikan header file iostream yang digunakan untuk input-output dalam C++.
   
2. `using namespace std;`: Menggunakan namespace std untuk menghindari penulisan `std::` sebelum fungsi-fungsi standar C++.

3. `int main()`: Fungsi utama program C++.

4. `int arr[2][3][3];`: Mendeklarasikan array tiga dimensi dengan ukuran 2x3x3.

5. `for (int x = 0; x < 2; x++)`: Loop untuk mengiterasi melalui indeks x dari 0 hingga 1.

6. `for (int y = 0; y < 3; y++)`: Loop untuk mengiterasi melalui indeks y dari 0 hingga 2.

7. `for (int z = 0; z < 3; z++)`: Loop untuk mengiterasi melalui indeks z dari 0 hingga 2.

8. `cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";`: Menampilkan pesan untuk input elemen array dengan indeks x, y, dan z.

9. `cin >> arr[x][y][z];`: Menginputkan nilai elemen array dengan indeks x, y, dan z.

10. Loop-loop di atas digunakan untuk menginputkan seluruh elemen array tiga dimensi.

11. Loop-loop berikutnya digunakan untuk menampilkan data array yang telah diinputkan.

12. `cout << arr[x][y][z] << ends;`: Menampilkan nilai elemen array dengan indeks x, y, dan z.

13. `cout << endl;`: Menambahkan baris baru setelah menampilkan satu baris elemen array.

Denngan demikian, program ini memungkinkan pengguna untuk menginputkan dan menampilkan elemen-elemen array tiga dimensi. Setiap loop digunakan untuk mengakses dan memanipulasi elemen array sesuai dengan indeks yang sesuai.

### Output

<img width="780" alt="![Screenshot 2024-03-29 072120](https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/546f1f63-abef-48b1-b744-14a06ddba67f)">

<img width="780" alt="![Screenshot 2024-03-29 072138](https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/fed63b17-77e3-4b7e-8ad2-b3e47cd8c56e)">

### 2. Program Mencari Nilai Maksimal pada Array

```C++
#include <iostream>
using namespace std;
int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukkan panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << " angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array[0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)    
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << "Nilai maksimum adalah " << maks << " berada di Array ke "  << (lokasi+1) << endl;

    return 0; // Return o to indicate successful execution
}
```

Program di atas adalah program C++ yang menghitung nilai maksimum dari array yang diinputkan oleh pengguna. Berikut adalah penjelasan detail dari setiap baris program:

1. `#include <iostream>`: Mendefinisikan header file iostream yang digunakan untuk input-output dalam C++.

2. `using namespace std;`: Menggunakan namespace std untuk menghindari penulisan `std::` sebelum fungsi-fungsi standar C++.

3. `int main()`: Fungsi utama program C++.

4. `int maks, a, i = 1, lokasi;`: Mendeklarasikan variabel maks (untuk menyimpan nilai maksimum), a (untuk panjang array), i (sebagai counter), dan lokasi (untuk menyimpan indeks nilai maksimum).

5. `cout << "Masukkan panjang array: ";`: Menampilkan pesan untuk meminta pengguna memasukkan panjang array.

6. `cin >> a;`: Menginputkan panjang array yang diinginkan oleh pengguna.

7. `int array[a];`: Mendefinisikan array dengan panjang yang diinputkan oleh pengguna.

8. `cout << "Masukkan " << a << " angka\n";`: Menampilkan pesan untuk meminta pengguna memasukkan angka-angka ke dalam array.

9. Loop `for (i = 0; i < a; i++)` digunakan untuk menginputkan nilai-nilai array yang diinginkan oleh pengguna.

10. `maks = array[0];`: Menginisialisasi variabel maks dengan nilai pertama dari array.

11. Loop `for (i = 0; i < a; i++)` digunakan untuk mencari nilai maksimum dari array.

12. `if (array[i] > maks)`: Memeriksa apakah nilai array saat ini lebih besar dari nilai maksimum yang telah ditemukan sebelumnya.

13. Jika nilai array saat ini lebih besar dari maksimum, maka nilai maksimum diupdate dengan nilai array tersebut dan lokasi diupdate dengan indeksnya.

14. `cout << "Nilai maksimum adalah " << maks << " berada di Array ke "  << (lokasi+1) << endl;`: Menampilkan nilai maksimum yang ditemukan beserta posisinya dalam array.

15. `return 0;`: Mengembalikan nilai 0 untuk menandakan bahwa program telah berjalan dengan sukses.

Dengan demikian, program ini memungkinkan pengguna untuk menginputkan angka-angka ke dalam array dan kemudian mencari nilai maksimum dari array tersebut. Program menggunakan loop dan variabel-variabel untuk melakukan perhitungan dengan benar.

### Output
<img width="780" alt="Screenshot 2024-03-15 090823" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/4c6aa061-9bed-4770-9044-c19ae9689ea6">

## Unguided 

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!

<img width="694" alt="![Screenshot 2024-03-29 074156](https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/c8c9bc38-17b6-4cdd-9d64-f3efc99d7d15)">

```C++
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> data_array;
    vector<int> nomor_genap;
    vector<int> nomor_ganjil;

    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    cout << "Masukkan elemen array (pisahkan dengan spasi): ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        data_array.push_back(num);
    }

    // Memisahkan bilangan genap dan ganjil
    for (int i = 0; i < n; i++) {
        if (data_array[i] % 2 == 0) {
            nomor_genap.push_back(data_array[i]);
        } else {
            nomor_ganjil.push_back(data_array[i]);
        }
    }

    // Menampilkan output
    cout << "data array: ";
    for (int num : data_array) {
        cout << num << ",";
    }
    cout << endl;

    cout << "nomor genap: ";
    for (int num : nomor_genap) {
        cout << num << ",";
    }
    cout << endl;

    cout << "nomor ganjil: ";
    for (int num : nomor_ganjil) {
        cout << num << ",";
    }
    cout << endl;

    return 0;
}
```

### Penjelasan Program (Interpretasi)
Berikut adalah contoh program C++ yang meminta pengguna untuk memasukkan data array dan kemudian memisahkan bilangan genap dan ganjil dari array tersebut, beserta penjelasan tiap baris kode:

```C++
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> data_array;
    vector<int> nomor_genap;
    vector<int> nomor_ganjil;

    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    cout << "Masukkan elemen array (pisahkan dengan spasi): ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        data_array.push_back(num);
    }

    // Memisahkan bilangan genap dan ganjil
    for (int i = 0; i < n; i++) {
        if (data_array[i] % 2 == 0) {
            nomor_genap.push_back(data_array[i]);
        } else {
            nomor_ganjil.push_back(data_array[i]);
        }
    }

    // Menampilkan output
    cout << "data array: ";
    for (int num : data_array) {
        cout << num << ",";
    }
    cout << endl;

    cout << "nomor genap: ";
    for (int num : nomor_genap) {
        cout << num << ",";
    }
    cout << endl;

    cout << "nomor ganjil: ";
    for (int num : nomor_ganjil) {
        cout << num << ",";
    }
    cout << endl;

    return 0;
}
```

1. `#include <iostream>`: Menggunakan library iostream untuk input-output.
2. `#include <vector>`: Menggunakan library vector untuk menggunakan struktur data vector.
3. `using namespace std;`: Menggunakan namespace std untuk memudahkan penggunaan fungsi input-output.
4. Mendeklarasikan tiga buah vector: `data_array` untuk menyimpan seluruh elemen array yang dimasukkan oleh pengguna, `nomor_genap` untuk menyimpan bilangan genap, dan `nomor_ganjil` untuk menyimpan bilangan ganjil.
5. Deklarasi variabel `n` untuk menyimpan jumlah elemen array yang akan dimasukkan oleh pengguna.
6. Meminta pengguna untuk memasukkan jumlah elemen array.
7. Meminta pengguna untuk memasukkan nilai elemen array dan menyimpannya ke dalam vector `data_array`.
8. Loop untuk memisahkan bilangan genap dan ganjil dari `data_array` dan menyimpannya ke dalam vector `nomor_genap` dan `nomor_ganjil`.
9. Menampilkan seluruh elemen array yang dimasukkan oleh pengguna.
10. Menampilkan bilangan genap yang dipisahkan dari array awal.
11. Menampilkan bilangan ganjil yang dipisahkan dari array awal.
12. `return 0;`: Mengembalikan nilai 0 sebagai tanda program berakhir dengan sukses.

Kesimpulan:
- Program ini meminta pengguna untuk memasukkan jumlah elemen array dan nilai-nilai elemennya.
- Program kemudian memisahkan bilangan genap dan ganjil dari array yang dimasukkan oleh pengguna.
- Dengan menggunakan vector, program dapat menyimpan nilai elemen array dan memisahkan bilangan genap dan ganjil dengan mudah.
- Program ini dapat membantu pengguna dalam memahami penggunaan vector dan pemisahan data berdasarkan kondisi tertentu dalam pemrograman C++.

#### Output:
<img width="694" alt="![Screenshot 2024-03-29 073438](https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/7ff4709d-f86c-4903-8680-ea04495b633d)">

### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

```C++
#include <iostream>
using namespace std;

int main() 
{
  // Deklarasi variabel untuk menyimpan dimensi array
  int x, y, z;

  // Meminta pengguna untuk memasukkan dimensi array
  cout << "Masukkan jumlah baris: ";
  cin >> x;
  cout << "Masukkan jumlah kolom: ";
  cin >> y;
  cout << "Masukkan jumlah layer: ";
  cin >> z;

  // Deklarasi array dengan dimensi yang diinputkan pengguna
  int arr[x][y][z];

  // Input elemen array dengan menggunakan fungsi perulangan
  for (int i = 0; i < x; i++) 
  {
    for (int j = 0; j < y; j++) 
    {
      for (int k = 0; k < z; k++) 
      {
        cout << "Input array[" << i << "][" << j << "][" << k << "] = ";
        cin >> arr[i][j][k];
      }
    }
    cout << endl;
  }

  // Output elemen array
  for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cout << "Data Array[" << i << "][" << j << "][" << k <<"] = " << arr[i][j][k] << endl;
            }
        }
    }
    cout << endl;

/// Output array
     for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for(int k = 0; k < z; k++)
            {
                cout << arr[i][j][k] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}
```

### Penjelasan Program

1. `#include <iostream>`: Menggunakan library iostream untuk input-output.
2. `using namespace std;`: Menggunakan namespace std untuk memudahkan penggunaan fungsi input-output.
3. `int main()`: Fungsi utama program dimulai di sini.
4. Deklarasi variabel `x`, `y`, dan `z` untuk menyimpan dimensi array.
5. Meminta pengguna untuk memasukkan jumlah baris, kolom, dan layer array.
6. Deklarasi array `arr` dengan dimensi yang diinputkan oleh pengguna.
7. Input elemen array menggunakan nested loop untuk mengakses setiap elemen array.
8. Menampilkan pesan untuk memasukkan nilai elemen array dengan indeks yang sesuai.
9. Memasukkan nilai elemen array ke dalam array `arr`.
10. Menampilkan elemen array yang telah dimasukkan oleh pengguna dengan indeks yang sesuai.
11. Menampilkan elemen array tanpa pesan indeks, hanya nilainya saja.
12. `}`: Penutup fungsi main.

Kesimpulan:
- Program ini meminta pengguna untuk memasukkan dimensi array [x][y][z] serta nilai-nilai elemennya.
- Program kemudian menampilkan nilai elemen array sesuai dengan indeksnya.
- Dengan menggunakan nested loop, program dapat mengakses dan memanipulasi setiap elemen array sesuai dengan dimensinya.
- Program ini dapat membantu pengguna dalam memahami konsep penggunaan array tiga dimensi dan penggunaan nested loop dalam pemrograman C++.

### Output
<img width="777" alt="![Screenshot 2024-03-29 074457](https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/79011a6b-5605-47ff-806e-32a8898f11ef)">

<img width="777" alt="![Screenshot 2024-03-29 074513](https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/e88be074-573d-4c39-bf39-f532417db341)">

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map!

```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];
    double total = 0;
    int maksimum = INT_MIN;
    int minimum = INT_MAX;

    // Meminta pengguna untuk memasukkan elemen array
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr[i];
        total += arr[i];
        maksimum = max(maksimum, arr[i]);
        minimum = min(minimum, arr[i]);
    }

    double rata_rata = total / n;

    // Menampilkan hasil
    cout << "Nilai Maksimum: " << maksimum << endl;
    cout << "Nilai Minimum: " << minimum << endl;
    cout << "Nilai Rata-rata: " << rata_rata << endl;

    return 0;
}
```

### Penjelasan Program (Interpretasi)

1. `#include <iostream>`: Menggunakan library iostream untuk input-output.
2. `using namespace std;`: Menggunakan namespace std untuk memudahkan penggunaan fungsi input-output.
3. `int main()`: Fungsi utama program dimulai di sini.
4. Deklarasi variabel `n` untuk menyimpan jumlah elemen array yang akan dimasukkan oleh pengguna.
5. Meminta pengguna untuk memasukkan jumlah elemen array.
6. Deklarasi array `arr` dengan ukuran `n` yang diinputkan oleh pengguna.
7. Deklarasi variabel `total` untuk menyimpan total nilai elemen array, `maksimum` untuk menyimpan nilai maksimum, dan `minimum` untuk menyimpan nilai minimum.
8. Loop untuk meminta pengguna memasukkan nilai elemen array dan menghitung total, nilai maksimum, dan nilai minimum.
9. Menghitung rata-rata dari nilai elemen array.
10. Menampilkan nilai maksimum, nilai minimum, dan rata-rata dari elemen array yang dimasukkan oleh pengguna.
11. `return 0;`: Mengembalikan nilai 0 sebagai tanda program berakhir dengan sukses.

Kesimpulan:
- Program ini meminta pengguna untuk memasukkan jumlah elemen array dan nilai-nilai elemennya.
- Program kemudian menghitung nilai maksimum, nilai minimum, rata-rata, dan menampilkannya kepada pengguna.
- Dengan menggunakan loop, program dapat mengakses setiap elemen array, menghitung total, nilai maksimum, nilai minimum, dan rata-rata dengan efisien.
- Program ini dapat membantu pengguna dalam memahami konsep penggunaan array, perulangan, dan penggunaan fungsi `max` dan `min` dalam pemrograman C++.

### Output
<img width="778" alt="![Screenshot 2024-03-29 074828](https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/e9c76004-51b4-457e-93b9-96cfc08620a0)">

## Kesimpulan

Kesimpulannya, array adalah suatu struktur data yang digunakan untuk menyimpan data dengan cara yang efisien, ukuran dan tipe array tidak dapat diubah setelah deklarasinya serta berisi komponen-komponen yang memiliki tipe data yang sama yang dapat diakses melalui suatu indeks. Array menurut dimensi ada 4 yaitu, array satu dimensi, array dua dimensi, array tiga dimensi, dan array multidimensi. Array memiliki kekurangan dan kelebihan, kelebihan seperti efifiensi memori, akses data cepat, sederhana, fleksibel, sedangkan kekurangan dari array yaitu ukurannya yang tetap, memori terbuang, kompleksitas, dan keamanan memori.

## Referensi
[1] Dewi, L. J. E., "Media Pembelajaran Bahasa Pemrograman C++," Jurnal Pendidikan Teknologi dan Kejuruan, vol. 7, no. 1, 2010.

[2] Huda, A., Ardi, N., and Muabi, A., "Pengantar Coding Berbasis C/C++," UNP PRESS, 2021.

[3] FIRLIANA, R. and Kasih, P., "Algoritma dan Pemrograman C++," 2018.

[4] Pratama, M. A., "STRUKTUR DATA ARRAY DUA DIMENSI PADA PEMROGRAMAN C++," 2020.
>>>>>>> 64ba83fcea545edf64b2ea2af527a2f8f5185eb7
