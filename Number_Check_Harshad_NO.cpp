/* Check if the given number is Harshad(Or Niven) Number
Problem Statement: Check if the number is a Harshad(or Niven) number or not.
Example 1:
Input: 378
Output: Yes it is a Harshad number.
Explanation: 3+7+8=18. 378 is divisible by 18. Therefore 378 is a harshad number.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 378;
	int temp = n;
	int sum = 0;
	while (temp!=0) {
		sum += temp % 10;
		temp /= 10;
	}
	if (n % sum == 0) {
		cout << "YES it is Harshad Number" << "\n";
	}
	else {
		cout << "NO it is not Harshad Number" << "\n";
	}

}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int num=378;
	string s = to_string(num);
	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		sum += s[i] - '0';
	}
	if (num % sum == 0) {
		cout << "YES it is Harshad Number" << "\n";
	}
	else {
		cout << "NO it is not a Harshad Number" << "\n";
	}

}
*/


