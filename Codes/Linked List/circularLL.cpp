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

void printLL(Node* last){
    Node* head = last->next;
    while(true){
        cout<<head->data<<" ";
        head = head->next;
        if( last->next == head){
            break;
        }
    }
}

Node* insertFront(Node * last, int item){
    Node* newNode = new Node(item);

    newNode->next =  last->next;
    last->next = newNode;
    return last;
} 
Node* insertLast(Node * last, int item){
    Node* newNode = new Node(item);

    newNode->next =  last->next;
    last->next = newNode;
    last =  newNode;
    return last;
}
Node* insertPosition(Node* last,int position, int item){
    Node* newNode = new Node(item);
    int cnt=1;
    Node* head = last->next;
    if(position==1){
       return insertFront(last, item);
        
    }
    while(true){
        if(cnt== position-1) break;
        cnt++;
        head = head->next;
        if(head == last->next){
            break;
        }
    }
    newNode->next = head->next;
    head->next = newNode;

    if (head == last) {
        last = newNode;
    }

    return last;
}

int main()
{
    Node* head = new Node(5);
    Node* first = new Node(12);
    Node* second = new Node(24);
    Node* last = new Node(51);
    head->next = first;
    first->next = second;
    second->next = last;
    last->next = head;
    last = insertPosition(last, 5, 100);
    printLL(last);
}
