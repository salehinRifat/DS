#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
void insertElement(int arr[], int &n, int pos, int value)
{
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;
}
void deleteElement(int arr[], int &n, int pos)
{
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
}
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}
void insertionSort(int arr[], int n){
    for(int i=0; i<n;i++){
        int key = arr[i];
        int j = i -1;
        while(j>=0 && arr[j]> key){
            arr[j+1] =  arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
void printArray(int arr[], int n)
{
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[100] = {30, 40, 10, 20, 50};
    int n = 5;
    insertionSort(arr, n);
    printArray(arr, n);
    cout<<binarySearch(arr, n, 0);

    return 0;
}