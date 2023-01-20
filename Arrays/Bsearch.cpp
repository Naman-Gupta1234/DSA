#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int l, h, mid;
    l = 0;
    h = n - 1;
    mid = (l + h) / 2;
    while (l <= h)
    {
        if (arr[mid] == key)
            return mid;
        else if (key > arr[mid])
        {
            l = mid + 1;
        }
        else if (key < arr[mid])
        {
            h = mid - 1;
        }
        mid = (l + h) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {1, 3, 5, 7, 9};
    int index = binarysearch(even, 6, 132);
    int index2 = binarysearch(odd, 5, 7);
    cout << index << endl;
    cout << index2 << endl;
    return 0;
}






