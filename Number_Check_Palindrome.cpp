/* Check if a number is Palindrome or Not
Problem Statement:  Given a number check if it is a palindrome.

An integer is considered a palindrome when it reads the same backward as forward.
Example 1:
Input: N = 123
Output: Not Palindrome Number
Explanation: 123 read backwards is 321.Since these are two 
different numbers 123 is not a palindrome.
Example 2:
Input: N =  121*/
#include <iostream>

using namespace std;
int reverse(int X) {
   int Y = 0;
   while (X > 0) {
      //Extract the last digit
      int digit = X % 10;
      //Appending last digit
      Y = Y * 10 + digit;
      // Shrinking X by discarding the last digit
      X = X / 10;
   }
   return Y;
}
int main() {
   int X = 121;
   int dummy = X;
   int Y = reverse(X);
   if (dummy == Y) {
      cout << "Palindrome Number" << endl;
   } else {
      cout << "Not Palindrome Number" << endl;
   }
   return 0;
}


