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