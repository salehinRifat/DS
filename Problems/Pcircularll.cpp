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
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};
Node *deleteFront(Node *last)
{
    Node *head = last->next;
    Node *temp = head;
    last->next = head->next;
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
    Node* toDelete = head->next;
    head->next = last->next;
    delete toDelete;
    last = head;
    return last;
}
Node *insertFront(Node *last, int item)
{
    Node *newNode = new Node(item);
    newNode->next = last->next;
    last->next = newNode;
    return last;
}
Node *insertLast(Node *last, int item)
{
    Node *newNode = new Node(item);
    newNode->next = last->next;
    last->next = newNode;
    last = newNode;
    return last;
}
Node *insertPosition(Node *last, int position, int item)
{
    Node *head = last->next;
    int cnt = 1;
    if (position == 1)
        return insertFront(last, item);
    while (true)
    {
        if (cnt == position - 1)
            break;
        cnt++;
        head = head->next;
    }
    Node *newNode = new Node(item);
    newNode->next = head->next;
    head->next = newNode;

    if (head == last)
        last = newNode;

    return last;
}

void printLL(Node *last)
{
    Node *head = last->next;
    while (true)
    {
        cout << head->data << " ";
        head = head->next;
        if (last->next == head)
            break;
    }
}
int main()
{
    Node *head = new Node(5);
    Node *first = new Node(10);
    Node *second = new Node(12);
    Node *last = new Node(15);
    head->next = first;
    first->next = second;
    second->next = last;
    last->next = head;
    printLL(last);
    cout<<endl;
    cout<<"After Operation"<<endl;
    last = deleteLast(last);
    printLL(last);

    return 0;
}