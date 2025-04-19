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

Node *convertoLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *newNode = new Node(arr[i], nullptr);
        prev->next = newNode;
        prev = newNode;
    }
    return head;
}

void printll(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
Node *addTwoNumbers(Node *l1, Node *l2)
{
    Node *dummyHead = new Node(-1);
    Node *curr = dummyHead;
    int carry = 0;
    while (l1 !=NULL || l2!=NULL)
    {
        int sum = carry;
        if (l1)
        {
            sum += l1->data;
            l1 = l1->next;
        }
        if (l2)
        {
            sum += l2->data;
            l2 = l2->next;
        }
        Node *newNode = new Node(sum % 10);
        carry = sum / 10;
        curr->next = newNode;
        curr = newNode;
    }
    if (carry)
    {
        Node *newNode = new Node(carry);
        curr->next = newNode;
    }
    return dummyHead->next;
}
int main()
{
    vector<int> arr1 = {2,4,3};
    Node *l1 = convertoLL(arr1);
    vector<int> arr2 = {5,6,4};
    Node *l2 = convertoLL(arr2);

    Node *head = addTwoNumbers(l1, l2);
    printll(head);
}