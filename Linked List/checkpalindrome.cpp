bool checkpain(vector<int> arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (arr[s] != arr[e])
            return 0;

        s++;
        e--;
    }
    return 1;
}
bool checkpain(vector<int> arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (arr[s] != arr[e])
            return 0;

        s++;
        e--;
    }
    return 1;
}