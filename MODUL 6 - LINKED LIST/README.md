# <h1 align="center">Laporan Praktikum Modul Linked List</h1>
<p align="center">Leonardus Ananto Widodo</p>

## Dasar Teori
Linked list merupakan salah satu metode dalam Algoritma dan Struktur Data yang digunakan untuk mengorganisasi struktur data dalam sebuah sistem. Linked list memiliki keunggulan dibandingkan Array dalam hal menambahkan dan  mengurangi elemennya (Ryan, 2008) [1]. Linked List (Senarai Berantai) adalah salah satu bentuk struktur data, berisi kumpulan data (node) yang tersusun secara sekuensial, saling sambung-menyambung, dinamis dan terbatas. Linked List saling terhubung dengan bantuan variabel pointer. Masing-masing data dalam Linked List disebut dengan node (simpul) yang menempati alokasi memori secara dinamis dan biasanya berupa struct yang terdiri dari beberapa field [2].Operasi dasar dalam linked list berupa insert() untuk memasukkan data, find() untuk mencari suatu data, dan remove() untunk menghapus data [3]. Berdasarkan jenis operasinya, terdapat dua algoritma Linked list, yaitu: 

**1. Single Linked List**

Single linked list terdiri dari elemen-elemen individu, dimana masing masing dihubungkan dengan pointer tunggal. Masing-masing elemen terdiri dari dua bagian, yaitu sebuah data dan sebuah pointer yang disebut dengan pointer next. Dengan menggunakan struktur two-member seperti ini, linked list dibentuk dengan cara menunjuk pointer next suatu elemen ke elemen yang mengikutinya. Pointer next pada elemen terakhir merupakan NULL, yang menunjukkan akhir dari suatu list. Elemen pada awal suatu list disebut head, dan elemen terakhir dari suatu list disebut tail [3]. 

Untuk mengakses elemen dalam single linked list, dimulai dari head dan menggunakan pointer next dari elemen selanjutnya untuk berpindah dari elemen ke elemen berikutnya sampai elemen yang diminta dicapai. Dengan single linked list, list dapat dilintasi hanya satu arah dari head ke tail karena masing-masing elemen tidak terdapat link dengan elemen sebelumnya. Sehingga, apabila kita mulai dari head dan berpindah ke beberapa elemen dan berharap dapat mengakses elemen sebelumnya, kita harus mulai dari head [3].    

**2. Double Linked List**

Elemen-elemen dihubungkan dengan dua pointer dalam satu elemen. Struktur ini menyebabkan list melintas baik ke depan maupun ke belakang. Masing-masing elemen pada double linked list terdiri dari tiga bagian, disamping data dan pointer next, masing-masing elemen dilengkapi dengan pointer prev yang menunjuk ke elemen sebelumnya. Double linked list dibentuk dengan menyusun sejumlah elemen sehingga pointer next menunjuk ke elemen yang mengikutinya dan pointer prev menunjuk ke elemen yang mendahuluinya. Untuk menunjukkan head dari double linked list, maka pointer prev dari elemen pertama menunju NULL. Untuk menunjukkan tail dari double linked list tersebut, maka pointer next dari elemen terakhir menunjuk NULL [3]. 

Untuk melintas kembali melalui double linked list, kita gunakan pointer prev dari elemen yang berurutan pada arah tail ke head. Double linked list mempunyai fleksibilitas yang lebih tinggi daripada single linked list dalam perpindahan pada list. Bentuk ini sangat berguna ketika akan meletakkan suatu elemen pada list dan dapat memilih dengan lebih bijaksana bagaimana memindahkannya. Sebagai contoh, salah satu fleksibilitas dari double linked list adalah dalam hal memindahkan elemen daripada menggunakan single linked list [3].

## Guided 

### 1. Single Linked List

```C++
#include <iostream>
using namespace std;

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node{
    //komponen/member
    int data;
    Node *next;
};
    Node *head;
    Node *tail;
//Inisialisasi Node
void init(){
    head = NULL;
    tail = NULL;
}
// Pengecekan
bool isEmpty(){
    if (head == NULL)
    return true;
    else
    return false;
}
//Tambah Depan
void insertDepan(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
        baru->next = head;
        head = baru;
    }
}
//Tambah Belakang
void insertBelakang(int nilai){
    //Buat Node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;
    if (isEmpty() == true){
        head = tail = baru;
        tail->next = NULL;
    }
    else{
    tail->next = baru;
    tail = baru;
    }
}
//Hitung Jumlah List
int hitungList(){
    Node *hitung;
    hitung = head;
    int jumlah = 0;
    while( hitung != NULL ){
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}
//Tambah Tengah
void insertTengah(int data, int posisi){
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;
        // tranversing
            bantu = head;
            int nomor = 1;
        while( nomor < posisi - 1 ){
            bantu = bantu->next;
            nomor++;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }
}
//Hapus Depan
void hapusDepan() {
    Node *hapus;
    if (isEmpty() == false){
        if (head->next != NULL){
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Belakang
void hapusBelakang() {
    Node *hapus;
    Node *bantu;
    if (isEmpty() == false){
        if (head != tail){
            hapus = tail;
            bantu = head;
            while (bantu->next != tail){
                bantu = bantu->next;
            }
            tail = bantu;
            tail->next = NULL;
        delete hapus;
        }
        else{
            head = tail = NULL;
        }
    }
    else{
        cout << "List kosong!" << endl;
    }
}
//Hapus Tengah
void hapusTengah(int posisi){
    Node *hapus, *bantu, *bantu2;
    if( posisi < 1 || posisi > hitungList() ){
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if( posisi == 1){
        cout << "Posisi bukan posisi tengah" << endl;
    }
    else{
        int nomor = 1;
        bantu = head;
        while( nomor <= posisi ){
            if( nomor == posisi-1 ){
                bantu2 = bantu;
            }
            if( nomor == posisi ){
                hapus = bantu;
            }
            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
    delete hapus;
    }
}
//Ubah Depan
void ubahDepan(int data){
    if (isEmpty() == false){
        head->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Tengah
void ubahTengah(int data, int posisi){
    Node *bantu;
    if (isEmpty() == false){
        if( posisi < 1 || posisi > hitungList() ){
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if( posisi == 1){
            cout << "Posisi bukan posisi tengah" << endl;
        }
        else{
            bantu = head;
            int nomor = 1;
            while (nomor < posisi){
                bantu = bantu->next;nomor++;
            }
            bantu->data = data;
        }
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Ubah Belakang
void ubahBelakang(int data){
    if (isEmpty() == false){
        tail->data = data;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
//Hapus List
void clearList(){
    Node *bantu, *hapus;
    bantu = head;
    while (bantu != NULL){
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}
//Tampilkan List
void tampil(){
    Node *bantu;
    bantu = head;
    if (isEmpty() == false){
        while (bantu != NULL){
            cout << bantu->data << ends;
            bantu = bantu->next;
        }
        cout << endl;
    }
    else{
        cout << "List masih kosong!" << endl;
    }
}
int main(){
    init();
    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7,2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();

    insertTengah(7,1);
    tampil();
    return 0;
}
```

### Penjelasan Program (Interpretasi)
Program ini merupakan implementasi dari sebuah Doubly Linked List dalam bahasa C++. Berikut ini penjelasan mengenai kelas dan fungsi yang digunakan dalam program ini:

1. **Struktur Node**:
   - Mendefinisikan struktur bernama `Node`, yang memiliki dua anggota: `data` (untuk menyimpan nilai) dan `next` (sebuah pointer ke node berikutnya dalam list).

2. **Fungsi Inisialisasi** (`init`):
   - Menginisialisasi pointer `head` dan `tail` menjadi `NULL`, menunjukkan list dalam keadaan kosong.

3. **Fungsi isEmpty**:
   - Memeriksa apakah list kosong dengan memeriksa apakah pointer `head` adalah `NULL`.

4. **Fungsi Penambahan Node**:
   - **insertDepan** dan **insertBelakang**: Menambahkan node baru dengan nilai tertentu di awal atau akhir list, dan jika list dalam keadaan kosong, mengupdate pointer `head` dan `tail` sesuai.
   - **insertTengah**: Memasukkan node baru dengan nilai tertentu pada posisi yang ditentukan dalam list.

5. **Fungsi Penghitungan** (`hitungList`):
   - Menghitung jumlah node dalam list dengan melakukan traversing dan mengembalikan jumlah node.

6. **Fungsi Penghapusan Node**:
   - **hapusDepan** dan **hapusBelakang**: Menghapus node pertama atau terakhir dari list, dengan mengupdate pointer `head` dan `tail`.
   - **hapusTengah**: Menghapus node pada posisi tertentu dalam list.

7. **Fungsi Modifikasi**:
   - **ubahDepan**, **ubahBelakang**, dan **ubahTengah**: Mengubah nilai dari node pertama, terakhir, atau pada posisi tertentu dalam list.

8. **Fungsi Hapus Seluruh List**:
   - Menghapus seluruh list dengan melepaskan alokasi memori untuk setiap node.

9. **Fungsi Tampilkan List** (`tampil`):
   - Melakukan traversing pada list dan mencetak nilai dari setiap node.

10. **Fungsi Utama**:
   - Menginisialisasi list, melakukan serangkaian operasi penambahan, penghapusan, modifikasi, dan menampilkan list pada setiap langkah.

Secara keseluruhan, program ini memberikan implementasi lengkap dari linked list satu arah, termasuk berbagai operasi seperti penambahan, penghapusan, modifikasi, penghitungan, dan tampilan isi list.  

### Output
<img width="780" alt="Screenshot 2024-05-10 073205" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/b8ac05fe-c74a-44b7-ae32-6db111fbfd35">

### 2. Double Linked List

```C++
#include <iostream>
using namespace std;

class Node {
    public:int data;
    Node* prev;
    Node* next;
};
class DoublyLinkedList {
        public:
        Node* head;
        Node* tail;
        DoublyLinkedList() {
            head = nullptr;
            tail = nullptr;
    }
    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = head;
        if (head != nullptr) {
            head->prev = newNode;
        } 
        else {
            tail = newNode;
        }
        head = newNode;
    }
    void pop() {
        if (head == nullptr) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } 
        else {
            tail = nullptr;
        }
        delete temp;
    }
    bool update(int oldData, int newData) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == oldData) {
                current->data = newData;
                return true;
            }
            current = current->next;
        }
        return false;
    }
    void deleteAll() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
    void display() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};


int main() {
    DoublyLinkedList list;
    while (true) {
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Update data" << endl;
        cout << "4. Clear data" << endl;
        cout << "5. Display data" << endl;
        cout << "6. Exit" << endl;int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int data;
                cout << "Enter data to add: ";
                cin >> data;
                list.push(data);
                break;
            }
            case 2: {
                list.pop();
                break;
            }
            case 3: {
                int oldData, newData;
                cout << "Enter old data: ";
                cin >> oldData;
                cout << "Enter new data: ";
                cin >> newData;
                bool updated = list.update(oldData, newData);
                if (!updated) {
                    cout << "Data not found" << endl;
                }
                break;
            }
            case 4: {
                list.deleteAll();
                break;
            }
            case 5: {
                list.display();
                break;
            }
            case 6: {
                return 0;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }
    return 0;
}
```

### Penjelasan Program (Interpretasi)
Program ini merupakan implementasi dari sebuah Doubly Linked List dalam bahasa C++. Berikut ini penjelasan mengenai kelas dan fungsi yang digunakan dalam program ini:

### 1. Kelas Node:
   - Mendefinisikan struktur data untuk menyimpan elemen-elemen dalam Doubly Linked List.
   - Memiliki tiga anggota: `data` (untuk menyimpan nilai), `prev` (pointer ke node sebelumnya), dan `next` (pointer ke node berikutnya).

### 2. Kelas DoublyLinkedList:
   - **Variabel Anggota**:
     - `head`: Pointer ke node pertama dalam list.
     - `tail`: Pointer ke node terakhir dalam list.
   - **Fungsi-Fungsi**:
     - **DoublyLinkedList()**: Konstruktor yang menginisialisasi `head` dan `tail` menjadi `nullptr` saat objek list dibuat.
     - **push(int data)**: Menambahkan node baru dengan nilai tertentu ke awal list.
     - **pop()**: Menghapus node pertama dari list.
     - **update(int oldData, int newData)**: Mengubah nilai dari node yang berisi `oldData` menjadi `newData`.
     - **deleteAll()**: Menghapus seluruh node dalam list.
     - **display()**: Menampilkan nilai dari setiap node dalam list.
   - **Fungsi Main**:
     - Sebuah loop tak terbatas yang memungkinkan pengguna untuk memilih berbagai opsi untuk memanipulasi dan menampilkan Doubly Linked List.

### Operasi Utama:
   - **Menambahkan Data** (Opsi 1): Pengguna dapat menambahkan data baru ke awal list.
   - **Menghapus Data** (Opsi 2): Menghapus data pertama dari list.
   - **Memperbarui Data** (Opsi 3): Memperbarui nilai dari suatu data dalam list dengan nilai baru.
   - **Menghapus Seluruh Data** (Opsi 4): Menghapus semua data dari list.
   - **Menampilkan Data** (Opsi 5): Menampilkan semua data dalam list.
   - **Keluar Program** (Opsi 6): Keluar dari program.

Dengan demikian, program ini memberikan sarana interaktif untuk menambah, menghapus, memperbarui, dan menampilkan data dalam Doubly Linked List.    

### Output
<img width="780" alt="Screenshot 2024-05-10 074006" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/8c7ca446-3bdf-4118-9fc2-2bae61c073c3">

<img width="780" alt="Screenshot 2024-05-10 074042" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/47842013-47b9-460c-952a-d4a6d37dcc72">

## Unguided 

### 1. Single Linked List

<img width="780" alt="Screenshot 2024-05-10 065238" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/f7b5ff0f-ccf8-4e0b-a7a7-da2df07e9a7d">

```C++
#include <iostream>
using namespace std;

struct Node {
    string nama;
    int usia;
    Node *next;
};

Node *head = NULL;

Node* buatNode(string nama, int usia) {
    Node *baru = new Node;
    baru->nama = nama;
    baru->usia = usia;
    baru->next = NULL;
    return baru;
}

void insertBelakang(string nama, int usia) {
    Node *baru = buatNode(nama, usia);
    if (head == NULL) {
        head = baru;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = baru;
}

void tampilkanData() {
    Node *temp = head;
    cout << "Nama\tUsia" << endl;
    while (temp != NULL) {
        cout << temp->nama << "\t" << temp->usia << endl;
        temp = temp->next;
    }
}

void hapusData(string nama) {
    Node *temp = head;
    Node *prev = NULL;
    while (temp != NULL && temp->nama != nama) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Data tidak ditemukan!" << endl;
        return;
    }
    if (prev == NULL) {
        head = temp->next;
    } else {
        prev->next = temp->next;
    }
    delete temp;
}

void ubahData(string nama_lama, string nama_baru, int usia_baru) {
    Node *temp = head;
    while (temp != NULL && temp->nama != nama_lama) {
        temp = temp->next;
    }
    if (temp != NULL) {
        temp->nama = nama_baru;
        temp->usia = usia_baru;
    } else {
        cout << "Data tidak ditemukan!" << endl;
    }
}

int main() {
    cout << "Data Mahasiswa Awal:" << endl;
    cout << "Nama\tUsia" << endl;
    insertBelakang("John", 19);
    insertBelakang("Jane", 20);
    insertBelakang("Michael", 18);
    insertBelakang("Yusuke", 19);
    insertBelakang("Akechi", 20);
    insertBelakang("Hoshino", 18);
    insertBelakang("Karin", 18);
    tampilkanData();

    hapusData("Akechi");
    cout << "\nData setelah penghapusan Akechi:" << endl;
    tampilkanData();

    insertBelakang("Futaba", 18);
    cout << "\nData setelah penambahan Futaba:" << endl;
    tampilkanData();

    ubahData("Michael", "Reyn", 18);
    cout << "\nData setelah pengubahan Michael menjadi Reyn:" << endl;
    tampilkanData();

    return 0;
}
```

### Penjelasan Program (Interpretasi)

Program ini merupakan implementasi sederhana dari linked list tunggal (single linked list) untuk mengelola dan memanipulasi data mahasiswa. Berikut ini penjelasan mendalam tentang setiap fungsi yang digunakan dalam program yaitu:

1. **Struktur Node**:
   - Struktur `Node` digunakan untuk membuat node untuk linked list, dengan tiga bidang: `nama`, `usia`, dan `next` (sebuah pointer ke node berikutnya).

2. **Fungsi buatNode**:
   - `Node* buatNode(string nama, int usia)`: Fungsi ini membuat node baru dengan nilai `nama` dan `usia` yang diberikan, lalu mengembalikan pointer ke node yang baru dibuat.

3. **Fungsi insertBelakang**:
   - `void insertBelakang(string nama, int usia)`: Fungsi ini digunakan untuk memasukkan node baru dengan `nama` dan `usia` tertentu di akhir linked list. Pertama, fungsi membuat node baru menggunakan fungsi `buatNode`, lalu menelusuri list untuk menemukan node terakhir. Setelah node terakhir ditemukan, node baru dipasang pada node terakhir tersebut.

4. **Fungsi tampilkanData**:
   - `void tampilkanData()`: Fungsi ini digunakan untuk menampilkan isi dari linked list dengan menelusuri setiap node dan mencetak nilai `nama` dan `usia`-nya.

5. **Fungsi hapusData**:
   - `void hapusData(string nama)`: Fungsi ini digunakan untuk menghapus node dengan `nama` tertentu. Fungsi ini menelusuri list untuk menemukan node dengan `nama` yang diberikan, lalu menghapusnya dari list.

6. **Fungsi ubahData**:
   - `void ubahData(string nama_lama, string nama_baru, int usia_baru)`: Fungsi ini digunakan untuk memperbarui data (nama dan usia) dari node dengan `nama_lama` yang ditentukan menjadi nilai baru yang diberikan dalam `nama_baru` dan `usia_baru`.

7. **Fungsi main**:
   - Fungsi `main` adalah titik masuk program. Fungsi ini menunjukkan penggunaan fungsi yang telah didefinisikan dengan membuat kumpulan data mahasiswa awal, menampilkannya, melakukan penghapusan, penambahan, dan pembaruan, lalu menampilkan data yang telah dimodifikasi pada setiap langkahnya.

Secara keseluruhan, program ini efektif menunjukkan operasi dasar dari linked list tunggal, termasuk penyisipan, penghapusan, modifikasi, dan penampilan data.  

#### Output:
<img width="694" alt="Screenshot 2024-05-10 070722" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/b46168fb-b0c9-4631-8460-2d8aa085adb1">

### 2. Double Linked List

<img width="694" alt="Screenshot 2024-05-10 071707" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/78520b23-a1ba-45f3-83c6-8dc215e43c7e">

<img width="694" alt="Screenshot 2024-05-10 071735" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/1613753b-17a5-436d-801a-8631e9bbaa3e">

```C++
#include <iostream>
#include <iomanip>

using namespace std;

class Node {
public:
    string namaProduk; // Nama produk
    int harga; // Harga produk
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Fungsi untuk menambahkan produk ke daftar
    void tambah(string namaProduk, int harga) {
        Node* newNode = new Node;
        newNode->namaProduk = namaProduk;
        newNode->harga = harga;
        newNode->prev = nullptr;
        newNode->next = nullptr;

        // Jika daftar kosong, tambahkan node sebagai kepala
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Fungsi untuk menambahkan produk setelah produk tertentu
    void tambahSetelah(string namaProduk, int harga, string namaProdukSebelumnya) {
        Node* current = head;
        while (current != nullptr && current->namaProduk != namaProdukSebelumnya) {
            current = current->next;
        }
        if (current != nullptr) {
            Node* newNode = new Node;
            newNode->namaProduk = namaProduk;
            newNode->harga = harga;
            newNode->prev = current;
            newNode->next = current->next;
            if (current->next != nullptr) {
                current->next->prev = newNode;
            } else {
                tail = newNode;
            }
            current->next = newNode;
        } else {
            cout << "Produk sebelumnya tidak ditemukan" << endl;
        }
    }

    // Fungsi untuk menampilkan daftar produk beserta harga
    void tampilkan() {
        Node* current = head;
        cout << left << setw(20) << "Nama Produk" << "Harga" << endl;
        while (current != nullptr) {
            cout << left << setw(20) << current->namaProduk << right << setw(10) << current->harga << endl;
            current = current->next;
        }
        cout << endl;
    }

    // Fungsi untuk menghapus produk berdasarkan nama
    void hapusBerdasarkanNama(string namaProduk) {
        Node* current = head;
        while (current != nullptr && current->namaProduk != namaProduk) {
            current = current->next;
        }
        if (current != nullptr) {
            if (current->prev != nullptr) {
                current->prev->next = current->next;
            } else {
                head = current->next;
            }
            if (current->next != nullptr) {
                current->next->prev = current->prev;
            } else {
                tail = current->prev;
            }
            delete current;
        } else {
            cout << "Produk tidak ditemukan" << endl;
        }
    }

    // Fungsi untuk mengupdate nama produk dan harga berdasarkan nama produk lama
    bool update(string namaProdukLama, string namaProdukBaru, int hargaBaru) {
        Node* current = head;
        while (current != nullptr) {
            if (current->namaProduk == namaProdukLama) {
                current->namaProduk = namaProdukBaru;
                current->harga = hargaBaru;
                return true;
            }
            current = current->next;
        }
        return false;
    }

    // Fungsi untuk menghapus semua produk dari daftar
    void hapusSemua() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
};

int main() {
    DoublyLinkedList list;

    // Menambahkan produk awal ke daftar
    list.tambah("Originote", 60000);
    list.tambah("Somethinc", 150000);
    list.tambah("Skintific", 100000);
    list.tambah("Wardah", 50000);
    list.tambah("Hanasui", 30000);

    // Menampilkan produk awal
    cout << "Daftar Produk Awal:" << endl;
    list.tampilkan();

    // Menu operasi
    while (true) {
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Update Data" << endl;
        cout << "4. Tambah Data Urutan Tertentu" << endl;
        cout << "5. Hapus Data Urutan Tertentu" << endl;
        cout << "6. Hapus Seluruh Data" << endl;
        cout << "7. Tampilkan Data" << endl;
        cout << "8. Exit" << endl;

        int pilihan;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                string namaProduk;
                int harga;
                cout << "Masukkan nama produk: ";
                cin >> namaProduk;
                cout << "Masukkan harga: ";
                cin >> harga;
                list.tambah(namaProduk, harga);
                break;
            }
            case 2: {
                string namaProduk;
                cout << "Masukkan nama produk yang ingin dihapus: ";
                cin >> namaProduk;
                list.hapusBerdasarkanNama(namaProduk);
                break;
            }
            case 3: {
                string namaProdukLama, namaProdukBaru;
                int hargaBaru;
                cout << "Masukkan nama produk yang ingin diupdate: ";
                cin >> namaProdukLama;
                cout << "Masukkan nama produk baru: ";
                cin >> namaProdukBaru;
                cout << "Masukkan harga baru: ";
                cin >> hargaBaru;
                bool berhasil = list.update(namaProdukLama, namaProdukBaru, hargaBaru);
                if (!berhasil) {
                    cout << "Data tidak ditemukan" << endl;
                }
                break;
            }
            case 4: {
                string namaProduk, namaProdukSebelumnya;
                int harga;
                cout << "Masukkan nama produk yang ingin ditambahkan: ";
                cin >> namaProduk;
                cout << "Masukkan harga: ";
                cin >> harga;
                cout << "Masukkan nama produk sebelumnya: ";
                cin >> namaProdukSebelumnya;
                list.tambahSetelah(namaProduk, harga, namaProdukSebelumnya);
                break;
            }
            case 5: {
                string namaProduk;
                cout << "Masukkan nama produk yang ingin dihapus: ";
                cin >> namaProduk;
                list.hapusBerdasarkanNama(namaProduk);
                break;
            }
            case 6: {
                list.hapusSemua();
                break;
            }
            case 7: {
                list.tampilkan();
                break;
            }
            case 8: {
                return 0;
            }
            default: {
                cout << "Pilihan tidak valid" << endl;
                break;
            }
        }
    }

    return 0;
}
```

### Penjelasan Program
Program di atas merupakan implementasi dari Double Linked List (senarai berantai ganda) yang digunakan untuk mengelola daftar produk. Berikut aini penjelasan terkait setiap fungsi yang digunakan dalam program yaitu:

1. **Node Class**:
   - Kelas `Node` digunakan untuk mewakili node dalam Doubly Linked List. Setiap node memiliki dua pointer (`prev` dan `next`) serta dua atribut, yaitu `namaProduk` (nama produk) dan `harga` (harga produk).

2. **DoublyLinkedList Class**:
   - Kelas `DoublyLinkedList` menyediakan semua fungsi untuk operasi pada Doubly Linked List, seperti penambahan, penghapusan, pembaruan, dan penampilan data. 

3. **tambah Function**:
   - `void tambah(string namaProduk, int harga)`: Fungsi ini digunakan untuk menambahkan node baru (produk baru) ke akhir daftar produk. Jika daftar produk kosong, node baru ditetapkan sebagai kepala. Jika tidak, node baru disambungkan ke ekor daftar.

4. **tambahSetelah Function**:
   - `void tambahSetelah(string namaProduk, int harga, string namaProdukSebelumnya)`: Fungsi ini memungkinkan penambahan produk setelah produk tertentu dalam daftar. Jika produk sebelumnya ditemukan, node baru akan disisipkan setelahnya. 

5. **tampilkan Function**:
   - `void tampilkan()`: Fungsi ini digunakan untuk menampilkan semua produk (nama dan harga) dalam daftar dengan format yang rapi.

6. **hapusBerdasarkanNama Function**:
   - `void hapusBerdasarkanNama(string namaProduk)`: Fungsi ini memungkinkan penghapusan produk berdasarkan nama. Jika produk ditemukan, node yang sesuai akan dihapus dari daftar.

7. **update Function**:
   - `bool update(string namaProdukLama, string namaProdukBaru, int hargaBaru)`: Fungsi ini mengizinkan pembaruan nama produk dan harga berdasarkan nama produk lama yang diberikan.

8. **hapusSemua Function**:
   - `void hapusSemua()`: Fungsi ini memungkinkan penghapusan semua produk dari daftar dengan menghapus semua node satu per satu.

9. **main Function**:
   - Fungsi `main` adalah jalur utama program yang memberikan opsi kepada pengguna untuk menambahkan, menghapus, memperbarui, atau menampilkan produk, serta mengakhiri program.

Dengan menggunakan Double Linked List, program ini memberikan kemampuan untuk mengelola daftar produk dengan fleksibilitas yang lebih besar, termasuk kemampuan untuk menambah, menghapus, memperbarui, dan menampilkan data produk sesuai kebutuhan.  

### Output
<img width="777" alt="Screenshot 2024-05-10 072801" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/a1b06852-a9a1-4ad0-a3b6-bbb1eef51995">

<img width="777" alt="Screenshot 2024-05-10 072832" src=" https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/4f0ec638-c374-4e13-8ea3-53240f30e409">

## Kesimpulan
Linked list adalah sebuah kumpulan node yang membentuk urutan linier yang elemen-elemen datanya menunjuk ke node berikutnya dengan menggunakan sebuah pointer, biasanya menggunakan 'next' ke node berikutnya dalam sebuah daftar. Terdapat beberapa jenis linked list, linked list non circular yaitu struktur data dinamis terdiri dari node-node yang saling terhubung dengan bantuan sebuah pointer, linked list circular yaitu struktur data yang terdiri dari elemen-elemen yang saling terhubung melalui pointer dan elemen terakhirnya mengarah kembali ke alemen pertama sehingga membentuk sebuah lingkaran, single linked list yaitu setiap node berisi sejumlah data yang hanya satu pointer mengarah pada node berikutnya, dan double linked list adalah struktur data linear terdiri dari node yang saling terhubung dan setiap node memiliki tiga elemen yaitu data, pointer prev, dan pointer next.

## Referensi
[1] H. Wijaya, W. S. Wardhono, and I. Arwani, "Implementasi Linked List pada Interaksi Antar Marker Augmented Reality untuk Operand dan Operator Aritmetika," J. Pengembangan Teknol. Informasi Dan Ilmu Komputer, vol. 2, no. 9, pp. 3328-3332, 2018.

[2] A. K. Putra, "Single Linked List."

[3] R. M. S. Anita Sindar, "Struktur Data Dan Algoritma Dengan C++," vol. 1, CV. AA. RIZKY, 2019.
