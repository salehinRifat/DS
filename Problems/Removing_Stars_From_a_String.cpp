#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
string removeStars(string s) {
    stack<char> st;
    string result;
    for(int i=0; i<s.size();i++){
        char ch = s[i];
        if(ch== '*'){
            if(!st.empty())st.pop();
        }else{
            st.push(ch);
        }  
    }
    while (!st.empty())
    {
        result+=st.top();
        st.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}
int main()
{
    string s = "leet**cod*e";
   cout<<removeStars(s)<<endl;
   
    return 0;
}