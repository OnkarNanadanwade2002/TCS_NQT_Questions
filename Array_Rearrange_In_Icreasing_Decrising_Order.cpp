//Rearrange array in increasing-decreasing order
//Problem Statement: Rearrange the array such that the first half is arranged in increasing order, and the second half is arranged in decreasing order

#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector<int> arr;/*= {8, 7, 1, 6, 5, 9};*/
	int n,x=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	 n = arr.size();
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n ; i++) {
		cout << arr[i] << " ";
	}
	cout<<"\n";
	for (int i = n - 1; i >=0; i--) {
		cout << arr[i] << " ";
	}
}







