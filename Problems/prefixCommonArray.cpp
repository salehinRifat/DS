#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()

vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
{
    int n = A.size();
    vector<bool> isPresentA(n+1, false);
    vector<bool> isPresentB(n+1, false);
    vector<int> result(n);
    for(int i=0; i<n;i++){
        isPresentA[A[i]]=true;
        isPresentB[B[i]]=true;
        int count =0;
        for(int j =1; j<=n;j++){
            if(isPresentA[j] == true && isPresentB[j]== true)
            count++;
        }
        result[i] = count;
    }
}

vector<int> findThePrefixCommonArray2(vector<int> &A, vector<int> &B)
{

    int n = A.size(), cnt;
    vector<int> result(n);
    for (int i = 0; i < n; i++)
    {
        cnt=0;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < i; k++)
            {
                if (A[j] == B[k])
                {
                    cnt++;
                    break;
                }
            }
        }
        result[i] = cnt;
    }
    return result;
}
int main()
{
    vector<int> A = {1,3,2,4};
    vector<int> B = {3,1,2,4};
}