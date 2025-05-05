#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()

int medianArr(int arr[], int n)
{
    int median;
    if (n % 2 == 0)
    {
        median = (arr[n / 2] + arr[n / 2 - 1]) / 2;
    }
    else
    {
        median = arr[n / 2];
    }
    return median;
}
void insertArr(int arr[], int &n, int pos, int item)
{
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = item;
    n++;
}
void deleteArr(int arr[], int &n, int pos)
{
    for (int i = pos; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;
}
void displayArr(int arr[], int &n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int binarySearch(int arr[], int n, int target)
{
    int first = 0, last = n - 1;
    while (first <= last)
    {
        int mid = (first + last) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] > target)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    return -1;
}
int bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int n = 6;
    int arr[n] = {-2,5,7,11,9,1};
    //    cout<< binarySearch(arr,n, 3)<<endl;
    bubbleSort(arr,n);
    displayArr(arr,n);
}