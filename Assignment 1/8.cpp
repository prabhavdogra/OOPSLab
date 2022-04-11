#include <bits/stdc++.h>
#include<math.h>
#define ll long long int
#define M 1000000007
using namespace std;


int main()
{
	string s ; //declaring variables and scanning input
	cin >> s;
	int i = 0, j, flag = 0 ;
	while( s[i]!='\0') { //checking if duplicates present
		j = i + 1;
		while( s[j]!='\0') {
			if (s[i] == s[j]) {
				flag = 1;
				break ;
			}
			j++ ;
		}
		i++ ;
	}
	if(flag) cout << "DUPLICATE ELEMENTS PRESENT" ; //printing the result
	else cout << "NO DUPLICATE ELEMENTS PRESENT" ;
    return 0;
}
