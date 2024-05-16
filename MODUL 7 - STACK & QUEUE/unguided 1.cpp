#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isPalindrome(string kalimat) {
    stack<char> charStack;
    string kalimatDiproses = "";
    for (char c : kalimat) {
        if (isalnum(c)) {
            kalimatDiproses += tolower(c);
            charStack.push(tolower(c));
        }
    }
    for (char c : kalimatDiproses) {
        if (c != charStack.top()) {
            return false;
        }
        charStack.pop();
    }
    return true;
}

int main() {
    string inputKalimat;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, inputKalimat);
    
    if (isPalindrome(inputKalimat)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }
    return 0;
}