#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
#define capacity 10

class Stack
{
public:
    int top, arr[capacity];
    Stack()
    {
        top = -1;
    }

    int push(int element)
    {
        if (top == capacity - 1)
        {
            cout << "Overflow" << endl;
            return 0;
        }
        top++;
        arr[top] = element;
    }
    int pop()
    {
        if (top < 0)
        {
            cout << "Underflow" << endl;
            return 0;
        }
        top--;
        return arr[top + 1];
    }
    int peek(){
         if (top < 0)
        {
            cout << "Empty!" << endl;
            return 0;
        }
        return arr[top];
    }
};

int main()
{
    Stack s;
    s.push(5);
    s.push(11);
    s.push(8);

    s.pop();
    cout<<s.peek()<<endl;
}
