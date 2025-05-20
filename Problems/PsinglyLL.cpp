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
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
    Node(int data1, Node *nxt)
    {
        data = data1;
        next = nxt;
    }
};
Node *insertFront(Node *head, int item)
{
    Node *newNode = new Node(item);
    newNode->next = head;
    return newNode;
}
Node *insertLast(Node *head, int item)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(item);
    temp->next = newNode;
    return head;
}
Node *deleteLast(Node *head)
{
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}
Node *deletePosition(Node *head, int position)
{
    Node *temp = head;
    int cnt = 1;
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    while (temp != NULL && temp->next != NULL)
    {
        if (cnt == position - 1)
            break;
        cnt++;
        temp = temp->next;
    }
    if (temp->next->next == nullptr)
    {
        delete temp->next;
        temp->next = nullptr;
        return head;
    }
    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
    return head;
}
Node *insertPosition(Node *head, int position, int item)
{
    Node *temp = head;
    int cnt = 1;
    if (position == 1)
        return insertFront(head, item);
    while (temp->next != nullptr)
    {
        if (cnt == position - 1)
            break;
        cnt++;
        temp = temp->next;
    }
    if (temp->next == nullptr)
    {
        Node *newNode = new Node(item);
        temp->next = newNode;
        return head;
    }
    Node *newNode = new Node(item);
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

void printLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(5);
    Node *first = new Node(7);
    Node *second = new Node(10);
    head->next = first;
    first->next = second;
    head = deletePosition(head, 3);
    printLL(head);
}