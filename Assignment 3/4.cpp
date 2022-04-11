#include <bits/stdc++.h>
#include <iostream>
#define ll long long int

using namespace std ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ; 
    cin >> n ;
    ll sum = 0 ;
    while ( n!= 0 ) { // loop to calculate sum of digits
    	ll temp = n % 10 ;
    	sum += temp ;
    	n /= 10 ;
    }
    cout << sum*2 << '\n';  // ans=twice of sum of digits //printing answer
    return 0;
}

