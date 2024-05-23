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