#include <bits/stdc++.h>
#include<math.h>
#define ll unsigned long long int
#define M 1000000007
using namespace std;
ll a[101] ; //memoization array
long long int fib(int n) { //recursive factorial function
	if(n <= 1) return n;   //base condition for n = 1
	if(a[n] != -1) { //accessing memoized array
		return a[n] ;
	}
	return a[n] = fib(n-1) + fib(n-2);  //recursive function call
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n = 100 ; //declaring + initialising and scanning variables
	memset(a,-1,sizeof(a)) ; //initialising memoization array
	a[0] = 0 ;
	a[1] = 1 ;
	cout << (ll)fib(n) ; //function call
	for( int i = 0 ; i < 101 ; i++ ) {
		cout << a[i]  << " " ;
	}
    return 0;
}

