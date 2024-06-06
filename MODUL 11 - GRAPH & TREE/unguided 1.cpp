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
