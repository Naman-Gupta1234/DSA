// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// #define PI 3.14
// int main()
// {
//     int pi = 3;
//     /* int PI = 3;   * would give erorr.  */

//     double area = PI * 2 * 3 * pi;
//     cout << area;

//     return 0;
// }

// C++ program to illustrate macros
#include <iostream>
using namespace std;

// Macro definition
#define AREA(l, b) (l * b)
#define min(a, b) (((a) < (b)) ? (a) : (b))

// Driver Code
int main()
{
     // Given lengths l1 and l2
     int l1 = 10, l2 = 5, area;

     // Find the area using macros
     area = AREA(l1, l2);

     // Print the area
     cout << "Area of rectangle"
          << " is: " << area;
     // Given two number a and b
     int a = 18;
     int b = 76;

     cout << "Minimum value between"
          << a << " and " << b
          << " is: " << min(a, b);
     return 0;
}
