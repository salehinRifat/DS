#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
void insertionSort(vector<int> arr){
    for(int i=1; i<arr.size();i++){
        int temp = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
        
    }
    for(int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int> vec = {1,4,7,2,9,11};
    insertionSort(vec);
}