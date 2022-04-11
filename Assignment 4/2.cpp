#include <bits/stdc++.h>
using namespace std;

class item {
	int *i ;
	char *name ;
public:
	item (char *s) {
		int length = strlen(s) ;
		name = new char[length] ;
		strcpy (name, s) ;
		i = new int ; 
		cout << "Enter item number: " ;
		int x ;
		cin >> x ;
		*i = x ;
	}
	void print() {
		cout << "Item number: " << *i << " " << '\n' ;
		cout << "Item name: " << name << " " ;
		cout << '\n' ;
	}
};

int main() {
	char s[100];
	cout << "Enter item name: " ;
	cin >> s ;
	item item1(s) ;
	item1.print() ;
	return 0 ;
}
