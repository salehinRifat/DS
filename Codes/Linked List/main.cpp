#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
class Node{
public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
void lengthList(Node* head){
    int count = 0;
    Node* current = head;
    while (current != nullptr)
    {
        count++;
        current  = current->next;
    }
    cout<<count<<endl;
}
void printList(Node* head){
    Node* current = head;
    while(current != nullptr){
        cout<< current->data<<" ";
        current = current->next;
    }
}
int main()
{
    Node* head = new Node(1);
    Node* first = new Node(2);
    Node* second = new Node(3);

    head->next = first;
    first->next = second;

    lengthList(head);
    return 0;
}