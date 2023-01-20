#include <bits/stdc++.h>
using namespace std;

int getmax(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);

        // another method
        // if (arr[i] > max)
        // {
        //     maxi = arr[i];
        // }
    }
    return maxi;
}

int getmin(int arr[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cout << "Enter size of array:";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Max Element is " << getmax(arr, size) << endl;
    cout << "Min Element is " << getmin(arr, size) << endl;

    return 0;
}
