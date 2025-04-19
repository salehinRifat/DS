#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
//c++ program to find the median of n numbers
int printMedian(int arr[], int n){
    if(n%2!=0)
        return arr[n/2];
    else
        return (arr[n/2] + arr[(n-1)/2])/2;
}
//c++ program to Insert an item into a linear array //// 1 2 10 3 4 
void insertElement(int arr[], int n, int pos, int ele){
    for(int i=n-1; i>=pos-1; i--){
        arr[i+1] = arr[i];
    }
    arr[pos-1] = ele;
    for(int i=0; i< n+1;i++){
        cout<<arr[i]<<" ";
    }
}
//c++ program to delete and item into a linear array
void deleteElement(int arr[], int n, int pos){
    for(int i=pos-1; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    for(int i=0; i< n-1;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i< n;i++){
        cin>>arr[i];
    }
    deleteElement(arr,n,2);
    return 0;
}