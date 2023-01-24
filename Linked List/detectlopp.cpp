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
};
bool detectloop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] = true)
            return true;

        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

// Floyd cycle detection algo

Node *floydDetectLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast - fast->next;
        }
        slow = slow->next;
        if (slow == fast)
            return true;
    }
    return false;
}

Node *getStartingNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *intersection = floydDetectLoop(head);
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node *head)
{
    if (head == NULL)
        return;
    Node *startofloop = getStartingNode(head);
    Node *temp = head;
    while (temp != startofloop)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}