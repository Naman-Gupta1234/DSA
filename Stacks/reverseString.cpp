#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string str = "Naman";
    stack<char> n;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        n.push(ch);
    }
    string ans = "";
    while (!n.empty())
    {
        char ch = n.top();
        ans.push_back(ch);
        n.pop();
    }
    cout << ans;

    return 0;
}