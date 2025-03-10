#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};
Node *insertEnd(Node *head, int data)
{
    Node *newNode = new Node(data);
    if (head == nullptr)
        return  newNode;

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

void traverseList(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = new Node(5);
    Node *first = new Node(6);
    Node *second = new Node(7);
    head->next = first;
    first->next = second;
    head = insertEnd(head, 2);
    traverseList(head);
    return 0;
}