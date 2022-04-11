#include <bits/stdc++.h>
#include<math.h>
#define ll long long int
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n; //declaring variables
	cin >> n ; //taking input 
	if(n % 4 == 0) cout << "LEAP" ; //printing if leap or not
	else cout << "NOT LEAP" ;
    return 0;
}
