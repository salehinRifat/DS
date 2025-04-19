#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
void insertElement(int arr[], int k, int p, int n)
{
    int i = n;
    
    while ( i>=p)
    {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[p] = k;
    for(int i =0; i<n+1;i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<arr[0]<<" "<<arr[6];
}
void deleteElement(int arr[],int n, int k ){
    int j = k;
    while(j<n){
        arr[j-1] = arr[j];
        j = j+1;
    }
    for(int i =0; i<n-1;i++){
        cout<<arr[i]<<" "<<endl;
    }
}
int main()
{
    int arr[5] = {2, 4, 7, 11, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    //insertElement(arr,33,2,n);

    int a = 10;
    int *p = &a;
    int **q = &p;
    cout<<*q<<endl;
    cout<<q<<endl;
    
    return 0;
}