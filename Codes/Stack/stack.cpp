#include <bits/stdc++.h>
using namespace std; 
#define MAX 10

class Stack { 
    int top, cap; 
    int *a = new int[cap];

public: 
    Stack(int cap) { 
        this->cap = cap; 
        top = -1; 
    } 
    
    ~Stack() { 
        delete[] a; 
    } 
    int push(int x) { 
        if (top >= cap - 1) { 
            cout << "Stack Overflow\n"; 
            return 0; 
        } 
        top++;
        a[top] = x; 
        return 1; 
    } 

    int pop() { 
        if (top < 0) { 
            cout << "Stack Underflow\n"; 
            return 0; 
        } 
        top--;
        return a[top+1]; 
    } 

    int peek() { 
        if (top < 0) { 
            cout << "Stack is Empty\n"; 
            return 0; 
        } 
        return a[top]; 
    } 

    bool empty() { 
        return top < 0; 
    } 
}; 

int main() {
   

 
    Stack s(5); 
    s.push(10); 
    s.push(20); 
    s.push(30);
    cout << s.pop() << " popped from stack\n"; 

    cout << "Top element is: " << s.peek() << endl; 

    cout << "Elements present in stack: "; 
    while (!s.empty()) { 
        cout << s.peek() << " "; 
        s.pop(); 
    } 

    return 0; 
}
