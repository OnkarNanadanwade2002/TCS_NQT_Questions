/*	Search an Element in an Array :(binary search)
Problem Statement: Search an element in an array and return its position
*/

//if array is sorted
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 6;
	int arr[n] = {3, 5, 6, 7, 9, 10};
	int k = 9;
	int low = 0, high = n - 1;
	int ans = -1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] > k) {
			high = mid - 1;
		}
		else if (arr[mid] < k) {
			low = mid + 1;
		}
		else {
			ans = mid;
			break;
		}
	}
	cout << "The element"<<arr[ans] <<" is present at "<<ans<<" index";
}

//if array is not sorted
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n = 6;
	int arr[n] = {6, 7, 9, 5, 3, 10};
	int k = 10;
	int ans = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] == k) {
			ans = i;
			break;
		}
	}
	cout <<"The element is present in " <<ans<<" index";
}
*/


