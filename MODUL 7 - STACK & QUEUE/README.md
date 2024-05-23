# <h1 align="center">Laporan Praktikum Modul Stack & Queue</h1>
<p align="center">Leonardus Ananto Widodo</p>

## Dasar Teori

### 1. Stack

Stack (tumpukan) adalah sekumpulan elemen-elemen data yang disimpan dalam satu laju linier. Stack juga merupkan struktur data yang memungkinkan penyisipan dan pengambilan data dilakukan dari satu ujung yang disebut puncak. Sesuai namanya, struktur data ini digambarkan seperti keadaan tumpukan piring atau tumpukan buku. Cara yang paling mudah untuk meletakkan piring ke dalam tumpukan yakni dengan menaruhnya dibagian puncak. Begitu juga kalau ingin mengambil piring. Piring diambil dari data yang berada di puncak tumpukan. Penyimpanan data/item dimana data/item
yang diakses adalah paling akhir yang disebut top of stack. Sistem pengaksesan pada tumpukan menggunakan sistem LIFO (Last In First Out), artinya elemen yang terakhir masuk itu akan pertama dikeluarkan dari tumpukan [1].

Operasi pada stack melibatkan beberapa fungsi dasar yang dapat dilakukan pada struktur data ini. Berikut ini beberapa operasi umum pada stack yaitu [3]:

1) Push: Menambah item pada stack pada tumpukan yang paling atas.
2) Pop: Mengambil item pada stack pada tumpukan paling atas.
3) Clear: Mengosongkan stack.
4) IsEmpty: Mengecek apakah stack sudah kosong.
5) IsFull: Mengecek apakah stack sudah penuh.

### 2. Queue 

Queue (antrian) merupakan kumpulan elemen dengan penyisipan dan penghapusan elemen yang dilakukan dari sisi/gerbang yang berbeda [2]. Penyisipan dilakukan dari gerbang belakang dan penghapusan dilakukan dari gerbang depan sehingga Queue mempunyai sifat FIFO (First In First Out), yaitu elemen yang pertama masuk akan keluar pertama juga.

Queue merupakan struktur data dinamis, ketika program dijalankan,jumlah elemennya dapat berubah secara dinamis sesuai keperluan. Berikut ini operasi-operasi standar pada queue yaitu [3]:

1) Inisialisasi:Prosedur untuk membuat queue pada kondisi awal, yaitu queue yang masih kosong (belum mempunyai elemen).
2) InQueue: Prosedur untuk memasukkan sebuah elemen baru pada queue. Jumlah elemen Queue akan bertambah satu dan elemen tersebut
merupakan elemen belakang.
3) DeQueue: Prosedur untuk menghapus/mengambil sebuah elemen dari queue. Elemen yang diambil adalah elemen depan dan jumlah elemen queue akan berkurang satu.
4) Size: operasi untuk mendapatkan banyaknya elemen queue.
5) IsEmpty: Prosedur untuk mengetahui apakah queue dalam keadaan kosong atau tidak. Dengan status ini maka dapat dicegah dilakukannya operasi Dequeue dari suatu queue yang kosong.
3. IsFull: Prosedur untuk mengetahui apakah Queue penuh atau tidak. Prosedur ini hanya berlaku untuk queue yang jumlahnya terbatas.

## Guided 

### 1. Implementasi Stack

```C++
#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull() {
    return (top == maksimal);
}

bool isEmpty() {
    return (top == 0);
}

void pushArrayBuku(string data) {
    if (isFull()) {
        cout << "Data telah penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;
    } else {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi) {
    if (isEmpty()) {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack() {
    return top;
}

void changeArrayBuku(int posisi, string data) {
    if (posisi > top) {
        cout << "Posisi melebihi data yang ada" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        arrayBuku[index] = data;
    }
}

void destroyArraybuku() {
    for (int i = top; i >= 0; i--) {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku() {
    if (isEmpty()) {
        cout << "Tidak ada data yang dicetak" << endl;
    } else {
        for (int i = top - 1; i >= 0; i--) {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main() {
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";
    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpty() << endl;
    peekArrayBuku(2);
    popArrayBuku();
    cout << "Banyaknya data = " << countStack() << endl;
    changeArrayBuku(2, "Bahasa Jerman");
    cout << endl;
    cetakArrayBuku();
    cout << "\n";
    destroyArraybuku();
    cout << "Jumlah data setelah dihapus: " << top << endl;
    cetakArrayBuku();

    return 0;
}
```

### Penjelasan Program (Interpretasi)
Program ini merupakan implementasi dari Stack dalam bahasa C++. Berikut ini penjelasan mengenai fungsi yang digunakan dalam program yaitu:

#### 1. Inisialisasi Variabel dan Array
- Dalam program ini, terdapat inisialisasi variabel dan array sebagai berikut:
   - `arrayBuku[5]`: Array yang digunakan untuk menyimpan nama-nama buku dengan ukuran maksimal 5.
   - `maksimal = 5`: Variabel yang menandakan batas maksimal data yang dapat disimpan.
   - `top = 0`: Variabel yang menunjukkan posisi paling atas stack (top) atau jumlah data yang saat ini tersimpan.

#### 2. Fungsi `isFull()`
- Fungsi ini digunakan untuk memeriksa apakah stack sudah penuh atau belum.
- Jika `top` sama dengan `maksimal`, maka stack dianggap penuh dan fungsi akan mengembalikan nilai `true`, sebaliknya `false`.

#### 3. Fungsi `isEmpty()`
- Fungsi ini digunakan untuk memeriksa apakah stack kosong atau tidak.
- Jika `top` sama dengan 0, berarti stack kosong dan fungsi akan mengembalikan nilai `true`, jika tidak `false`.

#### 4. Fungsi `pushArrayBuku()`
- Fungsi ini digunakan untuk menambahkan data buku ke dalam stack.
- Jika stack belum penuh, data buku akan ditambahkan ke posisi `top` dalam array `arrayBuku` dan nilai `top` akan dinaikkan.

#### 5. Fungsi `popArrayBuku()`
- Fungsi ini digunakan untuk menghapus data buku dari stack.
- Jika stack tidak kosong, data buku pada posisi `top - 1` akan dihapus dan nilai `top` akan dikurangi.

#### 6. Fungsi `peekArrayBuku()`
- Fungsi ini digunakan untuk melihat data buku pada posisi tertentu dalam stack.
- Fungsi menerima parameter posisi dan akan menampilkan data buku pada posisi tersebut.

#### 7. Fungsi `countStack()`
- Fungsi ini mengembalikan jumlah data yang tersimpan dalam stack (`top`).

#### 8. Fungsi `changeArrayBuku()`
- Fungsi ini digunakan untuk mengganti data buku pada posisi tertentu dalam stack dengan data baru.
- Jika posisi yang dimasukkan lebih besar dari jumlah data (`top`), maka akan diberikan pesan bahwa posisi melebihi data yang ada.

#### 9. Fungsi `destroyArraybuku()`
- Fungsi ini digunakan untuk mengosongkan seluruh data dalam stack dengan menghapus setiap elemen array dan mengembalikan `top` ke nilai awal (0).

#### 10. Fungsi `cetakArrayBuku()`
- Fungsi ini digunakan untuk mencetak semua data buku dari stack, dimulai dari data paling atas hingga bawah.

#### 11. Fungsi `main()`
- Bagian utama program yang menjalankan serangkaian operasi pada stack buku, antara lain:
   - Menambahkan beberapa buku ke dalam stack.
   - Mencetak seluruh buku yang ada dalam stack.
   - Memeriksa apakah stack penuh atau kosong.
   - Melihat data buku pada posisi tertentu.
   - Menghapus data buku dari stack.
   - Mengganti data buku pada posisi tertentu.
   - Mengosongkan stack dan mencetak jumlah data setelah dihapus.

Oleh karena itu, dengan fungsi-fungsi diatas, program dapat melakukan operasi dasar pada stack buku seperti penambahan, penghapusan, penggantian, dan pencetakan data.  

### Output
<img width="780" alt="Screenshot 2024-05-17 053206" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/d58ef837-b3b6-454f-ad68-4043beb799ad">

### 2. Implementasi Queue

```C++
#include <iostream>
using namespace std;

const int maksimalQueue = 5; // Maksimal antrian
int front = 0; // Penanda depan antrian
int back = 0; // Penanda belakang antrian
string queueTeller[5]; // Array untuk menyimpan antrian

bool isFull() { // Pengecekan antrian penuh atau tidak
    if (back == maksimalQueue) {
        return true; // =1
    } else {
        return false;
    }
}

bool isEmpty() { // Antrian kosong atau tidak
    if (back == 0) {
        return true;
    } else {
        return false;
    }
}

void enqueueAntrian(string data) { // Menambahkan antrian
    if (isFull()) {
        cout << "Antrian penuh" << endl;
    } else {
        if (isEmpty()) { // Jika antrian kosong
            queueTeller[0] = data;
            front++;
            back++;
        } else { // Jika antrian ada isi
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian() { // Mengurangi antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}

int countQueue() { // Menghitung jumlah antrian
    return back;
}

void clearQueue() { // Menghapus semua antrian
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        for (int i = 0; i < back; i++) {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue() { // Melihat isi antrian
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        if (queueTeller[i] != "") {
            cout << i + 1 << ". " << queueTeller[i] << endl;
        } else {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}

int main() {
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
```

### Penjelasan Program (Interpretasi)
Program ini merupakan implementasi dari Queue dalam bahasa C++. Berikut ini penjelasan mengenai fungsi yang digunakan dalam program yaitu:

#### 1. Inisialisasi Variabel dan Array
- Terdapat inisialisasi variabel dan array sebagai berikut:
   - `maksimalQueue = 5`: Konstanta yang menandakan batas maksimal antrian yang dapat disimpan.
   - `front = 0`: Variabel penanda depan antrian.
   - `back = 0`: Variabel penanda belakang antrian.
   - `queueTeller[5]`: Array untuk menyimpan elemen-elemen antrian.

#### 2. Fungsi `isFull()`
- Fungsi ini memeriksa apakah antrian sudah penuh.
- Jika `back` sama dengan `maksimalQueue`, maka antrian dianggap penuh dan akan mengembalikan `true`, jika tidak `false`.

#### 3. Fungsi `isEmpty()`
- Fungsi ini digunakan untuk memeriksa apakah antrian kosong.
- Jika `back` sama dengan 0, berarti antrian kosong dan akan mengembalikan `true`, jika tidak `false`.

#### 4. Fungsi `enqueueAntrian()`
- Fungsi ini menambahkan sebuah elemen ke dalam antrian.
- Jika antrian penuh, akan tercetak pesan bahwa antrian penuh.
- Jika antrian kosong, elemen akan dimasukkan ke indeks 0.
- Jika antrian sudah berisi elemen, elemen baru akan dimasukkan di belakang antrian.

#### 5. Fungsi `dequeueAntrian()`
- Fungsi ini mengurangi (menghapus) elemen dari depan antrian.
- Jika antrian kosong, akan tercetak pesan bahwa antrian kosong.
- Jika antrian tidak kosong, seluruh elemen akan digeser ke depan dan elemen pertama akan dihapus.

#### 6. Fungsi `countQueue()`
- Fungsi ini mengembalikan jumlah elemen yang ada dalam antrian (`back`).

#### 7. Fungsi `clearQueue()`
- Fungsi ini digunakan untuk menghapus semua elemen dalam antrian.
- Jika antrian kosong, akan tercetak pesan bahwa antrian kosong.
- Jika antrian tidak kosong, seluruh elemen akan dihapus dan indeks depan dan belakang antrian direset.

#### 8. Fungsi `viewQueue()`
- Fungsi ini untuk menampilkan isi dari antrian.
- Menampilkan nomor (indeks) antrian beserta elemennya. Jika ada elemen, akan menampilkan nama, jika tidak, akan mencetak "(kosong)".

#### 9. Fungsi `main()`
- Bagian utama program yang menjalankan serangkaian operasi antrian, antara lain:
   - Memasukkan beberapa orang ke dalam antrian.
   - Melihat isi antrian dan jumlah elemen dalam antrian.
   - Menghapus elemen dari depan antrian.
   - Melihat isi baru dari antrian. 
   - Menghapus seluruh elemen antrian dan menampilkan jumlah elemen.

Oleh karena itu, dengan fungsi-fungsi diatas, program dapat melakukan operasi dasar pada antrian seperti penambahan, penghapusan, penghitungan jumlah elemen, dan pengosongan antrian.      

### Output
<img width="780" alt="Screenshot 2024-05-17 053458" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/88db5e48-bc66-43e0-a749-6b78e5d14256">

## Unguided 

### 1. Buatlah program untuk menentukan apakah kalimat tersebut yang diinputkan dalam program stack adalah palindrom/tidak. Palindrom kalimat yang dibaca dari depan dan belakang sama. Jelaskan bagaimana cara kerja programnya!

<img width="780" alt="Screenshot 2024-05-17 054725" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/421fe968-ea92-4f8d-89ff-bb30a6679382">

```C++
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isPalindrome(string kalimat) {
    stack<char> charStack;
    string kalimatDiproses = "";
    for (char c : kalimat) {
        if (isalnum(c)) {
            kalimatDiproses += tolower(c);
            charStack.push(tolower(c));
        }
    }
    for (char c : kalimatDiproses) {
        if (c != charStack.top()) {
            return false;
        }
        charStack.pop();
    }
    return true;
}

int main() {
    string inputKalimat;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, inputKalimat);
    
    if (isPalindrome(inputKalimat)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }
    return 0;
}
```

### Penjelasan Program (Interpretasi)

Program ini merupakan implementasi sederhana dari Stack untuk menentukan sebuah kalimat palidrom. Berikut ini penjelasan mengenai setiap fungsi yang digunakan dalam program yaitu:

#### 1. Library
- Program menggunakan library `iostream` untuk input/output, `stack` untuk struktur data stack, dan `string` untuk tipe data string.

#### 2. Fungsi `isPalindrome(string kalimat)`
- Fungsi ini bertujuan untuk memeriksa apakah sebuah kalimat merupakan palindrom.
- Pada awal fungsi, dibentuk objek stack berisi karakter `stack<char> charStack`.
- Selanjutnya, dibentuk string `kalimatDiproses` yang merupakan versi kalimat input setelah dihilangkan spasi dan tanda baca, serta diubah menjadi huruf kecil.
- Kemudian, dilakukan iterasi untuk memproses setiap karakter pada `kalimat`:
  - Jika karakter adalah huruf atau angka (diperiksa dengan `isalnum`), maka ditambahkan ke `kalimatDiproses` dan dimasukkan ke dalam stack `charStack`.
- Setelah itu, dilakukan iterasi pada `kalimatDiproses`:
  - Jika karakter pada `kalimatDiproses` tidak sama dengan karakter paling atas stack (`charStack.top()`), maka fungsi mengembalikan `false`.
  - Jika karakter sama, maka karakter paling atas stack dihapus dengan `charStack.pop()`.
- Jika semua karakter cocok dan stack kosong, maka fungsi mengembalikan `true`, menandakan kalimat adalah palindrom. Jika tidak, mengembalikan `false`.

#### 3. Fungsi `main()`
- Bagian utama program yang melakukan hal berikut:
   - Meminta pengguna untuk memasukkan sebuah kalimat.
   - Memanggil fungsi `isPalindrome` dengan input kalimat dari pengguna.
   - Berdasarkan hasil pemanggilan fungsi `isPalindrome`, mencetak apakah kalimat tersebut merupakan palindrom atau bukan.

Oleh karena itu, dengan menggunakan fungsi ini, program dapat menentukan apakah sebuah kalimat yang akan diinputkan merupakan palindrom atau tidak dengan menggunakan struktur data stack untuk memproses dan membandingkan karakter-karakter pada kalimat.    

#### Output:
<img width="694" alt="Screenshot 2024-05-17 054913" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/5d487ca9-e43e-4ddc-8425-c512f3bd54d3">

### 2. Ubah guided queue diatas agar menjadi program inputan user dan program menu!

```C++
#include <iostream>
using namespace std;

const int maksimalQueue = 5;
int front = 0;
int back = 0;
string queueTeller[maksimalQueue];

bool isFull() {
    return (back + 1) % maksimalQueue == front;
}

bool isEmpty() {
    return front == back;
}

void enqueueAntrian(string data) {
    if (isFull()) {
        cout << "Antrian penuh" << endl;
    } else {
        queueTeller[back] = data;
        back = (back + 1) % maksimalQueue;
        cout << "Data " << data << " telah ditambahkan ke antrian." << endl;
    }
}

void dequeueAntrian() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        cout << "Data " << queueTeller[front] << " telah dikeluarkan dari antrian." << endl;
        queueTeller[front] = "";
        front = (front + 1) % maksimalQueue;
    }
}

int countQueue() {
    if (back >= front) {
        return back - front;
    } else {
        return maksimalQueue - front + back;
    }
}

void clearQueue() {
    if (isEmpty()) {
        cout << "Antrian kosong" << endl;
    } else {
        cout << "Menghapus semua data dari antrian." << endl;
        while (!isEmpty()) {
            dequeueAntrian();
        }
    }
}

void viewQueue() {
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++) {
        int index = (front + i) % maksimalQueue;
        if (queueTeller[index] != "") {
            cout << index + 1 << ". " << queueTeller[index] << endl;
        } else {
            cout << index + 1 << ". (kosong)" << endl;
        }
    }
}

void displayMenu() {
    cout << "\nPilihan Menu:\n";
    cout << "1. Tambah Antrian\n";
    cout << "2. Keluarkan Antrian\n";
    cout << "3. Lihat Antrian\n";
    cout << "4. Jumlah Antrian\n";
    cout << "5. Hapus Semua Antrian\n";
    cout << "6. Keluar\n";
}

int main() {
    int choice;
    string data;
    
    do {
        displayMenu();
        cout << "Pilih menu (1-6): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan data untuk ditambahkan ke antrian: ";
                cin.ignore();
                getline(cin, data);
                enqueueAntrian(data);
                break;
            case 2:
                dequeueAntrian();
                break;
            case 3:
                viewQueue();
                break;
            case 4:
                cout << "Jumlah antrian = " << countQueue() << endl;
                break;
            case 5:
                clearQueue();
                break;
            case 6:
                cout << "========PROGRAM SELESAI DAN TERIMA KASIH TELAH BERKUNJUNG!=======";
                break;
            default:
                cout << "Pilihan yang Anda masukkan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    } while (choice != 6);

    return 0;
}
```

### Penjelasan Program
Program di atas merupakan implementasi dari Queue (antrian)  yang diimplementasikan menggunakan array yang disesuaikan dengan kondisi antrian sirkular (circular queue). Program ini menyediakan beragam fitur untuk manajemen antrian bank, termasuk penambahan, penghapusan, pelihat, penghitungan jumlah, dan menghapus semua data dari antrian. Berikut iini penjelasan terkait setiap fungsi yang digunakan dalam program yaitu:

#### 1. Inisialisasi Variabel
- Terdapat inisialisasi variabel dan array sebagai berikut:
   - `maksimalQueue = 5`: Konstanta yang menandakan batas maksimal antrian yang dapat disimpan.
   - `front = 0`: Penanda indeks depan antrian.
   - `back = 0`: Penanda indeks belakang antrian.
   - `queueTeller[5]`: Array untuk menyimpan elemen-elemen antrian.

#### 2. Fungsi `isFull()`
- Fungsi ini digunakan untuk memeriksa apakah antrian telah penuh.
- Menggunakan perhitungan modulo untuk menentukan apakah indeks belakang `back` satu langkah sebelum indeks depan `front`.
- Mengembalikan `true` jika antrian penuh, dan `false` jika tidak.

#### 3. Fungsi `isEmpty()`
- Fungsi ini digunakan untuk memeriksa apakah antrian kosong.
- Memeriksa apakah indeks depan `front` sama dengan indeks belakang `back`.
- Mengembalikan `true` jika antrian kosong, dan `false` jika tidak.

#### 4. Fungsi `enqueueAntrian(string data)`
- Fungsi ini digunakan untuk menambahkan elemen ke dalam antrian.
- Memeriksa apakah antrian penuh menggunakan fungsi `isFull()`.
- Jika tidak penuh, menjadikan `data` sebagai elemen di indeks `back` (menyesuaikan dengan kondisi antrian sirkular) dan menggeser indeks `back`.
- Memberikan pesan bahwa data telah ditambahkan ke antrian.

#### 5. Fungsi `dequeueAntrian()`
- Fungsi ini digunakan untuk menghapus elemen dari depan antrian.
- Memeriksa apakah antrian kosong menggunakan fungsi `isEmpty()`.
- Jika tidak kosong, mengeluarkan data pada indeks `front`, mengosongkan element, dan memajukan indeks depan `front`.

#### 6. Fungsi `countQueue()`
- Fungsi ini digunakan untuk menghitung jumlah elemen dalam antrian.
- Jika `back` lebih besar atau sama dengan `front`, maka jumlah antrian akan dihitung sebagai selisih antara `back` dan `front`.
- Jika `front` lebih besar dari `back`, maka perhitungan selisih antara `back` dan `front` dilakukan dengan memperhitungkan kondisi sirkular.

#### 7. Fungsi `clearQueue()`
- Fungsi ini digunakan untuk mengosongkan seluruh antrian.
- Jika antrian kosong, akan dicetak pesan bahwa antrian kosong.
- Jika antrian tidak kosong, maka seluruh elemen akan dihapus dengan menggunakan fungsi `dequeueAntrian()`.

#### 8. Fungsi `viewQueue()`
- Fungsi ini digunakan untuk menampilkan isi dari antrian.
- Menggunakan loop untuk menampilkan semua elemen dalam antrian sesuai dengan kondisi antrian sirkular.

#### 9. Fungsi `displayMenu()`
- Fungsi ini digunakan untuk menampilkan menu pilihan operasi yang tersedia.

#### 10. Fungsi `main()`
- Bagian utama program yang berisi serangkaian operasi yang mengarahkan interaksi dengan pengguna. Program ini melakukan hal berikut:
   - Menampilkan menu pilihan dan meminta pengguna untuk memilih operasi yang diinginkan.
   - Berdasarkan pilihan pengguna, menjalankan operasi yang sesuai diantaranya menambah, menghapus, melihat, menghitung, atau mengosongkan antrian.
   - Terdapat loop `do-while` yang menjalankan program hingga pengguna memilih untuk keluar dari program.

 Oleh karena itu, dengan program ini membantu pengguna dapat melakukan manajemen antrian di dalam program sesuai dengan kebutuhan dengan berbagai operasi seperti menambahkan data ke antrian, mengeluarkan data dari antrian, melihat isi antrian, menghitung jumlah data dalam antrian, menghapus semua data dari antrian, dan keluar dari program. Program tersebut menggunakan struktur data array untuk menyimpan antrian dengan teknik sirkular, sehingga memungkinkan pengelolaan antrian yang efisien.     

### Output
<img width="650" alt="Screenshot 2024-05-17 060500" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/2d87f73b-385f-4a1f-bef9-970272c4ce61">

<img width="650" alt="Screenshot 2024-05-17 060651" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/d0b64910-0ecc-473d-9aeb-d9f212dc12ba">

<img width="650" alt="Screenshot 2024-05-17 060726" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/77fdb169-5fb9-45a5-adfe-3c48bee01948">

<img width="650" alt="Screenshot 2024-05-17 060748" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/ab084801-b14a-49a9-a791-9afdecbaa4bd">

<img width="650" alt="Screenshot 2024-05-17 060805" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/322b14ea-d520-4956-9b6f-0508d672613f">

## Kesimpulan
Stack merupakan kumpulan beberapa elemen yang hanya dapat ditambah dan atau dihapus dari satu ujung (gerbang) yang sama, seolah-olah bertumpuk. Stack mengikuti prinsip LIFO (Last in First Out) yang berarti elemen terakhir masuk akan pertama keluar yang direpresentasikan menggunakan linked list dan array yang disajikan dengan stack. Dalam stack ada beberapa operasi yaitu push, pop, clear, isEmpty, isFull, top, size, peek, dan search. Dalam stack ada istilah overflow adalah jika menyisipkan sebuah elemen dengan stack yang sudah terisi, sedangkan underflow adalah jika mencoba menghapus sebuah elemen dari sebuah stack kosong.

Queue atau antrian adalah struktur data dinamis berupa kumpulan elemen yang memungkinkan penyisipan dan penghapusan elemen yang dilakukan dari sisi yang berbeda,. Penyisipan elemen dilakukan dari gerbang belakang (rear) dan penghapusan dilakukan dari gerbang depan (front). Karena cara ini, Queue memiliki sifat FIFO (First In First Out), yang berarti elemen yang pertama masuk akan keluar pertama juga.

Queue memiliki beberapa operasi dasar diantaranya inisialisasi, Inqueue atau insert queue, dequeue atau delete queue, enqueue, size, isEmpty, isFull, front atau peek, dan rear. Queue juga memiliki jenis-jenis yaitu Queue linear adalah queue yang menggunakan struktur data linear seperti array atau linked list, queue circular adalah queue yang menggunakan struktur data linear seperti array dengan pemanfaatan siklus, dan priority queue adalah queue yang setiap elemennya memiliki prioritas tertentu.

## Referensi
[1] M. Melladia, G. Efendi, and A. Zahmi, Algoritma dan Struktur Data dengan Pemograman Pascal dan Phyton. CV. Gita Lentera, 2024.

[2] E. Erkamim et al., Buku Ajar Algoritma dan Struktur Data. PT. Sonpedia Publishing Indonesia, 2024.

>>>>>>> e2eda1a (laprak 9 done)
[3] R. M. S. Anita Sindar, Struktur Data Dan Algoritma Dengan C++, vol. 1. CV. AA. RIZKY, 2019.
