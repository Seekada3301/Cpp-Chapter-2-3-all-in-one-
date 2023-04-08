#include <iostream.h>
using namespace std;

int main() {
  int number1, number2;
  cout << "Enter two integers: ";
  cin >> number1 >> number2;
   cout << "Sum: " << number1 + number2 << endl;
    cout << "Difference: " << number1 - number2 << endl;
  cout << "Product: " << number1 * number2 << endl;
   if (number2 != 0) {
       cout << "Division: " << (double) number1 / number2 << endl;
   } 
   else {    
       cout << "Division: Undefined" << endl;
   }
   if (number1 > number2) {
       cout << number1 << " is greater than " << number2 << endl;
   } 
    else if (number1 < number2) {
       cout << number1 << " is smaller than " << number2 << endl;
   } 
    else {
       cout << number1 << " and " << number2 << " are equal" << endl;
   }
   return 0;
}
