/* Maximum occurring character in a string
Maximum occurring character in a string

Problem Statement: Given a string, return the character that occurs the maximum number of times in the string. If the maximum occurrence of two or more characters is the same, return any one of them.
Example 1:
Input: str = “apple”
Output: p
*/


// using frequency array
#include <iostream>
using namespace std;
char maxOccurringChar(string str) {
   char ans;
   int maxfreq = 0, n = str.length();
   int count[256] = {0};
   for (int i = 0; i < n; i++) {
      count[str[i]]++;
      if (count[str[i]] > maxfreq) {
         maxfreq = count[str[i]];
         ans = str[i];
      }
   }
   return ans;
}
int main() {
   string str = "takeuforward";
   cout << "Maximum occurring character is " << maxOccurringChar(str) << endl;
}

/*
//using function
#include <iostream>
#include <algorithm>
using namespace std;
//Function to find Maximum Occurring Character
char maxOccurringChar(string str) {
   char ans = str[0];
   int i, curr_freq = 0, max_freq = 0, n = str.length();
   for (i = 0; i < n; i++) {
      if (str[i] == str[i - 1]) {
         curr_freq++;
      } 
      else {
         if (max_freq < curr_freq) {
            max_freq = curr_freq;
            ans = str[i - 1];
         }
         curr_freq = 0;
      }
   }
   if (max_freq < curr_freq) {
      max_freq = curr_freq;
      ans = str[i - 1];
   }
   return ans;
}
int main() {
   string str = "takeuforward";
   //sort the string
   sort(str.begin(), str.end());
   cout <<  "Maximum Occurring Character is " << maxOccurringChar(str);
}
*/

