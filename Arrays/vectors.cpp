#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec1;

    vector<int>::iterator ite;
    for (int i = 0; i < 6; i++)
    {
        vec1.push_back(i);
        cout << vec1[i] << " " << endl;
    }
    vec1.pop_back();
    cout << vec1.capacity();
    cout << vec1.size();
    vec1.begin();
    vec1.end();
    sort(vec1.begin(), vec1.end());
    // swap(vec1.begin(), vec1.end());
    for (auto element : vec1)
    {
        cout << element;
    }

    return 0;
}