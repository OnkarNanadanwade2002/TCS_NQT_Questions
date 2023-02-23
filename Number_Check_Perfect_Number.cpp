/* Check whether a number is Perfect Number or not
Problem Statement: Perfect Number. Write a program to find whether a number is a perfect number or not.

A perfect number is defined as a number that is the sum of its proper divisors ( all its positive divisors excluding itself). 
ex :- 6  , 8 For 6 and 28 , the sum of their proper divisors (1+2+3) and (1+4+7+14) is equal to the respective numbers and for 15 it is not.

*/

// TC :- O(N)
#include <iostream>

using namespace std;

bool isPerfect(int n) {

  int sum = 0;
  for (int i = 1; i <= n - 1; i++) {
    if (n % i == 0)
      sum = sum + i;
  }
  if (sum == n)
    return true;
  else return false;
}

int main() {
  // your code goes here
  bool ex1 = isPerfect(6);
  bool ex2 = isPerfect(15);
  bool ex3 = isPerfect(28);

  if (ex1 == true) {
    cout << "6 is a perfect number" << endl;
  } else cout << "6 is not a perfect number" << endl;

  if (ex2 == true) {
    cout << "15 is a perfect number" << endl;
  } else cout << "15 is not a perfect number" << endl;

  if (ex3 == true) {
    cout << "28 is a perfect number" << endl;
  } else cout << "28 is not a perfect number" << endl;

  return 0;
}

//TC:- O(rootN)
/*
#include <iostream>
using namespace std;


bool isPerfect(int n){
    
    int sum=0;
    for(int i = 1; i*i <= n; i++){
        if(n%i==0)
            if(i*i==n || i==1)
                sum =sum + i;
            else sum = sum+ i + n/i;
    }
    if(sum==n)
        return true;
    else return false;
}

int main() {
	// your code goes here
	bool ex1 = isPerfect(6);
	bool ex2 = isPerfect(15);
	bool ex3 = isPerfect(28);
	
	if(ex1== true){
	    cout<<"6 is a perfect number"<<endl;
	}
	else cout<<"6 is not a perfect number"<<endl;
	
	if(ex2== true){
	    cout<<"15 is a perfect number"<<endl;
	}
	else cout<<"15 is not a perfect number"<<endl;
	
	if(ex3== true){
	    cout<<"28 is a perfect number"<<endl;
	}
	else cout<<"28 is not a perfect number"<<endl;
	
	return 0;
}*/




