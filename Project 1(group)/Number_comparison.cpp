#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
     cin >> num1 >> num2 >> num3;
    
    if (num1 > num2 && num1 > num3) {
        cout << num1 << " is the greatest.\n";
    }
     else if (num2 > num1 && num2 > num3) {
        cout << num2 << " is the greatest.\n";
    }
    else {
        cout << num3 << " is the greatest.\n";
    }
    
    return 0;
/* GROUP MEMBERS LIST

1. Singitan Assefa   0768/14
2. Esubalew Wolde    4634/14
3. Elias zeleke      1681/14
4. Bedilu Getachew   4665/14
*/
}
