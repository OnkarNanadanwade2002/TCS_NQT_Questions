/* Check whether a given number is even or odd
Problem Statement: Given a number n, check whether a given number is even or odd.
*/
#include<bits/stdc++.h>
using namespace std;

int remainder(int n) {
    return (n % 2);
  }

int main() {
    int n = 5;
    if (remainder(n) == 0) {
      cout<<n <<" is even.";
    } else {
      cout<<n<<" is odd.";
    }
  }
  
