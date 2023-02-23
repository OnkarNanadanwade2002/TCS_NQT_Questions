/* Program to Find Roots of a quadratic equation
Problem Statement: The standard form of a quadratic equation is:

ax2 + bx + c = 0, where a, b and c are real numbers and a != 0

You have given a, b, c of the equation, you have found the roots of the equation.
Example 1:
Input: a = 1, b = -3, c = -10
Output: Roots are real and different, i.e(5 , -2).
*/

#include <bits/stdc++.h>
using namespace std;
 
 
void Roots(int a, int b, int c)
{
    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));
 
    if (d > 0) {
        cout << "Roots are real and different \n";
        double root1 = (double)(-b + sqrt_val) / (2 * a);
        double root2 = (double)(-b - sqrt_val) / (2 * a);
        cout << root1 <<"\n"<< root2;
    }
    else if (d == 0) {
        cout << "Roots are real and same \n";
        double root1 = -(double)b / (2 * a);
        double root2 = -(double)b / (2 * a);
        cout << root1 <<"\n" <<root2;
    }
    else // d < 0
    {
        cout << "Roots are complex \n";
        cout << -(double)b / (2 * a) << " + i" << sqrt_val
            << "\n"
            << -(double)b / (2 * a) << " - i" << sqrt_val;
    }
}
 
int main()
{
    int a = 1, b = -3, c = -10;        
    Roots(a, b, c);
 
    return 0;
}

