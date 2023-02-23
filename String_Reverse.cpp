/* Reverse a String
Problem Statement: Reverse a String. Write a program that reverses a given string (in-place).
*/

#include<iostream>
using namespace std;
void Reverse(string str)
{
	int s=0,e=str.length()-1;
	while(s<e)
	{
		swap(str[s++],str[e--]);
	}
	cout<<" "<<str;
}
int main()
{
	string str;
	cin>>str;
	Reverse(str);
	return 0;
}
