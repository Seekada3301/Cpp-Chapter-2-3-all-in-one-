#include <iostream>
using namespace std;

int main() {
    char c;
     cout << "Enter a letter: ";
    cin >> c;
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << c << " is a vowel.\n";
            break;
        default:
            cout << c << " is not a vowel.\n";
            break;
    }
    return 0;
}
