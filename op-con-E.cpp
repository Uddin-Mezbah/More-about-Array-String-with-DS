#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >>n;
    string s;
    cin >>s;
    int x=0;
    int y=0;
    for(int i=0;i<n;i++){
        if(s[i]=='I') x++;
        if(s[i]=='D') x--;
        if(x>y)  y = x;
        }
    cout << y << endl;
}
