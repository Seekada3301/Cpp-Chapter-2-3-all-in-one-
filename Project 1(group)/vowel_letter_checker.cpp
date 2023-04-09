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
/* GROUP MEMBERS LIST

1. Singitan Assefa   0768/14
2. Esubalew Wolde    4634/14
3. Elias zeleke      1681/14
4. Bedilu Getachew   4665/14
*/
}
