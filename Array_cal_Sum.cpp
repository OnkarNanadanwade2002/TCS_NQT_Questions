//Calculate Sum of the Elements of the Array
//Problem Statement: Given an array, we have to find the sum of all the elements in the array

#include<bits/stdc++.h>
using namespace std;
int main() {

	int n = 6;
	int arr[] = {1, 2, 3, 4, 5,10};
	int initialSum = 0;
	cout <<"The sum of the elements of the array is ";
	cout<<accumulate(arr, arr + n, initialSum);

}



