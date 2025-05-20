#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SIZE 5
class Queue
{
public:
    int front, rear, arr[SIZE];
    Queue()
    {
        front = -1;
        rear = -1;
    }
    bool isFull()
    {
        if (rear == SIZE - 1)
            return true;
        return false;
    }
    bool isEmpty()
    {
        if (rear == -1 || front == -1)
            return true;
        return false;
    }
    void enqueue(int item)
    {
        if (isFull())
        {
            cout << "Queue is FUll" << endl;
            return;
        }
        else
        {
            if (front == -1)
                front = 0;
            rear++;
            arr[rear] = item;
        }
    }
    void dequeue()
    {
        if (isEmpty())
            cout << "Queue is Empty" << endl;
        else
        {
            if (front >= rear)
            {
                rear = -1;
                front = -1;
            }
            else
            {
                front++;
            }
        }
    }
    void display()
    {
        if (!isEmpty())
        {
            for (int i = front; i <= rear; i++)
            {
                cout << arr[i] << " ";
            }
        }
    }
};
class circularq
{
public:
    int front, rear, arr[SIZE];
    circularq()
    {
        front = -1;
        rear = -1;
    }
    bool isFull()
    {
        if (front == 0 && rear == SIZE - 1)
            return true;
        else if ((rear + 1) % SIZE == front)
            return true;
        else
            return false;
    }
    bool isEmpty()
    {
        if (rear == -1)
            return true;
        return false;
    }
    void enqueue(int item)
    {
        if (isFull())
            cout << "Queue is Full" << endl;
        else
        {
            if (front == -1)
                front = 0;
            rear = (rear + 1) % SIZE;
            arr[rear] = item;
        }
    }
    void dequeue()
    {
        if (isEmpty())
            cout << "Queue is Empty" << endl;
        else
        {
            if (front >= rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front = (front + 1) % SIZE;
            }
        }
    }
    void display()
    {
        int i;
        if (isEmpty())
        {
            cout << endl
                 << "Empty Queue" << endl;
        }
        else
        {
            for (int i = front; i != rear; i = (i + 1) % SIZE)
                cout << arr[i] << " ";
        }
        cout << arr[i] << endl;
    }
};
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
};
class Queuell
{
public:
Node* front;
Node* rear;
Queuell(){
    front = rear = nullptr;
}
bool isEmpty(){
    if(front == nullptr)
        return true;
    return false;
}
void enqueue(int item){
    Node* newNode = new Node(item);
    if(isEmpty()){
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}
void dequeue(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return;
    }
    Node* temp =  front;
    front = front->next;
    if(front == nullptr) rear = nullptr;
    delete temp;
    
}

void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        Node *temp = front;
        cout << "Current Queue: ";
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    Queuell q;
    q.enqueue(10);
    q.enqueue(12);
    q.enqueue(18);
    q.dequeue();
    q.display();
    return 0;
}