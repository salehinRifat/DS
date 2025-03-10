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
Node* insertBeforeK(Node* head, int value, int k){
    if(k==1){
       return insertFront(head, value);
    }
    int cnt =0; 
    Node* temp =  head;
    while(temp->next != nullptr){
        cnt++;
        if(cnt==k)break;
        temp = temp->next;
    }
    if(temp->next == nullptr){
        return insertEnd(head, value);
    }
    Node* prev = temp->back;
    Node* newNode = new Node(value,temp, prev);
    prev->next = newNode;
    temp->back = newNode;
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
Node* deleteKthEl( Node* head,int k){
    if(head == NULL)
        return NULL;
    int cnt=0;
    Node* kNode = head;
    while (kNode != NULL)
    {
        cnt++;
        if(cnt==k){
            break;
        }
        kNode = kNode->next;
    }
    Node* prev =  kNode->back;
    Node* front = kNode ->next;

    if(prev == nullptr && front ==  nullptr){
        delete head;
        return NULL;
    }else if(prev == nullptr){
        return deleteHead(head);
    }else if(front == nullptr){
        return deleteEnd(head);
    }else{
        prev->next = front;
        front->back = prev;
        kNode->next = nullptr;
        kNode->back = nullptr;
    }
    return head;
}
void deleteNode(Node* temp){
    Node* prev = temp->back;
    Node* front = temp->next;
    if(front == nullptr){
        prev->next = nullptr;
        temp->back = nullptr;
        delete temp;
        return;
    }
    prev->next = front;
    front->back = prev;
    temp->next = temp->back = nullptr;
    delete temp;
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
    vector<int> arr = {2, 4, 8};
    Node *head = coverArrtoDll(arr);
    head = insertBeforeK(head, 12,4);
    printDll(head);
}