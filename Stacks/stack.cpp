#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int top;
    int size;
    int *arr;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0) // atlest one element should be there to pop
            top--;
        else
            cout << "Stack Underflow" << endl;
    }

    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "stack is empty" << endl;
            return -1;
        }
    }

    bool isempty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};

int main()
{
    Stack st(4);
    st.push(12);
    st.push(45);
    st.push(98);
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    st.pop();
    cout << st.peek() << endl;
    cout << st.isempty();

    return 0;
}