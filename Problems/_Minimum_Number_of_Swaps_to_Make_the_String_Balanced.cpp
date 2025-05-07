#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
int minSwaps(string s) {
        stack<char>st;
        for(int i=0; i<s.size();i++){
            if(s[i] == ']'){
                if(!st.empty())st.pop();
            }else{
                st.push(s[i]);
            }
        }
        return (st.size()+1)/2;
}
int main()
{
    string s = "]]][[[";
    cout<<minSwaps(s)<<endl;
}