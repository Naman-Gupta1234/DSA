#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int size, int x)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
            return i;
    }
    return 0;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 45, 21, 32, 48};
    int size = sizeof(array) / sizeof(array[0]);
    int x = 45;
    int found = search(array, size, x);
    cout << found << endl;
    if (found)
        cout << "Found at index " << found << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}