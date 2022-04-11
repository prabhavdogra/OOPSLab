#include <bits/stdc++.h>
#include<math.h>
#define ll long long int
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n, j, i, flag = 0 ; //declaring variables
	cin >> n ; //taking input 
	for( j = 2 ; j <= sqrt(n); j++ ) {
		if(n % j == 0) {
			flag = 1;
			break ;
		}
	}
	if(flag) { //if flag=0 then prime
		cout << "NOT PRIME" ;
	}
	else 
	cout << "PRIME" ;
	
    return 0;
}
