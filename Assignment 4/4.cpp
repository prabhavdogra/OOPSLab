#include <bits/stdc++.h>
using namespace std;

class point {
	float x, y;
public:
	point(float x = 0, float y = 0) {
		this ->x = x , this ->y = y ;
	}
	point operator + (point second) {
		point ans ;
		ans.x = second.x + x ;
		ans.y = second.y + y ;
		return ans ;
	}
	void print() {
		cout << "x: " << x << '\n' << "y: " << y << '\n'  ;
	}
};

int main() {
	point p1(2.0,3.0), p2(5.0, 6.0) ;
	cout << "Point 1: " << '\n' ;
	p1.print() ;
	cout << "Point 2: " << '\n' ;
	p2.print() ;
	point p3 = p2 + p1 ;
	cout << "Point 3: Point 1 + Point 2" << '\n' ;
	p3.print() ;
	return 0 ;
}
