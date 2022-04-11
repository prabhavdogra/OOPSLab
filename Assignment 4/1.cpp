#include <bits/stdc++.h>
using namespace std;

class circle { // circle class
public :
	int radius ;
	circle() { // zero argument constructor
		cout << "Enter radius of the circle: " ;
		cin >> radius ;
	}
	circle( int r ) { // parameterised constructor
		radius = r ;
	}
	void print() {
		cout << "Radius: " << radius << '\n' ;
	}
};

int main()
{	
	circle circle1(2), circle2 ;  // objects declaration
	circle1.print() ;
	circle2.print() ;
    return 0;
} 

