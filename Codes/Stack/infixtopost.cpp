#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    return -1;
}
string infixToPostfix(string s){
    stack<char>st;
    string result;
    for(int i=0; i<s.size();i++){
        char c = s[i];
        if( c >= 'a' &&  c <= 'z' ||  c >= 'A' &&  c <= 'Z' ||  c >= '0' &&  c <= '9'){
            result+=c;
        }
        else if(c == '(')
            st.push(c);
        else if(c == ')'){
            while(st.top() != '('){
                result+=st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while (!st.empty() && prec(c) <= prec(st.top()))
            {
                result+=st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){
        result+=st.top();
        st.pop();
    }
    return result;
}
int main()
{
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    cout << infixToPostfix(exp);
    return 0;
}