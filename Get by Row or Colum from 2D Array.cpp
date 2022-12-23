#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col,i,j;
    cin>>row>>col;
    int a[row][col];
    for(int i = 0;i<row;i++)
    {
        for(int j=0;i<row;i++)
        {
            cin>>a[i][j];
        }
    }
    int req_col;
    cin>>req_col;
    for(int i=0;i<row;i++)
    {
        cout<<a[i][req_col]<<" ";
    }
}

