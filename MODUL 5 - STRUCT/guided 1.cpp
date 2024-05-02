#include <iostream>
#include <string>

using namespace std;

struct Buku{
    string judul_buku;      //Atribut
    string pengarang;
    string penerbit;
    int tebal_buku;
    double harga_buku;
}; Buku buku1; Buku buku2;  //Variabel

int main(){
    buku1.judul_buku    = "Azab di Alam Barzakh"; //Memanggil
    buku1.pengarang     = "Oel Ananta";
    buku1.penerbit      = "Erlangga";
    buku1.tebal_buku    = 250;
    buku1.harga_buku    = 150000;

    buku2.judul_buku    = "Cerita Rakyat Nusantara"; //Memanggil
    buku2.pengarang     = "Ilham Gozali";
    buku2.penerbit      = "Yudhistira";
    buku2.tebal_buku    = 150;
    buku2.harga_buku    = 120000;

    //Menampilkan data
    cout << "\tInformasi buku" << endl;
    cout << "Judul          : " << buku1.judul_buku << endl;
    cout << "Pengarang      : " << buku1.pengarang << endl;
    cout << "Penerbit       : " << buku1.penerbit << endl;
    cout << "Tebal Halaman  : " << buku1.tebal_buku << endl;
    cout << "Harga Buku     : " << buku1.harga_buku << endl;

    cout << "\tInformasi buku" << endl;
    cout << "Judul          : " << buku2.judul_buku << endl;
    cout << "Pengarang      : " << buku2.pengarang << endl;
    cout << "Penerbit       : " << buku2.penerbit << endl;
    cout << "Tebal Halaman  : " << buku2.tebal_buku << endl;
    cout << "Harga Buku     : " << buku2.harga_buku << endl;

return 0;
}