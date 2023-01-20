#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n)
{
    if (n == 0 || n == 1)
        return 1;
    if (arr[0] > arr[1])
        return false;
    else
    {
        int ans = isSorted(arr + 1, n - 1);
        return ans;
    }
}
int Sumofarray(int arr[], int n)
{
    int sum = 0;
    if (n <= 0)
        return 0;
    else
    {
        return arr[0] + Sumofarray(arr + 1, n - 1);
    }
}

bool Lsearch(int arr[], int n, int x)
{
    if (n == 0)
        return 0;
    if (arr[0] == x)
        return 1;
    else
        return Lsearch(arr + 1, n - 1, x);
}

int Bsearch(int arr[], int l, int h, int x)
{
    if (l > h)
        return -1;

    int mid = l + (h - l) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
        Bsearch(arr, l, mid - 1, x);
    else if (arr[mid] < x)
        Bsearch(arr, mid + 1, h, x);
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << isSorted(arr, 9);
    cout << endl;
    cout << Sumofarray(arr, 9);
    cout << endl;
    cout << Lsearch(arr, 9, 0);
    cout << Bsearch(arr, 0, 8, 9);
    return 0;
}
