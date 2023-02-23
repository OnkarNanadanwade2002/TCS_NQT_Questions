/* Calculate the Power of a Number : Binary Exponentiation
Problem Statement: Find the Power of a number.
ex : - Input: N = 5, k=3
Output: 125
*/
#include<iostream>
using namespace std;
int main()
{
	int n = 5, k = 3;
	int ans = 1;
	for (int i = 0; i < k; i++) {
		ans = ans * n;
	}
	cout <<n<<" raised to the power "<<k<<" is "<< ans;
}
