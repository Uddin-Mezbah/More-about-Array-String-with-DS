#include <bits/stdc++.h>
using namespace std;

int main () {
	int a,b;
	cin >> a >> b;
	int hour  = (a + b) % 24;
	cout << hour << endl;
	return 0;
}

