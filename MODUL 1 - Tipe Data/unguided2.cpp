#include <iostream>
using namespace std;

// Class Kubus
class Kubus {
public:
    double sisi;

    double hitungVolume() {
        return sisi * sisi * sisi;
    }

    double hitungLuasPermukaan() {
        return 6 * sisi * sisi;
    }
};

// Struct Kubus
struct Kubus_Struct {
    double sisi;

    double hitungVolume() {
        return sisi * sisi * sisi;
    }

    double hitungLuasPermukaan() {
        return 6 * sisi * sisi;
    }
};

int main() {
    // Menggunakan Class Kubus
    Kubus kubus1;
    kubus1.sisi = 4.0;

    cout << "Volume Kubus (Class): " << kubus1.hitungVolume() << endl;
    cout << "Luas Permukaan Kubus (Class): " << kubus1.hitungLuasPermukaan() << endl;

    // Menggunakan Struct Kubus
    Kubus_Struct kubus2;
    kubus2.sisi = 5.0;

    cout << "Volume Kubus (Struct): " << kubus2.hitungVolume() << endl;
    cout << "Luas Permukaan Kubus (Struct): " << kubus2.hitungLuasPermukaan() << endl;

    return 0;
}
