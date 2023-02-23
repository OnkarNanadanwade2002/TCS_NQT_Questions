/* Print all the duplicates in the string
Print all the duplicates in the string
Example 1:
Input:
 str= "sinstriiintng"
Output:
i - 4
n - 3
s - 2
t - 2
*/
#include<iostream>

using namespace std;

int main() {
  string str = "sinstriiintng";

  int counts[26] = {
    0
  };

  for (int i = 0; i < str.length(); i++)
    counts[str[i] - 'a']++;

  for (int i = 0; i < 26; i++)
    if (counts[i] > 1)
      cout << (char)(i + 'a') << " - " << counts[i] << "\n";

  return 0;
}
