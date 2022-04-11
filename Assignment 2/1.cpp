#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i = 6, j ;
    while(i-- && i >= 1) {  // nested loops to print the pattern
    	j = i - 1 ;
    	while(j--) {
		cout << i ;
	}
	cout << i ;
	cout << '\n' ;
    }
    return 0;
}

