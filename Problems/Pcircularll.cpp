#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};
Node *insertFront(Node *last, int element)
{
    Node *newNode = new Node(element);
    newNode->next = last->next;
    last->next = newNode;
    return last;
}
Node *insertPosition(Node *last, int pos, int element)
{
    int cnt = 1;
    if (pos == 1)
    {
        return insertFront(last, element);
    }
    Node *head = last->next;
    while (true)
    {
        if (cnt == pos - 1)
            break;
        cnt++;
        head = head->next;
        if (head == last->next)
            break;
    }
    Node *newNode = new Node(element);
    newNode->next = head->next;
    head->next = newNode;
    if (last == head)
        last = newNode;
    return last;
}
Node *insertLast(Node *last, int element)
{
    Node *newNode = new Node(element);
    newNode->next = last->next;
    last->next = newNode;
    last = newNode;
    return last;
}
Node *deleteFront(Node *last)
{
    Node *temp = last->next;
    last->next = last->next->next;
    delete temp;
    return last;
}
Node *deleteLast(Node *last)
{
    Node *head = last->next;
    while (head->next != last)
    {
        head = head->next;
    }
    Node *temp = head->next;
    head->next = head->next->next;
    last = head;
    delete temp;
    return last;
}
Node *delelePosition(Node *last, int pos)
{
    if (pos == 1)
    {
        return deleteFront(last);
    }
    int cnt = 1;
    Node *head = last->next;
    while (true)
    {
        if (cnt == pos - 1)
        {
            Node *toDelete = head->next;
            head->next = head->next->next;
            if (toDelete == last)
                last = head;
            delete toDelete;
            break;
        }
        else
        {
            cnt++;
            head = head->next;
            if(head==last->next)break;
        }
    }

    return last;
}
void printll(Node *last)
{
    Node *head = last->next;
    while (true)
    {
        cout << head->data << " ";
        head = head->next;
        if (head == last->next)
            break;
    }
}
int main()
{
    Node *head = new Node(5);
    Node *first = new Node(7);
    Node *last = new Node(11);
    head->next = first;
    first->next = last;
    last->next = head;

    last = insertFront(last, 2);
    last = insertLast(last, 12);
    last = insertPosition(last, 6, 34);
    last = delelePosition(last,6);

    printll(last);
    return 0;
}