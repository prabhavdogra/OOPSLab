#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int n, i ;
	cout << "Enter the size of the array: " ;
    cin >> n ;
    int a[n] ;
    cout << "Enter the unsorted array: " ;
    cout << '\n' ;
    for( i = 0 ; i < n ; i++) {
    	cin >> a[i] ;
    }
    sort(a, a + n) ; // sorting function
    cout << "Sorted array: " ;
    for( i = 0 ; i < n ; i++) {
    	cout << a[i] << " ";
    }
    cout << '\n' ;
    return 0;
}

