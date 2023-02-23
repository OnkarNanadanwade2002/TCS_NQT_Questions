/* Check if the number is an abundant number or not
Problem Statement: Check if the number is an abundant number or not.
Example 1:
Input: 18
Output: Abundant Number
Explanation: Divisors of 18 are 1,2,3,6,9. 1+2+3+6+9=21, Since 21 is greater than 18, 18 is an abundant number.
*/

//TC: - O(N)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 18;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			sum += i;
		}
	}
            sum-=n;
	if (sum > n) {
		cout << "Abundant Number" << "\n";
	}
	else {
		cout << "Not Abundant Number" << "\n";
	}

}


