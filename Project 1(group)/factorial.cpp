#include <iostream>

using namespace std;

int main() {
    int num;
    int factorial = 1;

    // Accept the number
    cout << "Enter a positive integer: ";
    cin >> num;

    // Calculate factorial using for loop
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    cout << "Factorial of " << num << " using for loop is: " << factorial << endl;

    // Calculate factorial using while loop
    factorial = 1;
    int i = 1;
    while (i <= num) {
        factorial *= i;
        i++;
    }
    cout << "Factorial of " << num << " using while loop is: " << factorial << endl;

    // Calculate factorial using do-while loop
    factorial = 1;
    i = 1;
    do {
        factorial *= i;
        i++;
    } while (i <= num);
    cout << "Factorial of " << num << " using do-while loop is: " << factorial << endl;

    return 0;
}
