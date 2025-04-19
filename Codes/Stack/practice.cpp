#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
#define capacity 10
class Stack{
    int top;
    int arr[capacity];
public:
    Stack(){
        top = -1;
    }

    int push(int val){
        if(top == capacity -1){
            cout<<"Capacity Ovreflown"<<endl;
            return 0;
        }
        top++;
        arr[top] = val;
        return 1;
    }
    int peek() { 
        if (top < 0) { 
            cout << "Stack is Empty\n"; 
            return 0; 
        } 
        return arr[top]; 
    } 

};
int main()
{
    Stack s; 
    s.push(10); 
    s.push(20); 
    s.push(30);
    cout<<s.peek()<<endl;
}
