#include <bits/stdc++.h>
void interLeaveQueue(queue<int> &q)
{
    queue<int> newq;
    int n = q.size() / 2;
    while (n--)
    {
        newq.push(q.front());
        q.pop();
    }
    while (!newq.empty())
    {
        q.push(newq.front());
        newq.pop();
        int ele = q.front();
        q.pop();
        q.push(ele);
    }
}