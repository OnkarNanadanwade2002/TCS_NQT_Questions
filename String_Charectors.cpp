/* Remove characters from a string except alphabets
Problem Statement: Write a program to remove all characters from a string except alphabets in a given string
Example 1:
Input: string str = "take12% *&u ^$#forward"
Output: takeuforward
*/
#include<bits/stdc++.h>

using namespace std;
string solve(string str, int n) {
  string ans;
  for (int i = 0; i < n; i++) {
    int ascii = (int) str[i]; // ascii value

    if ((ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122)) // if alphabets
      ans.push_back(str[i]);
  }
  return ans;
}
int main() {

  // Input string
  string str = "take12% *&u ^$#forward";
  int n = str.length();

  cout << "Resultant string:" << "\n";
  cout << solve(str, n) << "\n";
  return 0;
}
