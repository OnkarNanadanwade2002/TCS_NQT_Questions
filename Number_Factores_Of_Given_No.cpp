/* Factors of a Given Number
Problem Statement: Find all factors of a number or find all distinct divisors of a natural number.
Example 1:
Input: n = 6
Output: 1,2,3,6
Explanation: 6 is divisible by 1,2,3,6
*/

//TC:- O(N)
#include <iostream>
using namespace std;
 
void Divisor(int n)
{
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            cout <<" " << i;
}
 
int main()
{   int n = 6;
    cout <<"Factors of "<<n<<" are: ";
    Divisor(n);
    return 0;
}

//TC :- O(rootN)
/*
#include <bits/stdc++.h>
using namespace std;
 
void Divisor(int n)
{
     for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                cout <<" "<< i;
 
            else // Otherwise print both
                cout << " "<< i << " " << n/i;
        }
    }
}
int main()
{   int n = 14;
    cout <<"Factors of "<<n<<" are: ";
    Divisor(n);
    return 0;
}
*/



