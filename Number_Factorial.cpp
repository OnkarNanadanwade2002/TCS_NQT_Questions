/* Factorial of a Number : Iterative and Recursive
*/

//1 
#include <iostream>
using namespace std;
int factorial(int X) {
   int ans = 1;
   for (int i = 1; i <= X; i++) {
      ans = ans * i;
   }
   return ans;
}
int main() {
   int X = 5;
   int result = factorial(X);
   cout << "The factorial of " << X << " is " << result;
}

//2nd 
/*
#include <iostream>
using namespace std;
int factorial(int X) {
   if (X == 0) {
      return 1;
   }
   return X * factorial(X - 1);
}
int main() {
   int X = 5;
   int result = factorial(X);
   cout << "The factorial of " << X << " is " << result;
}
*/
