#include <bits/stdc++.h>
#include<math.h>
#define ll long long int
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n, i, sum = 0; //declaring variables
	cin >> n ; //taking input 
	for( i = 1 ; i <= n ; i++) {  //calculating sum of first n numbers
		sum += i ;
	}
	cout << sum ;
	
    return 0;
}
