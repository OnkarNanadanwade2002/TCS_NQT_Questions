/* Sum Of Digits of A Number
Problem Statement: Given an integer, find the sum of digits of that integer.
*/

#include<bits/stdc++.h>
using namespace std;
int getSum(int n)
{
    int d,sum=0;
    while(n!=0)
    {
        d=n%10;
        sum+=d;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<"Sum of digits of the given number is "<<getSum(n);
    return 0;
}


