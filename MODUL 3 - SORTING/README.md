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
