#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
int main()
{
   //code to insert an element in an array
   int n;
   cin>>n;
   int arr[n];
    for(int i=0; i< n;i++){
         cin>>arr[i];
    }
    int pos,ele;
    cin>>pos>>ele;
    for(int i=n-1; i>=pos-1; i--){
        arr[i+1] = arr[i];
    }
    arr[pos-1] = ele;
    for(int i=0; i< n+1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}