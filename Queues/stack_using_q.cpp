/* Program to implement a stack using
two queue */
#include <bits/stdc++.h>

using namespace std;

class Stack
{
    // Two inbuilt queues
    queue<int> q1, q2;

public:
    void push(int x)
    {
        // Push x first in empty q2
        q2.push(x);
        while (!q1.empty())
        {
            int val = q1.front();
            q1.pop();
            q2.push(val);
        }
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
    }

    void pop()
    {
        // if no elements are there in q1
        if (!q1.empty())
        {
            q1.pop();
        }
        else
            return -1;
    }

    int top()
    {
        if (q1.empty())
            return -1;
        return q1.front();
    }

    int size()
    {
        return q1.size();
    }
};

// Driver code
int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "current size: " << s.size() << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;

    cout << "current size: " << s.size() << endl;
    return 0;
}
// This code is contributed by Chhavi
