// q10 Overload a function multiply()
//d. One version takes two int values and returns their product.
//e. Another takes one int and one double.
//f. Another takes three float values.Overload a function multiply()
//d. One version takes two int values and returns their product.
//e. Another takes one int and one double.
//f. Another takes three float values.
 #include <iostream>
 using namespace std;
 
 class calculator {
 public:
     int multiply(int a, int b) {
         return a * b;
     }
 
     double multiply(int a, double b) {
         return a * b;
     }
 
     float multiply(float a, float b, float c) {
         return a * b * c;
     }
 };
 
 int main() {
     calculator calc;
     cout << "product of two integers: " << calc.multiply(4, 5) << endl;
     cout << "product of int and double: " << calc.multiply(3, 2.5) << endl;
     cout << "product of three floats: " << calc.multiply(1.2f, 2.3f, 3.4f) << endl;
     return 0;
 }
 