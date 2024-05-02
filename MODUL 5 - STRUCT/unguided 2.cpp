#include <iostream>
#include <string>
using namespace std;

struct Buku{
    string judul_buku[5];     // Atribut
    string pengarang[5];
    string penerbit[5];
    int tebal_halaman[5];
    double harga_buku[5]; 
};

int main(){
    // Mendeklarasi variabel BukuNovel dengan tipe Buku
    Buku BukuNovel;
    cout << "======= Buku Novel Terkenal di Indonesia =======";
    //Mengisi data ke dalam variabel BukuNovel untuk buku 1
    BukuNovel.judul_buku[0]         = "Ayat-Ayat Cinta";
    BukuNovel.pengarang[0]          = "Habiburrahman El Shirazy";
    BukuNovel.penerbit[0]           = "Republika";
    BukuNovel.tebal_halaman[0]      = 356;
    BukuNovel.harga_buku[0]         = 80000;

    //Mengisi data ke dalam variabel BukuNovel untuk buku 2
    BukuNovel.judul_buku[1]         = "Perahu Kertas";
    BukuNovel.pengarang[1]          = "Dee Lestari";
    BukuNovel.penerbit[1]           = "Bentang Pustaka";
    BukuNovel.tebal_halaman[1]      = 360;
    BukuNovel.harga_buku[1]         = 75000;

    //Mengisi data ke dalam variabel BukuNovel untuk buku 3
    BukuNovel.judul_buku[2]         = "Ronggeng Dukuh Paruk";
    BukuNovel.pengarang[2]          = "Ahmad Tohari";
    BukuNovel.penerbit[2]           = "Grasindo";
    BukuNovel.tebal_halaman[2]      = 456;
    BukuNovel.harga_buku[2]         = 85000;

    //Mengisi data ke dalam variabel BukuNovel untuk buku 4
    BukuNovel.judul_buku[3]         = "Supernova: Ksatria, Puteri, dan Bintang Jatuh ";
    BukuNovel.pengarang[3]          = "Dee Lestari";
    BukuNovel.penerbit[3]           = "Bentang Pustaka";
    BukuNovel.tebal_halaman[3]      = 376;
    BukuNovel.harga_buku[3]         = 85000;

    //Mengisi data ke dalam variabel BukuNovel untuk buku 5
    BukuNovel.judul_buku[4]         = "Laskar Pelangi";
    BukuNovel.pengarang[4]          = "Andrea Hirata";
    BukuNovel.penerbit[4]           = "Bentang Pustaka";
    BukuNovel.tebal_halaman[4]      = 352;
    BukuNovel.harga_buku[4]         = 65000;

    for (int i=0; i<5; i++){
        cout << "\n\tBuku Novel ke-" << i+1 << endl;
        cout << "\tJudul Buku          : "      << BukuNovel.judul_buku[i] << endl;
        cout << "\tPengarang           : "      << BukuNovel.pengarang[i] << endl;
        cout << "\tPenerbit            : "      << BukuNovel.penerbit[i] << endl;
        cout << "\tTebal Halaman       : "      << BukuNovel.tebal_halaman[i] << endl;
        cout << "\tHarga Buku          : Rp "   << BukuNovel.harga_buku[i] << endl;
    }
    return 0;
}