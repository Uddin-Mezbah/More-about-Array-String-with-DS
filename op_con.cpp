#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h,w,x,y;
    char s[100+10][100+10];
    int ans=0;
    cin >> h >> w >> x >> y;
    for(int i=1; i<=h; i++)
    {
        cin >> (s[i]+1);
    }

    for(int i=x; s[i][y]=='.'; i--,ans++);

    for(int i=x; s[i][y]=='.'; i++,ans++);

    for(int j=y; s[x][j]=='.'; j--,ans++);

    for(int j=y; s[x][j]=='.'; j++,ans++);
    cout << ans-3;
    return 0;
}
