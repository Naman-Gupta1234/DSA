#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};
class Stack
{
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        if (!temp)
        {
            cout << "\nStack Overflow";
            exit(1);
        }
        else if (temp != NULL)
        {
            temp->data = data;
            temp->next = top;
            top = temp;
        }
    }

    bool isEmpty()
    {
        return top == NULL;
    }
    int peek()
    {
        if (!isEmpty())
            return top->data;
        else
            exit(1);
    }
    void pop()
    {
        Node *temp;
        if (top == NULL)
        {
            cout << "\nStack Underflow" << endl;
            exit(1);
        }
        else
        {
            temp = top;
            top = top->next;
            free(temp);
        }
    }
};

int main()
{
    Stack s;
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);
    cout << "Top element is " << s.peek() << endl;
    s.pop();
    cout << "Top element is " << s.peek() << endl;
}