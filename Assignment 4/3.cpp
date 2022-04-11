#include <bits/stdc++.h>
using namespace std;

class integer {
	int i ;
public:
	integer() {
		i = 0 ;
	}
	integer(int a) {
		i = a ;
	} 
	integer& operator ++ () { // Pre-increment
		i++ ;
		return *this ;
	}
	integer operator++(int dummy ) { // Post-increment
		integer x = *this ;
		++(*this) ;
		return x ;
	}
	integer& operator -- () { // Pre-decrement
		i-- ;
		return *this ;
	}
	integer operator -- (int dummy ) { // Post-decrement
		integer x = *this ;
		--(*this) ;
		return x ;
	}
	void print() {
		cout << i << " "  ;
	}
};

int main() {
	integer i(3), j(3), k(3), l(3) ;
	cout << "Post-increment: " << '\n';
	cout << "i++: " ;
	(i++).print() ;
	cout << '\n' ;
	cout << "i: " ;
	(i).print() ;
	cout << '\n' << "Pre-increment: " << '\n' ; 
	cout << "++i: " ;
	(++j).print() ;
	cout << '\n' ;
	cout << "i: " ;
	j.print() ;
	cout << '\n' << "Post-decrement: " << '\n' ;
	cout << "i--: " ;
	(k--).print() ;
	cout << '\n' ;
	cout << "i: " ;
	(k).print() ;
	cout << '\n' << "Pre-decrement: " << '\n' ;
	cout << "--i: " ;
	(--l).print() ;
	cout << '\n' ;
	cout << "i: " ;
	l.print() ;

	return 0 ;
}
