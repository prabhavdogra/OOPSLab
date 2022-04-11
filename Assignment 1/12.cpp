#include <bits/stdc++.h>
#include<math.h>
#define ll long long int
#define ull unsigned long long int
#define M 1000000007
using namespace std;

int main()
{
    cout << "1. Ascending\n2. Descending\nEnter your choice:";
    int choice ;
    cin >> choice ;
    if(choice!= 1 && choice != 2) cout << "Invalid input" ;
    int n, i;
    cin >> n ;
    int a[n] ;
    for( i = 0 ; i < n ; i++ ) {
    	cin >> a[i] ;
	}
	if(choice == 1 ) sort(a,a+ n) ; //sorting as per the choice 
	else if(choice == 2) {
		sort(a,a+n) ; 
		reverse(a,a+n) ;
	}
	
	for( i = 0 ; i < n ; i++ ) { //printing the output
    	cout << a[i] << " " ;
	}
    return 0;
}


