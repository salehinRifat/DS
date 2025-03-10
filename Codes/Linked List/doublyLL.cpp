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
    Node *back;
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
Node *coverArrtoDll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
Node *insertFront(Node *head, int data)
{
    Node *newNode = new Node(data, head, nullptr);
    head->back = newNode;

    return newNode;
}
Node *insertEnd(Node *head, int data)
{
    Node *newNode = new Node(data);
    if (head == nullptr)
        return newNode;
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->back = temp;
    return head;
}
Node* deleteHead(Node* head){
    if (head == nullptr) return nullptr;  
    if (head->next == nullptr) { 
        delete head;
        return nullptr;
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;

}
Node* deleteEnd(Node* head){
    if (head == nullptr) return nullptr;  
    if (head->next == nullptr) { 
        delete head;
        return nullptr;
    }
    Node* secondLast = head;
    while(secondLast->next->next != nullptr){
        secondLast = secondLast->next;
    }
    Node* lastNode = secondLast->next;
    secondLast->next = nullptr;
    lastNode->back = nullptr;
    delete lastNode;
    return head;
}
Node *printDll(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    vector<int> arr = {2, 4, 8, 10, 11};
    Node *head = coverArrtoDll(arr);
    head = deleteHead(head);
    printDll(head);
}