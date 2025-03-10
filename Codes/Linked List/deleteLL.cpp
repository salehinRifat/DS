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
void traverseList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *deleteFront(Node *head)
{
    if (head == nullptr)
        return head;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
Node *deletek(Node* head, int k){
    if(head == NULL) return head;
    if(k==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* prev = NULL;
    Node* temp = head;
    int cnt =0;
    while(temp != nullptr){
        cnt++;
        if(cnt==k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *deleteEl(Node* head, int el){
    if(head == NULL) return head;
    if(el==head->data){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* prev = NULL;
    Node* temp = head;
    while(temp != nullptr){
        if(el==temp->data){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node * removeLast(Node* head){
    if(head==nullptr || head->next == nullptr)
        return NULL;
    Node* temp = head; // to store second last node
    while(temp->next->next !=nullptr){
        temp = temp->next;
    }
    delete temp->next; // Now here we are deleting the last node
    temp->next = nullptr;

    return head;
}
int main()
{
    Node *head = new Node(1);
    Node *first = new Node(2);
    Node *second = new Node(5);
    Node *third = new Node(9);
    head->next = first;
    first->next = second;
    second->next = third;

    head = deleteEl(head,2);

    traverseList(head);
}