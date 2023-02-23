/* Remove All Duplicates from a String
Problem Statement: Given a String remove all the duplicate characters from the given String.
Example 1:
Input: s = "bcabc"
Output: “bca"
*/
#include<bits/stdc++.h>
//TC O(N^2)
 
using namespace std;
 
string removeDuplicateLetters(string s) {
  string ans = "";
  for (int i = 0; i < s.length(); i++) {
    int j = 0;
    for (j = 0; j < i; j++) {
      if (s[i] == s[j]) //same character found
      {
        break;
      }
    }
    if (i == j) {
      ans += s[i];
    }
  }
  return ans;
}
int main() {
  string str = "cbacdcbc";
  cout<<"Original String: "<<str<<endl;
  cout <<"After removing duplicates: " <<removeDuplicateLetters(str) << endl;
  return 0;
}

/*
//Using a boolean array  Tc : O(N)
#include<bits/stdc++.h>
 
using namespace std;
 
string removeDuplicateLetters(string s) {
  string ans = "";
  vector < bool > map(26, false);
  for (int i = 0; i < s.length(); i++) {
    if (map[s[i] - 'a'] == false) {
      ans += s[i];
      map[s[i] - 'a'] = true;
    }
  }
  return ans;
}
int main() {
  string str = "cbacdcbc";
  cout << "Original String: "<<str<<endl<<"After removing duplicates: "
  <<removeDuplicateLetters(str) << endl;
  return 0;
}
*/
