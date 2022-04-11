#include <bits/stdc++.h>
#include<math.h>
#define ll              long long int
#define ull             unsigned long long int
#define forp(i,a,b)     for(int i=(int)a;i<(int)b;i++)
#define forpe(i,a,b)    for(int i=(int)a;i<=(int)b;i++)
#define pb              push_back
#define M               1000000007
#define ld				long double
using namespace std;

ll fac(int n) {
	if(n == 1 || n == 0) return 1 ;
	return n * fac(n - 1) ;
}
int main()
{
	double x ;
	cout << "Enter the value of x (in radians): " ; // taking input
	cin >> x ;
	long double cosx = 1 - (float)pow(x,2)/fac(2) + (float)pow(x,4)/fac(4) - (float)pow(x,6)/fac(6) ; //applying the formula
	cout << cosx << '\n' ;
    return 0;
}




