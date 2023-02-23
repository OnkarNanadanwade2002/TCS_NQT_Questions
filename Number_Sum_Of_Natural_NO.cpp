/* Sum of first N Natural Numbers
Problem statement: Given a number ‘N’, find out the sum of the first N natural numbers.
*/

#include<bits/stdc++.h>
using namespace std;
 void solve(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
      sum += i;
    }
    cout<<"The sum of the first "<<n<<" numbers is: "<<sum<<endl;
  }
 int main() {

    solve(5);
    solve(6);
  }
