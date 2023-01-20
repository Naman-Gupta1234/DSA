#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "mem free for node with data  " << val << endl;
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int d)
{
    // if empty list
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // insert at end
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, d);
        return;
    }
    // insert at middle
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}
void deleteNode(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = head->next;
        head = temp->next;
        temp->next = NULL;

        // memory free
        delete temp;
    }
    else // for deleting node in middle or last
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    //  what if we dont make a node and start with null
    // Node *node1 = new Node(10);
    // Node *head = node1;
    // Node *tail = node1;
    Node *head = NULL;
    Node *tail = NULL;
    // print(head);
    // cout << getLength(head) << endl;

    insertAtHead(head, tail, 11);
    // cout << "Head:" << head->data << endl;
    // cout << "Tail:" << tail->data << endl;

    insertAtHead(head, tail, 142);
    // cout << "Head:" << head->data << endl;
    // cout << "Tail:" << tail->data << endl;
    insertAtHead(head, tail, 12);
    // cout << "Head:" << head->data << endl;
    // cout << "Tail:" << tail->data << endl;
    print(head);

    insertAtTail(tail, head, 90);
    // cout << "Head:" << head->data << endl;
    // cout << "Tail:" << tail->data << endl;
    print(head);
    insertAtPosition(tail, head, 4, 32);
    // cout << "Head:" << head->data << endl;
    // cout << "Tail:" << tail->data << endl;
    print(head);
    deleteNode(head, 4);
    print(head);

    return 0;
}