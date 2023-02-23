/* Find all Palindrome Numbers in a given range
Problem Statement: Given a range of numbers, find all the palindrome numbers in the range.

Note: A palindromic number is a number that remains the same when its digits are reversed.OR  a palindrome is a number that reads the same forward and backward Eg: 121,1221, 2552
*/

#include<iostream>
using namespace std;
 
// A function to check if n is palindrome
bool isPalindrome(int n)
{
    int reverse = 0;
    int temp = n;
    while(temp>0) {
        reverse = reverse*10 + temp%10;
        temp = temp/10;
    }
                 
            // If n and reverse are same,
            // then n is palindrome
    if(n==reverse)return true;
    return false;
}
 
int main()
{
    int min = 100;
    int max = 150;
    for(int i=min; i<=max; i++) {
        if(isPalindrome(i)) {
            cout<<i <<" ";
        }
    }    
    return 0;
}
