/* Greatest of three numbers
Problem Statement: Given three numbers. Find the greatest of three numbers.
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main() {
	double num1 = 1, num2 = 3, num3 = 5;
	cout << "The maximum of the three numbers is "<<max(num1, (num2, num3));
}
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	double num1 = 1, num2 = 3, num3 = 5;
	if (num1 > num2 && num1 > num3) {
		cout <<"The greatest of the three numbers is "<< num1;
	}
	else if (num2 > num1 && num2 > num3) {
		cout <<"The greatest of the three numbers is "<< num2;
	}
	else {
		cout <<"The greatest of the three numbers is "<< num3;
	}
}

