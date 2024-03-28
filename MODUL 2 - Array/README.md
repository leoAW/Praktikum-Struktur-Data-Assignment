# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Leonardus Ananto Widodo</p>

## Dasar Teori
Tipe data adalah suatu nilai yang dapat dinyatakan dalam bentuk konstanta atau variabel dan operator yang dapat dikenakan padanya. Konstanta menyatakan nilai yang tetap, sedangkan variable menyatakan nilai yang dapat diubah-ubah selama eksekusi berlangsung [1]. Pada dasarnya, tipe data dalam pemrograman merujuk pada klasifikasi yang memberikan informasi kepada sistem tentang bagaimana data tersebut dapat diproses. Setiap nilai yang kita masukkan dalam kode, entah itu angka, teks, atau sejenisnya, harus didefinisikan dengan tipe data tertentu. Karena, komputer tidak dapat memproses data tanpa memahami jenis data apa yang diberikan [5]. 

Berikut ini fungsi tipe data saat mengaplikasikannya dalam pemrograman yaitu [5]:

1. Mengidentifikasi Jenis Data
2. Penggunaan Memori yang Efisien
3. Operasi yang Sesuai
4. Mencegah Kesalahan
5. Keamanan dan Stabilitas Program
   
Untuk  format  penulisan  tipe  data  pada C++ adalah: 

**tipe_data [spasi] nama_variabel;**
atau **tipe_data [spasi] nama_variabel = value;**
atau jika sekaligus lebih dari satu variabel
**tipe_data [spasi] nama_variabel, nama_variabel2, ....., 
nama_variabel_N;** [2]

Pada bahasa pemrograman C++, tipe data dibagi menjadi tiga bagian diantaranya yaitu:

**1. Tipe Data Primitif**

Tipe data primitif adalah tipe data bawaan yang disediakan oleh bahasa pemrograman untuk merepresentasikan nilai sederhana. Di C++, tipe data primitif meliputi [3]:

- int		: Menyimpan bilangan bulat dan tanpa adanya desimal dengan ukuran penyimpanannya sebesar 4 bytes.
- char		: Menyimpan satu karakter/huruf/angka atau nilai ASCII dengan ukuran penyimpanannya sebesar 1 byte. 
- float		: Menyimpan bilangan pecahan yang berisi satu atau lebih desimal dan cukup untuk menyimpan 7 angka desimal 		  dengan ukuran penyimpanannya 4 bytes.
- double	: Menyimpan bilangan pecahan yang berisi satu atau lebih desimal dan cukup untuk menyimpan 15 angka desimal 		  dengan ukuran penyimpanannya 8 bytes.
-  bool		: Menyimpan Nilai boolean (true atau false) dengan ukuran penyimpananya 1 byte.
  
Oleh karena itu, tipe data primitif ini menyimpan nilai langsung dalam memori dan memiliki ukuran tetap yang ditentukan oleh bahasa pemrograman.

**2. Tipe Data Abstrak**

Tipe data abstrak merupakan tipe data yang didefinisikan oleh pengguna berdasarkan perilaku atau operasi-operasi yang dapat dilakukan terhadap data tersebut, tanpa harus mengetahui implementasi internalnya. Dalam C++, tipe data abstrak dapat dibuat dengan mendefinisikan kelas atau struktur yang mencakup tipe data primitif dan/atau tipe data abstrak lainnya. Contoh tipe data abstrak di C++ adalah:

- Stack: Tumpukan data dengan operasi push dan pop.
- Queue: Antrian data dengan operasi enqueue dan dequeue.
- Tree: Struktur data hirarkis dengan node dan cabang.

**3. Tipe Data Koleksi**

Tipe data koleksi (Container) digunakan untuk menyimpan kumpulan data dalam satu struktur. Di C++, tipe data koleksi umumnya diimplementasikan menggunakan Standard Template Library (STL) dan meliputi:

Array	: Kumpulan elemen dengan ukuran tetap.

Vector	: Dinamis array dengan kemampuan penambahan dan penghapusan elemen.

List	: Struktur data berantai dengan operasi-insert dan delete.

Set	: Kumpulan nilai unik tanpa duplikat.

Map	: Kumpulan pasangan key-value.

## Guided 

### 1. Tipe Data Primitif

```C++
#include <iostream>
using namespace std;
// Main program
int main()
{
    char op;
    float num1, num2;
    // It allows user to enter operator i.e. +, -, *, /
    cin >> op;
    // It allows user to enter the operands
    cin>> num1 >> num2;
    // Switch statement begins
    switch (op)
    {
    // If user enter +
    case '+':
        cout << num1 + num2; 
        break;
    // If user enter -
    case '-':
        cout << num1 - num2;
        break;
    // If user enter *
    case '*':
        cout << num1 * num2;
        break;
    // If user enter /
    case '/':
        cout << num1 / num2;
        break;
    // If the operator is other than +, -, * or /,
    // error message will display
    default:
        cout << "Error! operator is not correct";
    } // switch sytatement ends
    return 0;
}
```
Program di atas pada guided 1 tipe data primitif adalah sebuah kalkulator sederhana yang meminta pengguna untuk memasukkan operator dan dua bilangan, kemudian melakukan operasi matematika sesuai dengan operator yang dimasukkan. Berikut ini penjelasan program diatas yaitu:
1. Program dimulai dengan mendeklarasikan variabel op (operator), num1 (bil. pertama), dan num2 (bil. kedua)        dengan tipe data char dan float.
2. Pengguna diminta untuk memasukkan operator (+, -, *, /) melalui inputan.
3. Pengguna diminta untuk memasukkan dua bilangan melalui inputan.
4. Program menggunakan statement switch untuk memeriksa nilai dari op, yaitu operator yang dimasukkan oleh          pengguna.
5. Jika operator adalah '+', program akan menjumlahkan num1 dan num2 dan mencetak hasilnya.
6. Jika operator adalah '-', program akan mengurangkan num1 dan num2 dan mencetak hasilnya.
7. Jika operator adalah '*', program akan mengalikan num1 dan num2 dan mencetak hasilnya.
8. Jika operator adalah '/', program akan membagi num1 dengan num2 dan mencetak hasilnya.
9. Jika operator bukan salah satu dari '+', '-', '*', atau '/', maka program akan mencetak pesan kesalahan          "Error! operator is not correct".
10. Program kemudian mengembalikan nilai 0 dan selesai.

    Dengan demikian, program ini berfungsi memberikan pengguna kemampuan untuk memudahkan dalam melakukan operasi penjumlahan, pengurangan, perkalian, dan pembagian antara dua bilangan sesuai dengan operator yang akan dimasukkan.

### Output
<img width="780" alt="Screenshot 2024-03-15 082400" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/98cabd18-9c1d-4633-944e-9a302a4b53a0">

### 2. Tipe Data Abstrak

```C++
#include <iostream>
using namespace std;

// Struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    // Menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    // Mengisi nilai ke struct
    mhs1.name = "Oel";
    mhs1.address = "Sumowono";
    mhs1.age = 19;
    mhs2.name = "Leo";
    mhs2.address = "Semarang";
    mhs2.age = 18;
    
    // Mencetak isi struct
    cout<<"Mahasiswa 1\n";
    cout<<"Nama     : "<< mhs1.name<<endl;
    cout<<"Alamat   : "<< mhs1.address<<endl;
    cout<<"Umur     : "<< mhs1.age<<endl;
    cout<<"Nama     : "<< mhs2.name<<endl;
    cout<<"Alamat   : "<< mhs2.address<<endl;  
    cout<<"Umur     : "<< mhs2.age<<endl;
    return 0;  
}
```

Program di atas pada guided 2 tipe data abstrak yaitu menggunakan struct untuk menyimpan informasi tentang dua mahasiswa. Struct Mahasiswa memiliki tiga anggota yaitu name (nama), address (alamat), dan age (umur) yang masing-masing bertipe data const char* dan int. Berikut ini penjelasan program diatas yaitu:

1. Di dalam fungsi main, dua variabel mhs1 dan mhs2 dari tipe struct Mahasiswa dideklarasikan.
2. Nilai-nilai untuk masing-masing anggota struct diisi untuk kedua mahasiswa.
	- Untuk mhs1: nama "Oel", alamat "Sumowono", dan umur 19.
	- Untuk mhs2: nama "Leo", alamat "Semarang", dan umur 18.
3. Setelah nilai-nilai diisi, program mencetak informasi mahasiswa ke layar dengan menggunakan cout.
	- Untuk mhs1: mencetak nama, alamat, dan umur mahasiswa pertama.
	- Untuk mhs2: mencetak nama, alamat, dan umur mahasiswa kedua.
4. Program kemudian mengembalikan nilai 0 dan berakhir.

Penggunaan struct pada program tersebut memungkinkan untuk mengelompokkan informasi terkait mahasiswa ke dalam satu entitas yang lebih terstruktur. Hal ini memudahkan dalam pengelolaan data dan memungkinkan akses ke informasi yang terkait dengan mahasiswa tertentu.

### Output
<img width="780" alt="Screenshot 2024-03-15 090823" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/4c6aa061-9bed-4770-9044-c19ae9689ea6">

### 3. Tipe Data Koleksi

```C++
# include <iostream>
using namespace std;
int main()
{
    // Deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    //Mencetak array
    cout << "Isi array pertama  :" << nilai[0] << endl;
    cout << "Isi array kedua    :" << nilai[1] << endl;
    cout << "Isi array ketiga   :" << nilai[2] << endl;
    cout << "Isi array keempat  :" << nilai[3] << endl;
    cout << "Isi array kelima   :" << nilai[4] << endl;
    return 0;
}
```

Program di atas pada guided 3 tipe data koleksi menggunakan array untuk menyimpan dan mencetak nilai-nilai dalam array tersebut. Berikut ini penjelasan program diatas yaitu:
1. Di dalam fungsi `main`, sebuah array `nilai` dengan ukuran 5 elemen (indeks 0 hingga 4) dari tipe data `int` dideklarasikan.
2. Setiap elemen dari array `nilai` diinisialisasi dengan nilai tertentu.
   - `nilai[0]` diisi dengan nilai 23.
   - `nilai[1]` diisi dengan nilai 50.
   - `nilai[2]` diisi dengan nilai 34.
   - `nilai[3]` diisi dengan nilai 78.
   - `nilai[4]` diisi dengan nilai 90.
3. Setelah inisialisasi, program mencetak nilai dari setiap elemen array ke layar menggunakan `cout`.
   - `nilai[0]` dicetak sebagai "Isi array pertama  : [nilai[0]]".
   - `nilai[1]` dicetak sebagai "Isi array kedua    : [nilai[1]]".
   - `nilai[2]` dicetak sebagai "Isi array ketiga   : [nilai[2]]".
   - `nilai[3]` dicetak sebagai "Isi array keempat  : [nilai[3]]".
   - `nilai[4]` dicetak sebagai "Isi array kelima   : [nilai[4]]".
4. Program kemudian mengembalikan nilai 0 dan berakhir.

Penggunaan array pada program tersebut dapat menyimpan multiple nilai dalam satu struktur data yang sama. Dengan mengakses elemen array menggunakan indeks, program dapat mengakses dan memanipulasi nilai-nilai tersebut sesuai dengan kebutuhan.

### Output
<img width="780" alt="Screenshot 2024-03-15 082904" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/6193dee9-8a1c-46bf-a779-098ace2d4de5">

## Unguided 

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program          tersebut dan ambil kesimpulan dari materi tipe data primitif!

```C++
#include <iostream>
using namespace std;

const double PI = 3.14; // Nilai pi

// Fungsi untuk menghitung volume tabung
double hitungVolumeTabung(double jari_jari, double tinggi) {
    return PI * jari_jari * jari_jari * tinggi;
}

// Fungsi untuk menghitung volume kerucut
double hitungVolumeKerucut(double jari_jari, double tinggi) {
    return (1.0 / 3.0) * PI * jari_jari * jari_jari * tinggi;
}

int main() {
    double jari_jari_tabung, tinggi_tabung;
    double jari_jari_kerucut, tinggi_kerucut;

    // Input jari-jari dan tinggi tabung
    std::cout << "Masukkan jari-jari tabung: ";
    std::cin >> jari_jari_tabung;
    std::cout << "Masukkan tinggi tabung: ";
    std::cin >> tinggi_tabung;

    // Input jari-jari dan tinggi kerucut
    std::cout << "Masukkan jari-jari kerucut: ";
    std::cin >> jari_jari_kerucut;
    std::cout << "Masukkan tinggi kerucut: ";
    std::cin >> tinggi_kerucut;

    // Hitung volume tabung dan kerucut
    double volume_tabung = hitungVolumeTabung(jari_jari_tabung, tinggi_tabung);
    double volume_kerucut = hitungVolumeKerucut(jari_jari_kerucut, tinggi_kerucut);

    // Tampilkan hasil
    std::cout << "Volume tabung: " << volume_tabung << std::endl;
    std::cout << "Volume kerucut: " << volume_kerucut << std::endl;

    return 0;
}
```

### Penjelasan Program (Interpretasi)
1. Kode ini mendefinisikan konstanta `PI` dengan nilai 3.14159 untuk merepresentasikan konstanta matematika π.
2. Dua fungsi dideklarasikan:
   - `hitungVolumeTabung(double jari_jari, double tinggi)`: Menghitung volume tabung berdasarkan jari-jari dan         tingginya.
   - `hitungVolumeKerucut(double jari_jari, double tinggi)`: Menghitung volume kerucut berdasarkan jari-jari dan       tingginya.
3. Pada fungsi `main`:
   - Masukan pengguna diterima untuk jari-jari dan tinggi tabung serta kerucut.
   - Volume tabung dan kerucut dihitung menggunakan fungsi yang sesuai.
   - Hasil perhitungan kemudian ditampilkan kepada pengguna.

Dengan demikian, penggunaan tipe data primitif tersebut yaitu double yang berfungsi untuk menyimpan jari-jari dan tinggi, serta untuk menyimpan hasil perhitungan volume. Hal Ini memungkinkan kita untuk melakukan perhitungan dengan presisi floating-point yang baik dan akurat tentunya.

#### Output:
<img width="694" alt="Screenshot 2024-03-19 220923" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/5435ce04-2a35-4d56-881d-4d08c99a1190">


Hasil tersebut menunjukkan volume dari bangun ruang tabung dari rumus PI * jari_jari * jari_jari * tinggi yaitu 4710 dengan jari-jarinya 10 dan tingginya 15. Sedangkan volume dari bangun ruang kerucut dari rumus (1.0 / 3.0) * PI * jari_jari * jari_jari * tinggi yaitu 235,5 dengan jari-jarinya 5 dan tingginya 9.


### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya!

### Fungsi dari Class dan Struct dalam C++:
1. **Class**:
   - Class adalah struktur data yang dapat berisi data (variabel) dan fungsi (metode) yang terkait.
   - Class digunakan untuk menggabungkan data dan operasi yang berhubungan ke dalam satu entitas.
   - Class memungkinkan untuk membuat objek berdasarkan blueprint (class) tersebut.
   - Class dapat memiliki hak akses (public, private, protected) untuk mengatur aksesibilitas data dan metode.

2. **Struct**:
   - Struct mirip dengan class, tetapi semua anggotanya secara default adalah public.
   - Struct biasanya digunakan untuk menyimpan data tanpa metode (fungsi) terkait.
   - Struct sering digunakan untuk representasi data sederhana yang hanya membutuhkan penyimpanan.

```C++
#include <iostream>
using namespace std;

// Class Kubus
class Kubus {
public:
    double sisi;

    double hitungVolume() {
        return sisi * sisi * sisi;
    }

    double hitungLuasPermukaan() {
        return 6 * sisi * sisi;
    }
};

// Struct Kubus
struct Kubus_Struct {
    double sisi;

    double hitungVolume() {
        return sisi * sisi * sisi;
    }

    double hitungLuasPermukaan() {
        return 6 * sisi * sisi;
    }
};

int main() {
    // Menggunakan Class Kubus
    Kubus kubus1;
    kubus1.sisi = 4.0;

    cout << "Volume Kubus (Class): " << kubus1.hitungVolume() << endl;
    cout << "Luas Permukaan Kubus (Class): " << kubus1.hitungLuasPermukaan() << endl;

    // Menggunakan Struct Kubus
    Kubus_Struct kubus2;
    kubus2.sisi = 5.0;

    cout << "Volume Kubus (Struct): " << kubus2.hitungVolume() << endl;
    cout << "Luas Permukaan Kubus (Struct): " << kubus2.hitungLuasPermukaan() << endl;

    return 0;
}
```

### Penjelasan Program
1. Program di atas menggunakan class `Kubus` dan struct `KubusStruct` untuk menghitung volume dan luas permukaan kubus.
2. Baik class maupun struct memiliki variabel `sisi` dan metode `hitungVolume()` dan `hitungLuasPermukaan()` untuk menghitung volume dan luas permukaan kubus.
3. Pada bagian `main()`, objek kubus dibuat menggunakan class dan struct, nilai sisi diisi, dan metode untuk menghitung volume dan luas permukaan dipanggil.
4. Hasil perhitungan volume dan luas permukaan kubus menggunakan class dan struct ditampilkan ke layar.

Dengan menggunakan class dan struct, kita dapat mengorganisir data dan operasi terkait ke dalam satu entitas yang lebih terstruktur. Class memberikan fleksibilitas dalam menggunakan hak akses, sementara struct merupakan pilihan yang baik untuk penyimpanan data sederhana. Dengan memahami perbedaan dan kegunaan keduanya, kita dapat memilih yang sesuai dengan kebutuhan program yang sedang dikembangkan.

### Output
<img width="777" alt="Screenshot 2024-03-19 225852" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/fd474a50-da23-4d4d-a2a8-46ecbf689382">

Hasil tersebut menunjukkan volume dan luas permukaan dari bangun ruang kubus 1 dari rumus sisi * sisi * sisi serta 6 * sisi * sisi dengan sisinya 4.0 yaitu 64 dan 96. Sedangkan volume dan luas permukaan dari bangun ruang kubus 2 dari rumus sisi * sisi * sisi serta 6 * sisi * sisi dengan sisinya 5.0 yaitu 125 dan 150.  

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map!

```C++
#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> FruitColors;

    // Menambahkan data warna buah ke map
    FruitColors["Apple"]        = "Red";
    FruitColors["Banana"]       = "Yellow";
    FruitColors["Grape"]        = "Purple";
    FruitColors["Avocado"]      = "Green";
    FruitColors["Blueberry"]    = "Blue";

    // Menampilkan data warna buah
    for (const auto& pair : FruitColors) {
        std::cout << "Buah: " << pair.first << " - Warna: " << pair.second << std::endl;
    }

    return 0;
}
```

### Penjelasan Program (Interpretasi)
1. Program di atas menggunakan fungsi map untuk menyimpan data warna buah, dimana nama buah digunakan sebagai key dan warna buah digunakan sebagai value.
2. Data warna buah ditambahkan ke map fruitColors dengan nama buah sebagai key dan warna buah sebagai value.
3. Setelah data warna buah ditambahkan, program menampilkan nama buah beserta warnanya ke layar.

Dengan menggunakan fungsi map, kita dapat dengan mudah menyimpan dan mengakses data warna buah untuk setiap buah yang berbeda.

### Output
<img width="778" alt="Screenshot 2024-03-19 234441" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/e55880ee-58f7-432e-916b-99ffd2ccd73f">

## Kesimpulan
Tipe data terbagi menjadi 3 jenis yaitu tipe data primitif, tipe data abstrak, dan tipe data koleksi. Pada Tipe data primitif terdapat integer (int), character (char), boolean (bool), float, dan double. Pada tipe data abstrak ada struct dan class. Class dapat memiliki hak akses (public, private, protected) untuk mengatur aksesibilitas data dan metode, sedangkan struct semua anggotanya secara default adalah public. Selanjutnya, pada tipe data koleksi meliputi array, list, vector, set, dan map. Array merupakan kumpulan elemen dengan ukuran tetap. Vector merupakan dinamis array dengan kemampuan penambahan dan penghapusan elemen. List merupakan struktur data berantai dengan operasi-insert dan delete. Set merupakan kumpulan nilai unik tanpa duplikat serta map merupakan kumpulan pasangan key-value. Oleh karena itu, tipe data dalam pemrograman C++ sangat penting untuk ditentukan agar dapat menghindari kesalahan dalam pemrosesan data dan membuat program lebih efisien.

## Referensi
[1] Oematan, M. Zusane. Pengenalan C/C++. Indonesia: Unikom.ac.id: 2010.

[2] MTD Putra, D Pradeka, AR Yuniarti. Belajar Dasar Pemrograman C++. Indonesia: penerbitwidina.com: 2022.

[3] Ma'Arif, Alfian. Buku Ajar Dasar Pemrograman C++. Yogyakarta: UAD Press: 2020.

[4] Faradiba. PENGGUNAAN APLIKASI VISUAL C++ UNTUK PEMROGRAMAN KOMPUTER. Jakarta: 2019.

[5] Maulida, Anisa Fitri. dibimbing.id. https://dibimbing.id/blog/detail/seperti-apa-tipe-data-primitif, accessed 12 November  2023. 
