/* Find LCM of two numbers
Problem Statement: Find lcm of two numbers.
*/
//Solution : Using Euclidean’s theorem.
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}
int main()
{
	int a = 4, b = 8;
	int g = gcd(a, b);
	int lcm = (a * b) / g;
	cout <<"The LCM of the two given numbers is "<<lcm;
}
