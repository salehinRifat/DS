//Create a c++ program to take array input from user , and make thir averages and print them
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<n;i++){
        sum+=arr[i];
    }
    cout<<"The average of the elements of the array is:"<<( double) sum/n<<endl;
    return 0;
}