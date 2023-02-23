/* Calculate Frequency of characters in a String
Problem Statement: Given a string, calculate the frequency of characters in a string.
Example 1:
Input: takeuforward
Output: a2 d1 e1 f1 k1 o1 r2 t1 u1 w1 
*/
#include <iostream>
#include <algorithm>
using namespace std;
void Printfrequency(string str)
{
  sort(str.begin(), str.end());
  char ch = str[0];
  int count = 1;
  for (int i = 1; i < str.length(); i++)
  {
    if (str[i] == ch)
      count++;
    else
    {
      cout << ch << count << " ";
      count = 1;
      ch = str[i];
    }
  }
  cout << ch << count << " ";
}

int main()
{
  string str = "takeuforward";
  Printfrequency(str);
  return 0;
}

