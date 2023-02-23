/* Problem Statement: Check if the given year is a leap year or not.*/

#include<bits/stdc++.h>
using namespace std;
bool yyear(int year)
{
    if(year % 400 == 0)
    return true;
    if(year % 100 == 0)
    return false;
    if(year % 4 == 0)
    return true;
    return false;
}
int main()
{
    int year=1996;
    if(yyear(year))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main() {
	int year = 2000;
	if (((year % 4 == 0) && (year % 100 != 0)) ||(year % 400 == 0)) {
		cout << "Yes" << "\n";
	}
	else {
		cout << "No" << "\n";
	}
}
*/


