#include<bits/stdc++.h>

using namespace std;
int main(){
    string w;
    cin>>w;
    int arr[26];

    for(int i=0;i<26;i++)
    {
        arr[i]=0;
    }

    for(int i=0;i<w.size();i++)
    {
        arr[w[i]-'a']++;
    }

    bool letter=true;
    for(int i=0;i<26;i++)
    {
       if(arr[i] %2 !=0)
           letter= false;
    }
    if (letter ==true)
        cout<<"Yes";
   else
       cout<<"No";

}

