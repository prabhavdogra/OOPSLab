#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    string s ;
    cin >> s; 
    int i = 0 ;
    int book1[26] = {0} ;
    int book2[26] = {0} ;
    while (s[i] != '\0' ) {
    	if(s[i] >= 97) book1[s[i] - 97] ++ ; // for lowercase characters
    	if(s[i] >= 65 && s[i] <= 90) book2[s[i] - 65] ++ ; // for uppercase characters
    	i++ ;
	}
	cout << '\n' << "Unique Characters: " ;
	for( i = 0 ; i < 26 ; i++) {
		if(book1[i] == 1 || book2[i] == 1) {
			if (book1[i] == 1 ) cout << (char)(i + 97) << " " ; 
			if (book2[i] == 1 ) cout << (char)(i + 65) << " " ; 
		}
	}
	cout << '\n' ;
    return 0;
}




