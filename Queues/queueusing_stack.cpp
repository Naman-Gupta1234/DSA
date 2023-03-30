// CPP program to implement Queue using
// two stacks with costly enQueue()
#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    stack<int> s1, s2;

    void enQueue(int x)
    {
        // Move all elements from s1 to s2
        while (!s1.empty())
        {
            int val = s1.top();
            s1.pop();
            s2.push(val);
        }
        s1.push(x);
        while (!s2.empty())
        {
            int val = s2.top();
            s2.pop();
            s1.push(val);
        }
    }

    // Dequeue an item from the queue
    int deQueue()
    {
        // if first stack is empty
        if (s1.empty())
        {
            return -1;
        }
        else
        {
            int val = s1.top();
            s1.pop();
            return val;
        }
    }
};

// Driver code
int main()
{
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);

    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';

    return 0;
}
