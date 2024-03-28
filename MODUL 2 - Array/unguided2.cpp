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