#include <bits/stdc++.h>
#include<math.h>
#define ll long long int

using namespace std ;

int main()
{
    int n,t ;
    map <int, int> map ;       // hashmap or bookkeeping map
    cin >> n ; 
    while ( n != 0 ) {
    	t = n % 10 ; 		 // t iterates through each digit of n
    	if ( map.find(t) == map.end() ) { // if t is not present in the map
		  map[t] = 1 ;
		} else { 			// if t is present in the map
		  map[t] ++ ;
		}
    	n /= 10 ;
    }
    ll max = 1 ;
    for(auto &j: map) {
    	if( (int)j.second > max ) max = j.second ; 
// max stores the frequency of the number appearing the most
    }
    for(auto &j: map) {
    	if( (int)j.second == max ) cout << j.first << " " ;   // calculating the sum
    }
    return 0;
}

