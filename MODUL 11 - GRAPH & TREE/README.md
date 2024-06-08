# <h1 align="center">Laporan Praktikum Modul Graph dan Tree</h1>
<p align="center">Leonardus Ananto Widodo</p>

## Dasar Teori

# 1. Graph

Graph adalah struktur data yang berbentuk network/jaringan yang menghubungkan antar elemen secara many-to-many [1]. Suatu graph terdiri dari suatu himpunan tak kosong yang masing-masing unsurnya disebut titik (vertex) dan suatu himpunan pasangan tak berurutan dari titik- titik tersebut yang disebut sisi (edge) [2]. Struktur data linear pada graph terbentuk karena keterhubungan sekuensial antara entitas data [1]. Struktur data tree terbentuk karena keterhubungan hierarkis [1]. Struktur data graph terbentuk karena keterhubungan tak terbatas antara entitas data [1]. Contoh graph seperti Informasi topologi jaringan dan keterhubungan antar kota-kota. Keterhubungan dan jarak tidak langsung antara dua kota sama dengan data keterhubungan langsung dari kota-kota lainnya yang memperantarainya [1]. Cara  merepresentasikan  sebuah graf  yang  paling  umum adalah dengan diagram. Dalam diagram tersebut, titik-titik dinyatakan sebagai noktah dan tiap sisi dinyatakan sebagai kurva sederhana yang menghubungkan tiap dua titik. (Deo 2016) [2]. Graph terdiri dari himpunan verteks (node) dan himpunan sisi (edge, arc). Verteks menyatakan entitasentitas data dan sisi menyatakan keterhubungan antara verteks [1]. Notasi matematis graph G adalah G = (V, E) [1]. Sebuah sisi antara verteks x dan y ditulis {x,y}. Subgraph adalah graph yang merupakan suatu subset (bagian) graph yang connected [1]. Graph H = (V1, E1) disebut subgraph dari graph G jika V1 adalah himpunan bagian dari V dan E1 himpunan bagian dari E [1].   

**Jenis-Jenis Graph**

1) Directed Graph (Graf berarah)
   
    Graf yang setiap sisinya diberikan orientasi arah [2]. Misalnya : {x,y} yaitu arah x ke y, bukan dari y ke x; x disebut origin dan y disebut terminus. Secara notasi sisi digraph ditulis sebagai vektor (x, y) [1].
    Contoh Digraph G = {V, E} :
    V = {A, B, C, D, E, F, G, H, I,J, K, L, M}
    E = {(A,B),(A,C), (A,D),(A,F),(B,C),(B,H),(C,E),(C,G),(C,H),(C,I),(D,E),(D,F),(D,G),(D,K),(D,L),(E,F),(G,I),(G,K),(H,I),(I,J),(I,M),(J,K),(J,M),(L,K),(L,M)}.

<img width="380" alt="Screenshot 2024-06-08 063157" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/cf319dbf-6ef6-4f88-904a-9a16722ff388">

2) Undirected Graph (Graf Tak Berarah)
   
    Graf yang sisinya tidak mempunyai orientasi arah [2]. Misalnya setiap sisi {x, y} berlaku pada kedua arah: baik x ke y maupun y ke x. Secara grafis sisi pada undigraph tidak memiliki mata panah dan secara notasional menggunakan kurung kurawal [1].
    Contoh Undigraph G = {V, E}
    V = {A, B, C, D, E, F, G, H, I,J, K, L, M}
    E = {{A,B},{A,C},{A,D},{A,F},{B,C},{B,H},{C,E},{C,G},{C,H},{C,I},{D,E},{D,F},{D,G},{D,K},{D,L},{E,F},{G,I},{G,K},{H,I},{I,J},{I,M}, {J,K},{J,M},{L,K},{L,M}}.
    
    Khusus pada undigraph bisa sebagai digraph (panah di kedua ujung edge berlawanan) [1]. Struktur data linear maupun hirarkis adalah juga graph. Node-node pada struktur linear ataupun hirarkis adalah verteks-verteks dalam pengertian graph dengan sisi-sisinya menyusun node-node tersebut secara linear atau hirarkis. Struktur data linear adalah juga tree dengan pencabangan pada setiap node hanya satu atau tidak ada [1].

<img width="380" alt="Screenshot 2024-06-08 063355" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/edc6349e-e072-4da4-abf0-2cd4e984ca49">

3) Weight Graph (Graf Berbobot)
   
    Graph dengan sisi mempunyai Bobot/ Biaya. “Biaya" ini bisa mewakili banyak aspek biaya ekonomi suatu aktifitas, jarak geografis /tempuh, waktu tempuh, tingkat kesulitan, dan lain sebagainya [1]. 
    Contoh:
    Graph ini merupakan Undirected Weighted Graph. Order dari verteks A = 4, verteks B = 3, dst. Adjacentcy list dari D adalah = {A,E,F,G,K,L} [1].

**Representasi Graph dengan Matriks**

Representasi Matriks Keterhubungan Langsung (Adjacency Matrix) Matriks digunakan untuk himpunan adjacency setiap verteks [1]. Baris berisi vertex asal adjacency, sedangkan kolom berisi vertex tujuan adjacency. Bila sisi graph tidak mempunyai bobot, maka [x, y] adjacency disimbolkan dengan 1 dan 0 bila tidak adjacency. Bila sisi graph mempunyai bobot, maka [x, y] adjacency disimbolkan dengan bobot sisi tersebut, dan bila tidak disimbolkan ¥ [1].

# 2. Tree

Tree (pohon) merupakan salah satu jenis struktur data yang terdiri dari simpul-simpul (nodes) yang saling terhubung (edges) satu sama lain secara hierarkis [2]. Nodes dalam implementasinya dapat merepresentasikan data, sementara edges  adalah jalan atau lintasan yang menghubungkan antara nodes. Pada dasarnya tree dapat digunakan untuk merepresentasikan data yang memiliki hierarkis seperti struktur perusahaan, struktur keluarga, struktur direktori  pada sistem file komputer atau permasalahan lain yang melibatkan pembagian dan percabangan [2].

**Karakteristik**

a. Terdapat 1 node yang unik, yang tidak memiliki predecessor, yang disebut dengan root (akar)

b. Terdapat satu atau beberapa node yang tidak memiliki successor yang disebut dengan leaf (daun)

c. Setiap node kecuali root pasti memiliki satu predecessor

d. Setiap node kecuali leaf pasti memiliki 1 atau lebih successor

**Terminologi Tree**

1) Path
    Path adalah urutan lintasan atau hubungan yang dapat dilalui jika ingin melakukan tracking dari node yang satu ke node yang lain [2].

2) Root
    Dalam tree hanya akan terdapat satu root. Root ini berada paling puncak atau level 0 (nol) [2].

3) Parent
    Parent pada tree adalah node yang memiliki satu atau lebih edge di bagian bawahnya [2].

4) Child
    Child adalah node dalam tree yang hanya memiliki satu edges pada bagian atasnya [2]. Jadi node tertentu dapat dianggap sebagai parent ataupun child berdasarkan sudut pandangnya.

5) Leaf
    Leaf adalah node yang paling akhir dalam tree [2]. Leaf tidak memiliki edge lagi pada bagian bawahnya [2].

6) Subtree
    Subtree adalah node-node pada tree yang  memiliki child [2]. Pada keadaan ini node tersebut dapat dianggap sebagai root dalam subtree.

7) Visiting
    Visiting adalah node-node yang telah dikunjungi atau telah dicek pada saat pencarian node tertentu dalam tree [2].

8) Transversing
    Traversing atau penelusuran adalah kegiatan mengunjungi seluruh node dalam urutan tertentu, misalnya inorder traversal, preorder traversal dan postorder traversal [2].

9) Level
    Level pada sebuah tree adalah banyaknya generasi dari awal root sampai pada leaf [2].

**Binary Tree**

Binary tree atau pohon biner merupakan struktur data hirarkis yang terdiri dari nodes dan edges dimana setiap node hanya boleh memiliki (maksimal) 2 child left child dan right child [2]. Menurut (Goodrich et  al., 2014) binary tree  merupakan sebuah ordered tree yang memiliki 3 sifat utama yaitu (1) setiap node hanya boleh memiliki maksimal 2  child, (2) setiap child memiliki nama masing-masing yaitu left child dan right child, dan (3) node left child selalu dikunjungi lebih awal daripada node right child [2]. Binary tree banyak diterapkan dalam dunia komputer [2]. Umumnya binary tree melekat pada beberapa algoritma yang digunakan untuk menyelesaikan masalah seperti pencarian, pengurutan, kompresi data, ekspresi matematika, pengambilan  keputusan, dan analisis sintaksis dalam kompilasi (Lee & Hubbard, 2014). Salah satu representasi dari binary tree yang umum ditemukan adalah pada pohon keputusan atau decision tree [2]. Decision tree merupakan salah  satu bentuk binary tree karena setiap node yang mewakili pertanyaan tertentu hanya memiliki dua jawaban yaitu yes atau no. Artinya tidak ada nodes dalam decision tree yang akan menghasilkan child lebih dari dua sehingga memenuhi syarat dari binary tree [2].

## Guided 

### 1. Implementasi Program Graph

```C++
# include <iostream>
# include <iomanip>
using namespace std;

    string simpul [7] = {"Ciamis","Bandung", "Bekasi", "Tasikmalaya", "Cianjur", "Purwokerto", "Yogyakarta"};

    int busur[7][7] = {
        {0, 7, 8, 0, 0, 0, 0},
        {0, 0, 5, 0, 9, 15, 0},
        {0, 5, 0, 9, 5, 0, 0},
        {0, 0, 0, 2, 4, 0, 0},
        {3, 0, 0, 1, 0, 0, 0},
        {0, 0, 7, 0, 0, 9, 4},
        {0, 0, 0, 0, 8, 0, 0},
    };    

void tampilGraph() {
    for (int baris = 0; baris < 7; baris++) {
        cout << simpul[baris] << " : ";
        for (int kolom = 0; kolom < 7; kolom++) {
            if(busur[baris][kolom] != 0)
                cout << " -> " << "(" << busur[baris][kolom] << ")";
        }
        cout << endl;
    }
}

int main () {
    tampilGraph();
    return 0;
}
```

Program di atas merupakan sebuah program C++ yang merepresentasikan graf berarah (directed graph) dengan menggunakan matriks berbobot (weighted matrix). Berikut ini penjelasan mengenai fungsi program yang digunakan, diantaranya yaitu:

1. Program pertama-tama mendefinisikan array `simpul` yang berisi nama-nama simpul (vertices) dalam graf. Terdapat 7 simpul yang dinyatakan dalam array tersebut.

2. Selanjutnya, program mendefinisikan matriks `busur` berukuran 7x7 yang merepresentasikan bobot dari setiap busur (edge) di antara simpul-simpul. Angka-angka pada matriks ini menunjukkan bobot dari busur yang menghubungkan simpul-simpul. Jika nilai di suatu indeks adalah 0, itu berarti tidak ada busur yang menghubungkan simpul tersebut.

3. Program juga mendefinisikan fungsi `tampilGraph()` yang digunakan untuk menampilkan graf ke layar. Fungsi ini akan menampilkan nama simpul dan busur-busur yang terhubung dari simpul tersebut beserta bobotnya.

4. Pada fungsi `tampilGraph()`, program melakukan perulangan untuk setiap baris dari matriks `busur`. Untuk setiap simpul, program mencetak nama simpul tersebut ke layar dan kemudian mengecek setiap kolom pada baris tersebut. Jika terdapat busur (bobot tidak sama dengan 0) yang menghubungkan simpul tersebut dengan simpul lain, program akan mencetak informasi busur beserta bobotnya.

5. Terakhir, dalam fungsi `main()`, program memanggil fungsi `tampilGraph()` untuk menampilkan graf ke layar dengan nama-nama simpul dan bobot-bobot pada busur yang terhubung.

Dengan demikian, program ini berguna untuk merepresentasikan graf berarah dengan matriks berbobot dalam bentuk array dan matriks, serta menampilkan informasi graf tersebut ke layar dengan bantuan fungsi `tampilGraph()`.

### Output
<img width="580" alt="Screenshot 2024-06-08 071855" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/8f5fb9e0-1b9f-4d5c-87dc-53e90fec2231">

### 2. Implementasi Program Tree

```C++
#include <iostream>

using namespace std;

// Definisi struktur pohon
struct pohon{
    pohon* kanan;
    char data;
    pohon* kiri;
};

// Deklarasi variabel global
pohon* simpul;
pohon* root;
pohon* saatini;
pohon* helperA;
pohon* helperB;
pohon* alamat[256];

// Fungsi untuk menginisialisasi root
void inisialisasi() {
    root = NULL;
}

// Fungsi untuk membuat simpul baru
void simpulBaru(char dataMasukan) {
    simpul = new pohon;
    simpul->data = dataMasukan;
    simpul->kanan = NULL;
    simpul->kiri = NULL;
}

// Fungsi untuk membuat simpul akar
void simpulAkar() {
    if (root == NULL) {
        char dataAnda;
        cout << "Silahkan Masukkan Data: ";
        cin >> dataAnda;
        simpulBaru(dataAnda);
        root = simpul;
        cout << "Root terbentuk..." << endl;
    } else {
        cout << "Root sudah ada..." << endl; 
    }
}

// Fungsi untuk menambah simpul
void tambahSimpul() {
    if (root != NULL) {
        int i = 1, j = 1, penanda = 0;
        char dataUser;
        alamat[i] = root;

        while (penanda == 0 && j < 256) {
            cout << "Masukkan data kiri : ";
            cin >> dataUser;
            if (dataUser != '0') {
                simpulBaru(dataUser);
                saatini = alamat[i];
                saatini->kiri = simpul;
                j++;
                alamat[j] = simpul;
            } else {
                penanda = 1;
                j++;
                alamat[j] = NULL;
            }
            if (penanda == 0) {
                cout << "Masukkan data kanan : ";
                cin >> dataUser;
                if(dataUser != '0') {
                    simpulBaru(dataUser);
                    saatini = alamat[i];
                    saatini->kanan = simpul;
                    j++;
                    alamat[j] = simpul;
                } else {
                    penanda = 1;
                    j++;
                    alamat[j] = NULL;
                }
            }
            i++;
        }
        
    }
}

// Fungsi untuk membaca pohon
void bacaPohon() {
    if(root != NULL) {
        int i = 1, n = 1, pencacah = 0;
        cout << endl;
        while (alamat[i] != NULL) {
            saatini = alamat[i];
            cout << saatini->data << " ";
            pencacah++;
            if(pencacah == n) {
                cout << endl;
                pencacah = 0;
                n = n * 2;
            }
            i++;
        }
    }
}

// Fungsi Utama
int main () {
    inisialisasi();
    simpulAkar();
    tambahSimpul();
    bacaPohon();
    return 0;
}
```
### Penjelasan Program

Program di atas merupakan sebuah program C++ yang digunakan untuk membuat dan membaca sebuah pohon (tree) dalam bentuk struktur data berhierarki. Berikut ini penjelasan mengenai fungsi-fungsi program yang digunakan, diantaranya yaitu:

1. Struct `pohon` digunakan untuk mendefinisikan struktur data pohon dengan pointer ke simpul kanan (`kanan`), nilai data (`data`), dan pointer ke simpul kiri (`kiri`).

2. Deklarasi variabel global:
   - `simpul`: pointer ke simpul saat ini yang sedang dioperasikan.
   - `root`: pointer ke simpul root dari pohon.
   - `saatini`: pointer ke simpul saat ini yang sedang dioperasikan (biasanya digunakan dalam operasi traversal).
   - `helperA`, `helperB`: variabel tambahan yang mungkin digunakan dalam fungsi-fungsi tertentu.
   - `alamat[256]`: array berukuran 256 yang digunakan untuk menyimpan alamat simpul dalam pohon.

3. Fungsi `inisialisasi()`: digunakan untuk menginisialisasi pointer root sehingga nilainya menjadi NULL.

4. Fungsi `simpulBaru(char dataMasukan)`: digunakan untuk membuat simpul baru dengan data yang diberikan sebagai argumen.

5. Fungsi `simpulAkar()`: digunakan untuk membuat simpul akar (root) dari pohon. Jika root belum ada, pengguna diminta untuk memasukkan data dan simpul akan dibuat sebagai root. Jika root sudah ada, program akan memberikan pesan bahwa root sudah ada.

6. Fungsi `tambahSimpul()`: digunakan untuk menambahkan simpul-simpul ke pohon. Pengguna diminta untuk memasukkan data untuk simpul kiri dan kanan setiap simpul yang sedang diproses. Proses penambahan simpul dilakukan dengan mengubah pointer simpul kiri dan kanan dari simpul saat ini.

7. Fungsi `bacaPohon()`: digunakan untuk membaca pohon dan melakukan traversal inorder (dalam urutan kiri-akar-kanan). Fungsi ini akan mencetak simpul-simpul pohon secara berurutan dengan format output yang berbeda baris untuk setiap level dalam pohon.

8. Fungsi `main()`: merupakan fungsi utama dari program yang melakukan inisialisasi, membuat simpul akar, menambah simpul, dan membaca pohon. Fungsi-fungsi yang telah dijelaskan sebelumnya dipanggil dalam urutan yang benar untuk membentuk dan menampilkan pohon.

Dengan demikian, program ini berguna untuk memahami konsep pohon dalam struktur data dan dapat digunakan untuk membuat, menambah simpul, dan membaca pohon secara terurut.

### Output
<img width="500" alt="Screenshot 2024-06-08 072229" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/4341a723-dc47-4e14-9a90-71703ffe0433">

## Unguided 

### 1. Buatlah program graph dengan menggunakan inputan user untuk menghitung jarak dari sebuah kota ke kota lainnya!

<img width="530" alt="Screenshot 2024-06-08 053214" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/fbafa707-c941-4efb-930c-2bdb08d6a805">

```C++
#include <iostream>
#include <iomanip>
#include <map>
using namespace std;

int main() {
    int numNodes_2311110058;
    cout << "Silakan masukan jumlah simpul : ";
    cin >> numNodes_2311110058;

    // Deklarasi map untuk menyimpan nama simpul
    map<int, string> nodeNames;

    // Input nama simpul
    for (int i = 1; i <= numNodes_2311110058; i++) {
        string nodeName;
        cout << "Silakan masukan nama simpul " << i << " : ";
        cin >> nodeName;
        nodeNames[i] = nodeName;
    }

    // Deklarasi map untuk menyimpan bobot antar simpul
    map<string, map<string, int>> weights;

    // Input bobot antar simpul
    cout << "Silakan masukkan bobot antar simpul" << endl;
    for (int i = 1; i <= numNodes_2311110058; i++) {
        for (int j = 1; j <= numNodes_2311110058; j++) {
            int weight;
            if (i == j) {
                cout << nodeNames[i] << "--> " << nodeNames[j] << " = 0" << endl;
                weights[nodeNames[i]][nodeNames[j]] = 0;
            } else {
                cout << nodeNames[i] << "--> " << nodeNames[j] << " = ";
                cin >> weight;
                weights[nodeNames[i]][nodeNames[j]] = weight;
            }
        }
    }

    // Tampilkan bobot antar simpul
    cout << endl << setw(5) << "\tBALI" << setw(5) << "PALU" << endl;
    for (auto it1 = weights.begin(); it1 != weights.end(); it1++) {
        cout << setw(5) << it1->first;
        for (auto it2 = it1->second.begin(); it2 != it1->second.end(); it2++) {
            cout << setw(5) << it2->second;
        }
        cout << endl;
    }

    return 0;
}
```

### Penjelasan Program 

Program di atas merupakan sebuah program C++ yang digunakan untuk menyimpan nama simpul dan bobot antar simpul dalam bentuk graf. Berikut ini penjelasan mengenai fungsi program yang digunakan, diantaranya yaitu:

1. Pertama-tama, program meminta pengguna untuk memasukkan jumlah simpul yang akan dimasukkan. Angka ini akan disimpan dalam variabel `numNodes_2311110058`.

2. Selanjutnya, program meminta pengguna untuk memasukkan nama dari masing-masing simpul. Nama-nama simpul tersebut akan disimpan dalam objek `map` bernama `nodeNames`, di mana kunci (key) dari map ini adalah nomor simpul dan nilainya adalah nama simpul tersebut.

3. Setelah itu, program meminta pengguna untuk memasukkan bobot antar simpul. Program akan menampilkan matriks bobot antar simpul dari graf yang diwakili oleh nama-nama simpul yang telah dimasukkan sebelumnya. Jika i sama dengan j (simpul yang sama), maka bobotnya adalah 0. Jika tidak, maka program akan meminta pengguna untuk memasukkan bobot dari simpul i ke simpul j. Bobot-bobot ini disimpan dalam objek `map` bernama `weights`, di mana kunci pertama adalah nama simpul i, kunci kedua adalah nama simpul j, dan nilainya adalah bobot antara kedua simpul tersebut.

4. Terakhir, program akan menampilkan matriks bobot antar simpul yang telah dimasukkan dan disimpan sebelumnya.

Dengan demikian, program ini berguna untuk menginput dan menyimpan nama simpul serta bobot antar simpul dalam bentuk graf menggunakan struktur data map dan menampilkannya dalam bentuk matriks bobot antar simpul.

#### Output:
<img width="500" alt="Screenshot 2024-06-08 072437" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/05885181-f716-44b9-ae7c-d2029fd7d7a1">

### 2. Modifikasi guided tree diatas dengan program menu menggunakan input data tree dari user dan tampilkan pada pre-order, inorder, dan post order!

```C++
#include <iostream>

using namespace std;

// Definisi struktur pohon
struct pohon {
    pohon* kanan;
    char data;
    pohon* kiri;
};

// Deklarasi variabel global
pohon* simpul;
pohon* root;
pohon* saatini;
pohon* alamat[256];

// Fungsi untuk menginisialisasi root
void inisialisasi() {
    root = NULL;
}

// Fungsi untuk membuat simpul baru
void simpulBaru(char dataMasukan) {
    simpul = new pohon;
    simpul->data = dataMasukan;
    simpul->kanan = NULL;
    simpul->kiri = NULL;
}

// Fungsi untuk membuat simpul akar
void simpulAkar() {
    if (root == NULL) {
        char dataAnda;
        cout << "Silahkan Masukkan Data untuk Root: ";
        cin >> dataAnda;
        simpulBaru(dataAnda);
        root = simpul;
        cout << "Root terbentuk..." << endl;
    } else {
        cout << "Root sudah ada..." << endl; 
    }
}

// Fungsi untuk menambah simpul
void tambahSimpul() {
    if (root != NULL) {
        int i = 1, j = 1, penanda = 0;
        char dataUser;
        alamat[i] = root;

        while (penanda == 0 && j < 256) {
            cout << "Masukkan data kiri (masukkan '0' jika tidak ada): ";
            cin >> dataUser;
            if (dataUser != '0') {
                simpulBaru(dataUser);
                saatini = alamat[i];
                saatini->kiri = simpul;
                j++;
                alamat[j] = simpul;
            } else {
                penanda = 1;
                j++;
                alamat[j] = NULL;
            }
            penanda = 0;
            cout << "Masukkan data kanan (masukkan '0' jika tidak ada): ";
            cin >> dataUser;
            if(dataUser != '0') {
                simpulBaru(dataUser);
                saatini = alamat[i];
                saatini->kanan = simpul;
                j++;
                alamat[j] = simpul;
            } else {
                penanda = 1;
                j++;
                alamat[j] = NULL;
            }
            i++;
        }
    }
}

// Fungsi untuk membaca pohon
void bacaPohon() {
    if(root != NULL) {
        int i = 1, n = 1, pencacah = 0;
        cout << endl;
        while (alamat[i] != NULL) {
            saatini = alamat[i];
            cout << saatini->data << " ";
            pencacah++;
            if(pencacah == n) {
                cout << endl;
                pencacah = 0;
                n = n * 2;
            }
            i++;
        }
    }
}

// Fungsi untuk traversal pre-order
void preOrder(pohon* akar) {
    if (akar != NULL) {
        cout << akar->data << " ";
        preOrder(akar->kiri);
        preOrder(akar->kanan);
    }
}

// Fungsi untuk traversal in-order
void inOrder(pohon* akar) {
    if (akar != NULL) {
        inOrder(akar->kiri);
        cout << akar->data << " ";
        inOrder(akar->kanan);
    }
}

// Fungsi untuk traversal post-order
void postOrder(pohon* akar) {
    if (akar != NULL) {
        postOrder(akar->kiri);
        postOrder(akar->kanan);
        cout << akar->data << " ";
    }
}

// Fungsi untuk menampilkan menu
void tampilkanMenu() {
    cout << "\nMenu:\n";
    cout << "1. Tambah Simpul\n";
    cout << "2. Tampilkan Pohon\n";
    cout << "3. Traversal Pre-order\n";
    cout << "4. Traversal In-order\n";
    cout << "5. Traversal Post-order\n";
    cout << "6. Keluar\n";
    cout << "Pilihan Anda: ";
}

// Fungsi Utama
int main() {
    inisialisasi();
    simpulAkar();

    int pilihan_2311110058;
    do {
        tampilkanMenu();
        cin >> pilihan_2311110058;

        switch (pilihan_2311110058) {
            case 1:
                tambahSimpul();
                break;
            case 2:
                bacaPohon();
                break;
            case 3:
                cout << "Pre-order: ";
                preOrder(root);
                cout << endl;
                break;
            case 4:
                cout << "In-order: ";
                inOrder(root);
                cout << endl;
                break;
            case 5:
                cout << "Post-order: ";
                postOrder(root);
                cout << endl;
                break;
            case 6:
                cout << "PROGRAM SELESAI...\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
                break;
        }
    } while (pilihan_2311110058 != 6);

    return 0;
}
```

### Penjelasan Program

Program di atas merupakan sebuah program C++ yang mengimplementasikan pembuatan, penambahan simpul, dan traversal (penelusuran) tree secara pre-order, in-order, dan post-order. Berikut ini penjelasan detail mengenai fungsi-fungsi program yang digunakan, diantaranya yaitu:

1. Struct `pohon` digunakan untuk mendefinisikan struktur data pohon dengan pointer ke simpul kanan (`kanan`), nilai data (`data`), dan pointer ke simpul kiri (`kiri`).

2. Deklarasi variabel global:
   - `simpul`, `root`, `saatini`: pointer ke simpul terkini, simpul root, dan simpul saat ini yang sedang dioperasikan.
   - `alamat[256]`: array berukuran 256 yang digunakan untuk menyimpan alamat simpul dalam pohon.

3. Fungsi `inisialisasi()`: digunakan untuk menginisialisasi pointer root menjadi NULL saat program dimulai.

4. Fungsi `simpulBaru(char dataMasukan)`: digunakan untuk membuat simpul baru dengan data yang diberikan sebagai argumen.

5. Fungsi `simpulAkar()`: digunakan untuk membuat simpul akar (root) dari pohon. Jika root belum ada, pengguna diminta untuk memasukkan data untuk root yang menjadi simpul akar.

6. Fungsi `tambahSimpul()`: digunakan untuk menambahkan simpul kiri dan kanan dari setiap simpul dalam pohon. Saat pengguna memasukkan data untuk simpul kiri atau kanan, simpul baru dibuat dan dikaitkan dengan simpul saat ini.

7. Fungsi `bacaPohon()`: digunakan untuk membaca pohon dan mencetak simpul-simpul dalam pohon dengan format output yang menunjukkan hubungan hierarki antara simpul-simpul.

8. Fungsi-fungsi traversal: `preOrder()`, `inOrder()`, dan `postOrder()` digunakan untuk melakukan penelusuran pohon secara pre-order, in-order, dan post-order.

9. Fungsi `tampilkanMenu()`: digunakan untuk menampilkan menu pilihan operasi kepada pengguna, seperti tambah simpul, tampilkan pohon, traversal pre-order, traversal in-order, traversal post-order, dan keluar dari program.

10. Fungsi `main()`: merupakan fungsi utama dari program yang melakukan inisialisasi, membuat simpul akar, dan menyediakan menu operasi kepada pengguna. Program akan mengeksekusi operasi yang dipilih oleh pengguna berdasarkan opsi menu yang disediakan.

Dengan demikian, program ini memberikan tools untuk membuat, mengelola, dan menelusuri pohon secara berbagai cara (pre-order, in-order, post-order) sehingga dapat membantu dalam memahami struktur data pohon secara universal.

### Output
<img width="450" alt="Screenshot 2024-06-08 072915" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/b77d4c30-803f-40fb-8454-4a5520f01098">

<img width="450" alt="Screenshot 2024-06-08 073053" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/b5809abe-c219-4923-bc0e-e5637a2d6c29">

<img width="450" alt="Screenshot 2024-06-08 073202" src="https://github.com/leoAW/Praktikum-Struktur-Data-Assignment/assets/160736794/72dce2af-17bc-46db-bf26-fa2061dc5c73"> 

## Kesimpulan

Graph adalah struktur data yang menggambarkan hubungan many-to-many antara elemen dalam bentuk network atau jaringan. Graph terdiri dari titik (vertex) dan sisi (edge) yang menghubungkan titik-titik tersebut. Struktur data linear pada graph terjadi karena keterhubungan sekuensial, sementara struktur data tree terbentuk dari hubungan hierarkis. Graph memiliki himpunan verteks (node) dan sisi (edge, arc) yang menyatakan entitas data dan keterhubungannya. Graph dapat direpresentasikan melalui diagram, dan notasi matematisnya adalah G = (V, E).

Jenis-jenis graph meliputi Directed Graph (graf berarah), Undirected Graph (graf tak berarah), dan Weight Graph (graf berbobot). Directed Graph memiliki orientasi arah pada setiap sisinya, sementara Undirected Graph tidak memiliki orientasi arah. Weight Graph memiliki bobot pada setiap sisi untuk menggambarkan biaya atau aspek lainnya. Graph juga dapat direpresentasikan menggunakan matriks adjacency untuk mencatat keterhubungan langsung antara verteks.

Graph merupakan struktur data yang dapat menggambarkan hubungan antar entitas data secara beragam, seperti keterhubungan linear, hierarkis, dan tak terbatas. Struktur data linear dan hirarkis juga dapat dianggap sebagai jenis graph, di mana node-node dalam struktur tersebut merupakan verteks dalam graph. Graph merupakan konsep yang penting dalam pemodelan dan analisis hubungan antar entitas data dalam berbagai bidang.

Tree (pohon) merupakan struktur data hierarkis yang terdiri dari nodes yang saling terhubung melalui edges. Tree digunakan untuk merepresentasikan data dengan hierarki seperti struktur perusahaan, keluarga, atau direktori pada sistem file komputer. Karakteristik tree meliputi keberadaan root (akar) yang unik, leaf (daun) sebagai nodes terakhir, setiap node kecuali root memiliki predecessor, dan setiap node kecuali leaf memiliki successor.

Dalam tree, terdapat beberapa terminologi penting seperti path (lintasan antara nodes), root (akar), parent (node di atas child), child (node di bawah parent), leaf (node terakhir), subtree (bagian tree dengan child), visiting (node yang telah dikunjungi), transversing (penelusuran node), dan level (generasi dari root hingga leaf). Binary tree adalah jenis tree di mana setiap node memiliki maksimal dua child: left child dan right child. Binary tree banyak digunakan dalam algoritma pencarian, pengurutan, kompresi data, ekspresi matematika, pohon keputusan, dan analisis sintaksis dalam kompilasi.

Decision tree adalah bentuk khusus dari binary tree, di mana setiap node hanya memiliki dua jawaban (yes atau no). Nodes dalam decision tree tidak memiliki lebih dari dua child, memenuhi sifat dasar dari binary tree. Binary tree memiliki peran penting dalam pemrograman komputer dan dapat diterapkan dalam berbagai algoritma dan aplikasi.

## Referensi
[1] Sindar, A., R. M. S. (2019). "Struktur Data Dan Algoritma Dengan C++ (Vol. 1)", CV. AA. RIZKY.

[2] Erkamim, E., et al. (2024). "Buku Ajar Algoritma dan Struktur Data", PT. Sonpedia Publishing Indonesia.
