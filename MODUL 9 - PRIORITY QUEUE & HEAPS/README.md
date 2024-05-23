# <h1 align="center">Laporan Praktikum Modul Priority Queue & Heaps</h1>
<p align="center">Leonardus Ananto Widodo</p>

## Dasar Teori

### 1. Priority Queue

Priority Queue adalah jenis struktur data yang memungkinkan penyimpanan elemen dengan prioritas terkait. Elemen dengan prioritas tertinggi ditempatkan di depan antrian, sehingga dapat diakses dengan cepat. Struktur data ini sering kali diimplementasikan dengan menggunakan Heap atau Binary Search Tree. Kegunaan Priority Queue meluas ke berbagai bidang. Misalnya, dalam sistem operasi, CPUdapat menggunakan Priority Queue untuk mengatur urutan eksekusi tugas berdasarkan prioritas. Dalam algoritma pencarian, seperti algoritma A* untuk pencarian jalur terpendek,Priority Queue digunakan untuk mengatur simpul-simpul yang harus dieksplorasi berdasarkan estimasi jarak [3].

Priority queue adalah bentuk suatu struktur data yang berbasiskan struktur queue. Pada dasarnya priority queue memiliki tiga jenis prioritas yaitu tinggi, sedang, dan rendah. Priority queue umumnya diikuti dengan beberapa set instruksi, seperti insert dan delete, serta mencari nilai maksimum atau minimum. Algoritma ini dapat dijalankan secara parelel untuk mencapai kecepatan waktu eksekusi yang tinggi dari sebuah struktur data. Algoritma priority queue bekerja berdasarkan prinsip Higher Priority In First Out (HPIFO) dimana pekerjaan yang memiliki prioritas tertinggi akan diselesaikan lebih dulu [1]. Terdapat dua jenis algoritma priority queue, yaitu:
- Ascending Priority Queue, dimana data diurutkan dengan prioritas naik
- Descending Priority Queue, dimana data diurutkan dengan prioritas menurun

Selain itu terdapat dua operasi dasar yang digunakan untuk mengubah data pada algoritma priority queue, yaitu [1]:
- Enqueue, yaitu proses menambahkan data ke akhir urutan data.
- Dequeue, yaitu proses menghapus data pada awal urutan data

**Perbadaan Priority Queue dan Queue**

<img width="380" alt="Screenshot 2024-05-23 070628" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/dbd0f0e5-c440-44b9-b746-f44451e3e32d">


**Keunggulan Priority Queue**
1) Membantu untuk mengakses elemen dengan cara yang lebih cepat. Hal ini karena elemen dalam antrian prioritas diurutkan berdasarkan prioritas, seseorang dapat dengan mudah mengambil elemen dengan prioritas tertinggi tanpa harus mencari di seluruh antrian [3].
2) Pengurutan elemen dalam Priority Queue dilakukan secara dinamis. Elemen-elemen dalam antrean prioritas dapat diperbarui nilai prioritasnya, yang memungkinkan antrean untuk mengurutkan ulang secara dinamis saat prioritas berubah [3].
3) Algoritma yang efisien dapat diimplementasikan. Antrean prioritas digunakan dalam banyak algoritme untuk meningkatkan efisiensinya, seperti algoritme Dijkstra untukmenemukan jalur terpendek dalam graf dan algoritme pencarian A* untuk pencarian jalur [3].
4) Termasuk dalam sistem real-time. Hal ini karena antrean prioritas memungkinkan untuk mengambil elemen dengan prioritas tertinggi dengan cepat, antrean tersebut sering digunakan dalam sistem waktu nyata di mana waktu adalah hal yang sangat penting [3].
**Kekurangan Priority Queue**
1. Kompleksitas tinggi
Antrean prioritas lebih kompleks daripada struktur data sederhana seperti larik dan daftar tertaut, dan mungkin lebih sulit untuk diterapkan dan dipelihara [3].
2. Konsumsi memori yang tinggi.
Menyimpan nilai prioritas untuk setiap elemen dalam antrian prioritas dapat menghabiskan memori tambahan, yang mungkin menjadi perhatian dalam sistem dengan sumber daya terbatas [3].
3. Tidak selalu merupakan struktur data yang paling efisien.
Dalam beberapa kasus, struktur data lain seperti tumpukan atau pohon pencarian biner mungkin lebih efisien untuk operasi tertentu, seperti menemukan elemen minimum atau maksimum dalam antrean [3].
4. Kadang-kadang kurang dapat diprediksi
Hal ini karena urutan elemen dalam antrean prioritas ditentukan oleh nilai prioritasnya, urutan pengambilan elemen mungkin kurang dapat diprediksi dibandingkan dengan struktur data lain seperti tumpukan atau antrean, yang mengikuti first-in first-out (FIFO) atau last-in first-out (LIFO) [3].

### 2. Heaps 

Heap adalah sebuah binary tree dengan ketentuan sebagai berikut [2]:
a. Tree harus complete binary tree

    - Semua level tree mempunyai level mempunyai simpul maksimum kecuali pada level terakhir.
    
    - Pada level terakhir, node tersusun dari kiri ke kanan tanpa ada yang dilewati.
    
b. Perbandingan nilai suatu node dengan nilai node child-nya mempunyai ketentuan berdasarkan jenis heap, diantaranya yaitu:

    - Max Heap mempunyai ketentuan bahwa nilai suatu node lebih besar atau sama dengan dari nilai child-nya.
    
    - Min Heap mempunyai ketentuan bahwa nilai suatu node lebih kecil atau sama dengan dari nilai child-nya.

<img width="480" alt="Screenshot 2024-05-23 065434" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/34cc2a16-7484-48a2-b7df-94a53ef6ae5c">

<img width="480" alt="Screenshot 2024-05-23 065454" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/613fdb2b-ff70-4ac4-a693-5565da8198f4">

**Heap dan Operasinya**

contoh penggunaan heap adalah pada persoalan yang mempertahankan antrian prioritas (priority queue). Dlam antrian prioritas, elemen yang dihapus adalah elemen yang mempunyai prioritas terbesar (atau terkecil, tergantung keperluan) dan elemen inilah yang selalu terletak di akar (root). Suatu heap dapat sewaktu-waktu berubah baik itu dengan penambahan elemen (insert) dan penghapusan elemen (delete) [2].

Ada beberapa operasi yang dapat terjadi di sebuah heap, yaitu [2]:
1) Reorganisasi Heap (Mengatur ulang heap)
2) Membentuk Heap (Mengatur binary tree agar menjadi heap)
3) Penyisipan Heap (Menyisipkan node baru)
4) Penghapusan Heap (Menghapus node root)
5) Pengurutan Heap (Heap sort)

## Guided 

```C++
#include <iostream>
#include <algorithm>

int H[50];
int heapSize = -1;

int parent(int i) {
	return (i - 1) / 2;
}

int leftChild(int i) {
	return ((2 * i) + 1);
}

int rightChild(int i) {
	return ((2 * i) + 2);
}

void shiftUp(int i) {
	while (i > 0 && H[parent(i)] < H[i]) {
		std::swap(H[parent(i)], H[i]);
		i = parent(i);
	}
}

void shiftDown(int i) {
	int maxIndex = i;
	int l = leftChild(i);
	if (l <= heapSize && H[l] > H[maxIndex]) {
		maxIndex = l;
	}
	int r = rightChild(i);
	if (r <= heapSize && H[r] > H[maxIndex]) {
		maxIndex = r;
	}
	if (i != maxIndex) {
		std::swap(H[i], H[maxIndex]);
		shiftDown(maxIndex);
	}
}

void insert(int p) {
	heapSize = heapSize + 1;
	H[heapSize] = p;
	shiftUp(heapSize);
}

int extractMax() {
	int result = H[0];
	H[0] = H[heapSize];
	heapSize = heapSize - 1;
	shiftDown(0);
	return result;
}

void changePriority(int i, int p) {
	int oldp = H[i];
	H[i] = p;
	if (p > oldp) {
		shiftUp(i);
	} else {
		shiftDown(i);
	}
}

int getMax() {
	return H[0];
}

void remove(int i) {
	H[i] = getMax() + 1;
	shiftUp(i);
	extractMax();
}

int main() {
	insert(45);
	insert(20);
	insert(14);
	insert(12);
	insert(31);
	insert(7);
	insert(11);
	insert(13);
	insert(7);

	std::cout << "Priority Queue : ";
	for (int i = 0; i <= heapSize; ++i) {
		std::cout << H[i] << " ";
	}

	std::cout << "\n";

	std::cout << "Node with maximum priority : " << extractMax() << "\n";
	
	std::cout << "Priority queue after extracting maximum : ";

	for (int i = 0; i <= heapSize; ++i) {
		std::cout << H[i] << " ";
	}
	std::cout << "\n";

	changePriority(2, 49);
	std::cout << "Priority queue after priority change : ";
	for (int i = 0; i <= heapSize; ++i) {
		std::cout << H[i] << " ";
	}
	std::cout << "\n";

	remove(3);
	std::cout << "Priority queue after removing the element : ";
	for (int i = 0; i <= heapSize; ++i) {
		std::cout << H[i] << " ";
	}
	
	return 0;
}
```

### Penjelasan Program (Interpretasi)
 Program di atas merupakan implementasi dari struktur data antrian prioritas (Priority Queue) dengan menggunakan struktur data heap. Berikut ini penjelasan terkait fungsi-fungsi yang digunakan dalam program yaitu:

1. `parent(int i)`: Merupakan fungsi yang mengembalikan indeks dari induk sebuah node dalam heap berdasarkan indeks node tersebut.

2. `leftChild(int i)`: Fungsi ini mengembalikan indeks dari anak kiri sebuah node dalam heap berdasarkan indeks node tersebut.

3. `rightChild(int i)`: Sama seperti fungsi sebelumnya, namun mengembalikan indeks dari anak kanan sebuah node dalam heap.

4. `shiftUp(int i)`: Fungsi ini digunakan setelah sebuah node dimasukkan ke dalam heap. Fungsi ini akan memastikan bahwa properti heap (nilai node-parent selalu lebih besar dari nilai node-child) tetap terjaga dengan memindahkan node ke atas (menuju akar) jika nilai node tersebut lebih besar dari nilai node induknya.

5. `shiftDown(int i)`: Sebaliknya, fungsi ini digunakan saat ekstraksi nilai maksimum dari heap. Fungsi ini memastikan bahwa setelah ekstraksi, properti heap tetap terjaga dengan cara memindahkan node ke bawah (menuju daun) jika nilai node tersebut lebih kecil dari salah satu atau kedua anaknya.

6. `insert(int p)`: Fungsi untuk memasukkan elemen baru ke dalam priority queue dengan mempertahankan properti heap. Elemen baru dimasukkan ke akhir heap dan kemudian di-shift up sesuai dengan nilai prioritasnya.

7. `extractMax()`: Menghapus dan mengembalikan elemen dengan nilai prioritas tertinggi dari priority queue (heap). Setelah nilai yang tertinggi diekstraksi, properti heap dipertahankan dengan memindahkan node yang sesuai ke posisi yang benar menggunakan `shiftDown`.

8. `changePriority(int i, int p)`: Fungsi untuk mengubah nilai prioritas sebuah elemen dalam priority queue. Fungsi ini akan mengubah nilai elemen dan kemudian memeriksa apakah perlu dilakukan shift up atau shift down.

9. `getMax()`: Mengembalikan nilai prioritas tertinggi (tanpa menghapusnya) dari priority queue.

10. `remove(int i)`: Menghapus elemen pada posisi tertentu dalam priority queue dengan mengubah nilainya menjadi lebih dari nilai maksimum kemudian memanggil `shiftUp` dan `extractMax` untuk memperbarui priority queue.

Program kemudian menguji fungsi-fungsi ini dengan memasukkan beberapa nilai ke dalam priority queue, mengekstrak nilai maksimum, mengubah prioritas, dan menghapus elemen. Hasil dari setiap operasi ditampilkan ke layar.    

### Output
<img width="780" alt="Screenshot 2024-05-22 062821" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/c490299d-323e-4e46-b1b8-a7926e5832b4">

## Unguided 

### 1. Modifikasi guided diatas yang mana heap dikonstruksi secara manual berdasarkan user!

```C++
#include <iostream>
#include <algorithm>

using namespace std;

// Deklarasi array untuk menyimpan elemen heap
int H[50];
// Deklarasi variabel untuk menyimpan ukuran heap
int heapSize = -1;

// Fungsi untuk mendapatkan indeks parent dari node i
int parent(int i) {
    return (i - 1) / 2;
}

// Fungsi untuk mendapatkan indeks anak kiri dari node i
int leftChild(int i) {
    return ((2 * i) + 1);
}

// Fungsi untuk mendapatkan indeks anak kanan dari node i
int rightChild(int i) {
    return ((2 * i) + 2);
}

// Fungsi untuk menggeser node ke atas untuk mempertahankan properti max-heap
void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

// Fungsi untuk menggeser node ke bawah untuk mempertahankan properti max-heap
void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= heapSize && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= heapSize && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

// Fungsi untuk memasukkan elemen baru ke dalam heap
void insert(int p) {
    heapSize = heapSize + 1;
    H[heapSize] = p;
    shiftUp(heapSize);
}

// Fungsi untuk mengekstrak elemen maksimum dari heap
int extractMax() {
    int result = H[0];
    H[0] = H[heapSize];
    heapSize = heapSize - 1;
    shiftDown(0);
    return result;
}

// Fungsi untuk mengubah prioritas elemen di indeks i
void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

// Fungsi untuk mendapatkan elemen maksimum dari heap
int getMax() {
    return H[0];
}

// Fungsi untuk menghapus elemen di indeks i dari heap
void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

// Fungsi utama untuk menjalankan program
int main() {
    int a;
    cout << "Enter the number of elements in the heap : ";
    cin >> a;

    cout << "Enter the elements of the heap : ";
    for (int i = 0; i < a; ++i) {
        int element;
        cin >> element;
        insert(element);
    }

    cout << "Priority Queue : ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";
    }
    cout << "\n";

    cout << "Node with maximum priority : " << extractMax() << "\n";

    cout << "Priority queue after extracting maximum : ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";
    }
    cout << "\n";

    changePriority(2, 49);
    cout << "Priority queue after priority change : ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";
    }
    cout << "\n";

    remove(3);
    cout << "Priority queue after removing the element : ";
    for (int i = 0; i <= heapSize; ++i) {
        cout << H[i] << " ";
    }
    return 0;
}
```

### Penjelasan Program (Interpretasi)

 Program di atas adalah implementasi dari struktur data antrian prioritas (Priority Queue) dengan menggunakan struktur data heap dalam bahasa C++. Berikut ini penjelasan terkait dengan fungsi-fungsi yang digunakan dalam program yaitu:

1. `parent(int i)`: fungsi ini digunakan untuk mengembalikan indeks dari node parent dari node dengan indeks `i` dalam struktur heap.

2. `leftChild(int i)`: fungsi ini mengembalikan indeks dari node anak kiri dari node dengan indeks `i` dalam struktur heap.

3. `rightChild(int i)`: fungsi ini mengembalikan indeks dari node anak kanan dari node dengan indeks `i` dalam struktur heap.

4. `shiftUp(int i)`: fungsi ini digunakan setelah menyisipkan elemen baru ke dalam heap untuk memastikan bahwa properti max-heap dipertahankan dengan memindahkan elemen ke posisi yang sesuai dengan nilai prioritasnya ke atas hingga properti terpenuhi.

5. `shiftDown(int i)`: fungsi digunakan setelah ekstraksi elemen maksimum dari heap untuk memastikan bahwa properti max-heap dipertahankan dengan memindahkan elemen ke posisi yang sesuai dengan nilai prioritasnya ke bawah hingga properti terpenuhi.

6. `insert(int p)`: merupakan fungsi untuk menyisipkan elemen dengan nilai prioritas `p` ke dalam heap. Saat elemen dimasukkan, fungsi `shiftUp` dipanggil untuk memastikan properti max-heap terjaga.

7. `extractMax()`: fungsi ini digunakan untuk menghapus dan mengembalikan elemen dengan nilai prioritas tertinggi (elemen teratas) dari heap. Setelah ekstraksi, properti max-heap dipertahankan dengan memanggil `shiftDown`.

8. `changePriority(int i, int p)`: fungsi ini mengubah nilai prioritas dari elemen di indeks `i` menjadi `p`. Jika nilai prioritas baru lebih besar dari sebelumnya, fungsi `shiftUp` dipanggil, dan jika lebih kecil atau sama, fungsi `shiftDown` dipanggil.

9. `getMax()`: fungsi ini mengembalikan nilai prioritas tertinggi (tanpa menghapusnya) yang terdapat di heap.

10. `remove(int i)`: fungsi ini menghapus elemen pada indeks `i` dari heap dengan cara menetapkan nilai elemen tersebut lebih besar dari nilai maksimum kemudian memperbarui heap menggunakan `shiftUp` dan `extractMax`.

Program kemudian meminta pengguna untuk memasukkan jumlah elemen dalam heap dan elemen-elemen itu sendiri. Setelah itu, program menunjukkan hasil operasi-operasi seperti ekstraksi nilai maksimum, perubahan prioritas, dan penghapusan elemen pada posisi tertentu dalam priority queue.

#### Output:
<img width="694" alt="Screenshot 2024-05-22 062736" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/dab89f7d-db10-4d31-9b77-abd0e7aced26">

## Kesimpulan

Priority queue adalah struktur data yang memungkinkan untuk menyimpan elemen-elemen dengan prioritas tertentu, dengan prioritas yang lebih tinggi diproses terlebih dahulu dibandingkan dengan elemen yang lebih rendah. Ada beberapa cara untuk mengimplementasikan priority queue, termasuk menggunakan array, linked list, heap, atau binary serach tree. Heap adalah struktur data binary tree lengkap yang memenuhi properti heap, di mana setiap simpul yang diberikan selalu lebih besar dari simpul-simpul lainnya. Heap dibagi menjadi dua yaitu heap maksimum dan heap minimum. Ada beberapa operasi pada heap heapify, find-max, insertion, deletion, dan extract min-max.

## Referensi
[1] Nurhadi, M. I., Saputra, R. E., and Setianingsih, C. "Manajemen Dan Kendali Beban Perangkat Elektronik Berbasis Web Dengan Algoritma Priority Queue." eProceedings of Engineering, vol. 8, no. 2, 2021.

[2] Heryandi, A. "Bab XI - Heap.pdf." [Online]. Available: https://repository.unikom.ac.id/33061/1/Bab%20XI%20-%20Heap.pdf. [Accessed: 2010].

[3] "Makalah Priority Queue revisi." [Online]. Available: https://www.scribd.com/document/657230171/Makalah-Priority-Queue-revisi. [Accessed: Date Accessed].
