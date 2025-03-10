#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched:";
    int x, flag=0;
    cin>>x;

    for(int i=0; i<n; i++){
        if(arr[i]==x){
            flag=1;
            cout<<i+1<<" ";
        }
    }
    if(flag==0)
        cout<<"Not exists"<<endl;
    return 0;
}