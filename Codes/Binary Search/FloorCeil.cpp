#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
int findCeil(vector<int>& arr, int x) {

    int n = arr.size(), ans = -1, low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=x){
            ans = mid;
            high = mid -1;
        }else{
            low = low +1;
        }
    }
    return ans;
}

int findFloor(vector<int>& arr, int x) {
    int n = arr.size();
    int low = 0; int high = n-1, ans = -1;
    while(low<=high){
        int mid = (high + low)/2;
        if(arr[mid]>x){
            high = mid-1;
        }else{
            ans = mid;
            low = mid+1;
        }
    }
    return ans;
}
int main()
{
    return 0;
}