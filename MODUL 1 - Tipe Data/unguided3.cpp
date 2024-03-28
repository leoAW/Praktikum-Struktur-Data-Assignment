#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, std::string> FruitColors;

    // Menambahkan data warna buah ke map
    FruitColors["Apple"]        = "Red";
    FruitColors["Banana"]       = "Yellow";
    FruitColors["Grape"]        = "Purple";
    FruitColors["Avocado"]      = "Green";
    FruitColors["Blueberry"]    = "Blue";

    // Menampilkan data warna buah
    for (const auto& pair : FruitColors) {
        std::cout << "Buah: " << pair.first << " - Warna: " << pair.second << std::endl;
    }

    return 0;
}