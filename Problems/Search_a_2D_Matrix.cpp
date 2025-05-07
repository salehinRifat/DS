#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int i=0, j = m - 1;
    while (j>=0 && i< n )
    {
        if(target< matrix[i][j])
            j--;
        else if(target > matrix[i][j])
            i++;
        else
            return true;
    }
    return false;

}
int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 50}
    };
    cout<<searchMatrix(matrix, 1)<<endl;

}