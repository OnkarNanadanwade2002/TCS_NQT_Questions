/* Find the ASCII value of a character
Problem Statement: Given a character, Find the ASCII value of the character.
Example 1:
Input: c = ‘A’
Output: 65
*/

#include <bits/stdc++.h>

using namespace std;

class ASCII {

  public:

    void value() {

      char c = 'A';
      cout << "The ASCII value of " << c << " is " << int(c);
    }
};
int main() {

  ASCII p1;
  p1.value();

  return 0;
}
