#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a=200001;
    int z=2000000;
    string  s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='A'&&a==200001)
        {
            a=i;
        }
        if(s[i]=='Z'&&a<2000000)
        {
            z=i;
        }
    }
    cout<<z-a+1<<endl;
    return(0);
}

