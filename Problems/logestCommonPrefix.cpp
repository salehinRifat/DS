#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()

string longestCommonPrefix(vector<string> &strs)
{
    sort(strs.begin(), strs.end());
    int count =0, n = strs.size();
    
    
    for(int i=0; i<strs[0].size();i++){
        if(strs[0][i]== strs[n-1][i] )
        count++;
        else
        break;
    }
    if(count)
        return strs[0].substr(0,count);
    else
        return "";
}

int main()
{
    vector<string> strs = {"flower","flower","flow"};
    cout<<longestCommonPrefix(strs)<<endl;
}