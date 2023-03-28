// appraoch 1
queue<int> rev(queue<int> q)
{
    stack<int> s;

    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while (!s.empty())
    {
        int element = s.top();
        s.pop();
        q.push(element);
    }
    return q;
}

// !approach 2
void reverse(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }
    int ele = q.front();
    q.pop();
    reverse(q);
    q.push(ele);
}
queue<int> rev(queue<int> q)
{
    // add code here.
    reverse(q);
    return q;
}