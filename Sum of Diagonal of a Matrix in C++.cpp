#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col,i,j;
    cin>>row>>col;
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    if(row!=col)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(a[i][j]>0)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;


}
