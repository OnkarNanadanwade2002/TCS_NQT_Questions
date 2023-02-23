/* Check if a number is a Strong Number or not
Problem Statement: Given an integer Print “YES” if it is a strong number else print “NO”.
Note : 

When the sum of factorial of individual digits of a number is equal to the original number the number is called a strong number. 
Strong number is also known as Krishnamurthi number/Peterson Number.

Examples 1:
Input: N = 145
Output: Yes
Explanation: 1! + 4! + 5! = 145. Hence 145 is a strong number.
*/


#include<iostream>
using namespace std;
//Function to calculate the factorial of the individual digits
int Factorial(int n) {
   int fact = 1;
   for (int i = 1; i <= n; i++) {
      fact = fact * i;
   }
   return fact;
}
//Function to compute sum of factorials
int Strong_No(int num) {
   int sum = 0;
   //Extract all the digits from num
   while (num > 0) {
      int digit = num % 10;
      sum = sum + Factorial(digit);
      num = num / 10;
   }
   return sum;
}
int main() {
   int number = 145;
   int answer = Strong_No(number);
   if (answer == number && number != 0) {
      cout << "YES";
   } 
else {
      cout << "NO";
   }
}

