#include <bits/stdc++.h>
#include <iostream>
# define ll long long
using namespace std;

int main()
{
    int n,t ;
    map <int, int> map ;       // hashmap or bookkeeping map
    cin >> n ; 
    while ( n != 0 ) {
    	t = n % 10 ; 		 // t iterates through each digit of n
    	if ( map.find(t) == map.end() ) { // if t is not present in the map
		  map[t] = 1 ;		// creating a key with value t
		} else { 	  // if t is present in the map
		  map[t] ++ ; // adding 1 freuency of t
		}
    	n /= 10 ;
	}
	ll sum = 0 ;
	for(auto &j: map) {
	          if( (int)j.second == 1) sum +=j.first ;// if unique adding in sum
	}
	cout << sum << '\n' ; // printing the result
    return 0;
}

