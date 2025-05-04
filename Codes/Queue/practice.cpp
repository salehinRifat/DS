#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define SIZE 5
class Queue
{
    int arr[SIZE];
    int front, rear;

public:
    Queue(){
        front = -1;
        rear = -1;
    }
void Enqueue(int element){
    if(rear == SIZE -1){
        cout<<"OverFlow"<<endl;
    }else{
        if(front == -1)front =0;
        rear++;
        arr[rear] = element;

    }
}
int Dqueue(){
    if(rear== -1 && front==-1){
        cout<<"Underflow"<<endl;
        return -1;
    }
    int val = arr[front];
    if(rear==front){
        rear = -1;
        front = -1;
    }else{
        front++;
    }
   return val;
}
};
class circularQueue{

};
int main()
{
  
    return 0;
}