/* Permutations in which N people can occupy R seats
Problem Statement: Find permutations in which n people can occupy r seats in a classroom.
Example 1:
Input: N = 5, r = 3
Output: 60
Explanation: To permute n people in r seats we have to find the value of n!/(n-r)!.The value of 5!/(5-3)! Is 60.
*/

// TC : - O(N)
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n = 6, r = 4;
	int ans = 1;
	for (int i = n; i >= n - r + 1; i--) {
		ans *= i;
	}
	cout << ans;
}

/*
#include<bits/stdc++.h>
using namespace std;
int fact(int n) {
	int ans = 1;
	for (int i = 1; i <= n; i++) {
		ans *= i;
	}
	return ans;
}
int main() {
	int n = 6, r = 4;
	int num = fact(n);
	int den = fact(n - r);
	cout << num / den;
}
*/

