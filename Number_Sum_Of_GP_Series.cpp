/*  Program to find Sum of GP Series
Problem Statement: Given a geometric Progression (G.P) sequence with some inputs as:-
Example 2:
Input: a=3 , r=5 , n=2
Output: 18
Explanation: The sum of the given GP Series is 18
*/

// TC : O(N)
#include <iostream>
using namespace std;
// Function to find sum of G.P. series
float SumofGP(float a, float r, int n)
{
  float sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = sum + a;
    a = a * r;
  }
//  sum= 2(24-1)/(2-1) =30 
  return sum;
}
int main()
{
  float a = 2;     // First Term of G.P.
  float r = 1.5; // Common Ration of G.P.
  int n = 4;     // Number of terms in a G.P.
  cout << "Sum of GP Series is "<<SumofGP(a, r, n);
  return 0;
}

//TC : O(1)
/*
#include <iostream>
#include <math.h>
using namespace std;
// Function to find sum of G.P. series
float SumofGP(float a, float r, int n)
{
  float sum = a * (pow(r, n) - 1) / (r - 1);
  return sum;
}
int main()
{
  float a = 2; // First Term of G.P.
  float r = 2; // Common Ration of G.P.
  int n = 4;   // Number of terms in a G.P.
  cout << "Sum of GP Series is "<<SumofGP(a, r, n);
  return 0;
}*/
