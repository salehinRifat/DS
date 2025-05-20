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
Node *reverseList(Node *head)
{
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    while (curr != NULL)
    {
       next = curr->next;
       curr->next = prev;
       prev = curr;
       curr = next;
    }
    return prev;
}

int main()
{
    
    return 0;
}