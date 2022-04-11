#include <bits/stdc++.h>
#include<math.h>
#define ll long long int
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n, j, i, flag = 0, count = 0 ; //declaring variables
	cin >> n ; //taking input 
	for( i = 2 ; i < 1000000000 ; i++) {  //checking if number prime
		flag = 0 ; 
		for( j = 2 ; j <= sqrt(i) ; j++ ) {
			if(i % j == 0) {
				flag = 1;
				break ;
			}
		}
		if(flag) { //if flag=0 then prime
			continue ;
		}
		else 
		cout << i << " " ;
		count ++;
		if(count == n) //printig only n prime numbers
		break ;
	}
	
    return 0;
}
