//Average of all the elements in the array
//Problem Statement: Given an array, we have to find the average of all the elements in the array.
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n = 5;
	int arr[] = {1, 2, 3, 4, 5};
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (double)arr[i];
	}
	double average = sum / n;
	cout << "The average is "<<average;

}




