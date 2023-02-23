/* Check if a number is Automorphic Number
Problem Statement: Given a number, check if it is automorphic or not. A number is called an Automorphic number if and only if its square ends in the same digits as the number itself.
Example 1:
Input Format: N = 76
Result: Automorphic Number
Explanation: Calculating 76 * 76 gives 5776, it ends with the given number.
ex :- 25
*/

#include <iostream>

using namespace std;

bool isAutomorphic(int N) {

  int sq = N * N;

  while (N > 0) {

    // Check if last digit is equal or not
    if (N % 10 != sq % 10)
      return false;

    // Reducing the number and its square
    N /= 10;
    sq /= 10;
  }

  return true;
}

int main() {
  int N = 25;
  if(isAutomorphic(N))
  cout<<"Automorphic Number"<<endl;
  else
  cout<<"Not Automorphic Number"<<endl;
  return 0;
}

