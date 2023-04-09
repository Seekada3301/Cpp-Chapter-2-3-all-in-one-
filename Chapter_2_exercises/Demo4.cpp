#include <iostream.h>
#include <math.h>
using namespace std;

int main() {
   double a, b, c, sqr1, sqr2, discriminant;

   cout << "Enter coefficients a, b, and c: ";
   cin >> a >> b >> c;

   discriminant = b * b - 4 * a * c;  

   if (discriminant > 0) {  
       sqr1 = (-b + sqrt(discriminant)) / (2 * a);
       sqr2 = (-b - sqrt(discriminant)) / (2 * a);
       cout << "The roots are real and different." << endl;
       cout << "Root 1 of the equation = " << sqr1 << endl;
       cout << "Root 2 of the equation = " << sqr2 << endl;
      }
    else if (discriminant == 0) {  
       sqr1 = -b / (2 * a);
       cout << "The roots are real and equal." << endl;
       cout << "Root 1 = Root 2 = " << sqr1 << endl;
      }
    else {  // if roots are complex
       double real = -b / (2 * a);
       double imag = sqrt(-discriminant) / (2 * a);
       cout << "The roots are complex and different." << endl;
       cout << "Root 1 = " << real << " + " << imag << "i" << endl;
       cout << "Root 2 = " << real << " - " << imag << "i" << endl;
   }

   return 0;
}
