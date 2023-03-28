queue<int> modifyQueue(queue<int> q, int k)
{
    // add code here.
    stack<int> s;
    for (int i = 0; i < k; i++)
    {
        int ele = q.front();
        q.pop();
        s.push(ele);
    }
    while (!s.empty())
    {
        int val = s.top();
        s.pop();
        q.push(val);
    }

    int num = q.size() - k;
    while (num--)
    {
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}