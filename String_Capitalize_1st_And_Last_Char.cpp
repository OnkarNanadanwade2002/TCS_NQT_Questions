/*Capitalize first and last character of each word of a string
Problem Statement: Given a string, write a program to Capitalize the first and last character of each word of that string.
Example 1:
Input: String str = "take u forward is awesome"
Output: “TakE U ForwarD IS AwesomE”
*/

/*
using functions.
#include<bits/stdc++.h>

using namespace std;

void Capitalize(string str, int size) {
  for (int i = 0; i < size; i++) {
    if (i == 0 || i == (size - 1)) // Converting first and last index character to
    uppercase
    {
      str[i] = towupper(str[i]);
    } else if (str[i] == ' ') // Converting characters present before and after
     space to uppercase
    {
      str[i - 1] = towupper(str[i - 1]);
      str[i + 1] = towupper(str[i + 1]);

    }
  }

  cout<<"String after capitalizing the first and last letter of each word of the
  string:" << "\n";
  cout << str << "\n";

}
int main() {

  // Input string
  string str = "take u forward Is awesome";
  int size = str.length();

  Capitalize(str, size);
  return 0;
}
*/

#include<bits/stdc++.h>

using namespace std;
void Capitalize(string str, int size) {
  for (int i = 0; i < size; i++) {
    if (i == 0 || i == (size - 1) && (int) str[i] >= 97) // Converting first and
    last index character to uppercase
    {
      str[i] = ((char)((int) str[i] - 32));
    } else if (str[i] == ' ') // Converting characters present before and after
     space to uppercase
    {
      if (((int) str[i - 1] - 32) >= 65) // Checking if already not an uppercase
      letter
        str[i - 1] = ((char)((int) str[i - 1] - 32));

      if (((int) str[i + 1] - 32) >= 65) // Checking if already not an uppercase
      letter
        str[i + 1] = ((char)((int) str[i + 1] - 32));
    }
  }

  cout<<"String after capitalizing the first and last letter of each word of the
  string:<< "\n";
  cout << str << "\n";
}
int main() {

  // Input string
  string str = "take u forward is awesome";
  int size = str.length();

  Capitalize(str, size);
  return 0;
}

