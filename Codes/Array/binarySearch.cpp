//binary search
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
int binarySearch(int arr[], int n, int x){
    int low=0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]>x)
            high = mid-1;
        else
            low = mid+1;
    }
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched:";
    int x;
    cin>>x;
    int index = binarySearch(arr, n, x);
    if(index==-1)
        cout<<"Not exists"<<endl;
    else
        cout<<"Element found at index "<<index<<endl;
    
    return 0;
}