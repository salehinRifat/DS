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

Node* deletek(Node* head, int k) {
    if (head == NULL) return head;

    if (k == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    int cnt = 1;

    // Traverse to the (k-1)th node
    while (temp != NULL && temp->next != NULL) {
        if (cnt == k - 1) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            break;
        }
        temp = temp->next;
        cnt++;
    }

    return head;
}


Node* deleteEl(Node* head, int el) {
    if (head == NULL) return head;

    // If head node is to be deleted
    if (head->data == el) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* temp = head;

    // Look ahead to the next node (temp->next), so we don't need 'prev'
    while (temp->next != NULL) {
        if (temp->next->data == el) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            break;
        }
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

    head = deletek(head,2);

    traverseList(head);
}