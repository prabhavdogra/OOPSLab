#include <bits/stdc++.h>
#include<iostream>

using namespace std;

double fun(int x, int n) {
	double e = 1 ;
	double temp = 1 ;
	for(int i=1;i<=n;i++) {
	    temp *= (double)x/i ;
        e += temp;
    }
    return e ;
}

int main()
{
	int n, x ;
	cout << "Enter the value of x and n respectively: " ;
	cin >> x >> n ;
	cout << fun(x, n) << '\n' ;
    return 0;
}
