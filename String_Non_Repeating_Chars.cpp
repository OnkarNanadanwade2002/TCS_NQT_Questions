/* Find Non-repeating characters of a String
Problem:  Given a string, print non-repeating characters of the string.
Example 1:
Input: string = “google”
Output: l,e
*/
#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:

    void nonRepeating(string & st, int freq[200]) {
      int i, j;
      int l = st.length();

      for (int i = 0; i < l; i++) {
        if (st[i] == ' ') // ignoring the space in the string
          continue;
        else
          freq[st[i] - 'a']++; // incrementing each character's frequency
      }

      // Printing non-repeating characters of the string
      for (int i = 0; i < l; i++) {
        if (freq[st[i] - 'a'] == 1 && st[i] != ' ') {
          cout << st[i] << " ";
        }
      }
    }
};
int main() {

  string st = "take u forward";

  int l = st.length();
  int freq[200] = {
    0
  };

  Solution obj;
  cout << "Non-Repeating characters: ";
  obj.nonRepeating(st, freq);

  return 0;
}
/*
#include<iostream>

using namespace std;

class Solution {
  public:

    void nonRepeating(string & st, int freq[200]) {
      int i, j;
      int l = st.length();

      for (int i = 0; i < l; i++) {
        freq[i] = 1;
        for (int j = i + 1; j < l; j++) {

          if (st[i] == st[j]) {
            freq[i]++;

            st[j] = '-'; // set st[j] to - to avoid visited character
          }
        }
      }

      for (int i = 0; i < l; ++i) {
        if (freq[i] == 1 && st[i] != ' ' && st[i] != '-') {
          cout << st[i] << " ";
        }
      }
    }
};
int main() {

  string st = "Takeuforward";

  int l = st.length();
  int freq[200] = {
    0
  };

  Solution obj;
  cout << "Non-repeative character:" << "\n";
  obj.nonRepeating(st, freq);

  return 0;
}
*/
