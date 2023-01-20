#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "mem is free for data : " << val << endl;
    }
};
void insertNode(Node *&tail, int element, int d)
{
    // assuming that the given element is present in the list
    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non empty list
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(Node *&tail)
{
    Node *temp = tail;
    // cout << tail->data << " ";
    // while (tail->next != temp)
    // {
    //     cout << tail->data << " ";
    //     tail = tail->next;
    // }
    // or by using do while loop as while loop will only work only if list has more than one element
    if (tail == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}
void deleteNode(Node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // 1 node linked list
        if (curr == prev)
        {
            tail = NULL;
        }
        // LL of greater than 2 elements
        else if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    // Node *node1 = new Node(10);
    // Node *tail = node1;
    // print(tail);
    Node *tail = NULL;
    insertNode(tail, 1, 23);
    print(tail);
    // insertNode(tail, 23, 5);
    // print(tail);
    // insertNode(tail, 23, 4);
    // print(tail);
    deleteNode(tail, 23);
    print(tail);
    return 0;
}