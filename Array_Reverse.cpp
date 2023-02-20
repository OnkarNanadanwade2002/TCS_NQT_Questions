//Reverse a given Array
//Problem Statement: You are given an array. The task is to reverse the array and print it. 
#include<iostream>
using namespace std;
void Reverse_Array(int arr[],int n)
{
	int s=0,e=n-1;
	while(s<e)
	{
		swap(arr[s++],arr[e--]);
	}
	cout<<"\n after reverse ::";
		for(int i=0;i<n;i++)
	{
		cout<<" "<<arr[i];
	}
	
}
int main()
{
	int n;
	cin>>n;
	int arr[10];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	Reverse_Array(arr,n);
	return 0;
}
