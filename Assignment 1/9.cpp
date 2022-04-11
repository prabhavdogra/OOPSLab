#include <bits/stdc++.h>
#include<math.h>
#define ll long long int
#define ull unsigned long long int
#define M 1000000007
using namespace std;

int main()
{
	string s; //declaring and scanning the string
	cin >>  s;
	int i, flag = 0 ;
	for( i = 0 ; i <= s.length()/2; i++) { // checking if the string is a pallindrome
		if(s[i] != s[s.length()-1-i]) {
			flag = 1;
			break;
		}
	}
	if(flag) { //if flag=1 that means not a pallindrome
		cout <<"NOT A PALLINDROME" ; //printing the result
	}
	else {
		cout <<"PALLINDROME";
	}
    return 0;
}


