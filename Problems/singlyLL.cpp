#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
class Node{
public:
    int data;
    Node* next;
    Node(int data1){
        data = data1;
        next = nullptr;
    }
    Node(int data1, Node* nxt){
        data = data1;
        next = nxt;
    }
};
Node* insertHead(Node * head,int element){
    Node* newNode  = new Node(element, head);
    return newNode;
}
Node* insertPosition(Node * head,int pos, int element){
    Node* newNode = new Node(element);
    int cnt =1; 
    Node* temp = head;
    if (pos == 1) {
        newNode->next = head;
        return newNode;  
    }

    while(temp!=nullptr){
       if(cnt==pos)break;
       cnt++;
       temp=temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}
void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* deletePosition(Node* head, int position){
    if(position==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int cnt =1;
    Node* temp = head;
    while (temp != NULL && temp->next != nullptr)
    {
        if(cnt== position-1){
            Node *toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            return head;
        }
        cnt++;
        temp = temp->next;
    }
    
}
int main()
{
  Node* head = new Node(5);
  Node* first = new Node(7);
  Node* second = new Node(10);
  head->next = first;
  first->next = second;
  head = deletePosition(head, 2);
  printLL(head);
}