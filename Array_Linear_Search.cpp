/*	Search an Element in an Array :(linear search)
Problem Statement: Search an element in an array and return its position
*/

//if array is unsorted
#include<iostream>
using namespace std;
void LinearSearch(int arr[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			cout<<"\n"<<arr[i]<<" is present at :"<<i;
			return;
		}
	}
	cout<<"\n"<<key<<" is not present :";
}
int main()
{
	int arr[10],n;
	cout<<"\n size :";
	cin>>n;
	cout<<"\n array elements :";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int key;
	cout<<"\n search :";
	cin>>key;
	LinearSearch(arr,n,key);
	return 0;
}

