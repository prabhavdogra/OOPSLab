#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int n ;
    cin >> n ; // taking input
    int i = 0 ;
    ll sum_odd = 0 , sum_even = 0 ;
    while( n != 0 ) {
    	int t = n % 10 ;
		if( t & 1 ) {  // if t is odd
			sum_odd += t ; // adding it in sum_odd
		}
		else { // if t is even
			sum_even += t ; // adding it in sum_even
		}
		n /= 10 ;
    }
    cout << "Sum Even: " << sum_even << ", Sum Odd: " << sum_odd ; 
    return 0;
}

