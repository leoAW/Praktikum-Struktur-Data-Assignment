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
