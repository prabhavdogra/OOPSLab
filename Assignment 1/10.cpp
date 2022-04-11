#include <bits/stdc++.h>
#include<math.h>
#define ll long long int
#define M 1000000007
using namespace std;

long long int fac(int n) { //recursive factorial function
	if(n == 1) return 1;   //base condition for n = 1
	return n * fac(n-1) ;  //recursive function call
}
int main()
{
	int n; //declaring and scanning variables
	cin >> n ;
	cout << (ll)fac(n) ; 
    return 0;
}
