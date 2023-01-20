// Pattern : 111
//           222
//           333
// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, j, n;
//     cout << "Enter n:" << endl;
//     cin >> n;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Pattern : 1234
//           1234
//           1234
//           1234

// Pattern : 1
//           23
//           456
// #include <iostream>
// using namespace std;

// int main()
// {

//     int i, j, n;
//     cout << "Enter Number:" << endl;
//     cin >> n;
//     int count = 1;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {

//             cout << count << " ";
//             count++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Pattern: 1
//          21
//          321
//          4321

// #include <iostream>
// using namespace std;

// int main()
// {

//     int i, j, n;
//     cout << "Enter Number:" << endl;
//     cin >> n;
//     int count = 1;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = i; j >= 1; j--)
//         {

//             cout << j << " ";
//             // count++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, j, n;
//     cout << "Enter Number:" << endl;
//     cin >> n;
//     char count = 'A';
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n; j++)
//         {
//             // char ch = 'A' + j - 1;
//             // cout << ch;
//             cout << count;
//             count = count + 1;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, j, n;
//     cout << "Enter Number:" << endl;
//     cin >> n;
//     char ch = 'A';
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n; j++)
//         {
//             // char ch = 'A' + j - 1;
//             char ch = 'A' + i + j - 2;
//             cout << ch;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, j, n;
//     cout << "Enter Number:" << endl;
//     cin >> n;

//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             // char ch = 'A' + j - 1;
//             char ch = 'A' + i + j - 2;
//             cout << ch;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, j, n;
//     cout << "Enter Number:" << endl;
//     cin >> n;

//     for (i = 1; i <= n; i++)
//     {
//         char ch = 'A' + n - i;
//         for (j = 1; j <= i; j++)
//         {
//             // char ch = 'A' + j - 1;
//             cout << ch;
//             ch = ch + 1;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, j, n;
//     cout << "Enter Number:" << endl;
//     cin >> n;

//     for (i = 1; i <= n; i++)
//     {
//         int space = n - i;
//         int k;
//         while (space)
//         {
//             cout << " ";
//             space--;
//         }
//         for (j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter Number:" << endl;
    cin >> n;

    for (i = n; i >= 1; i++)
    {
        // int m = 1;
        for (int k = 1; k <= i; k++)
        {
            cout << k;
        }
        for (int m = i; m < n; m++)
        {
            cout << "**";
        }
        for (j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}