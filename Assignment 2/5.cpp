#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int modpow(int x,int n,int m){if(n == 0)return 1%m;ll u=modpow(x,n/2,m);u=(u*u)%m;if(n%2==1)u=(u*x)%m;return u;}

class Box {
	public:
		double length, breadth; 		 //variables
		double getArea() {               //methods inside the class
		   return length * breadth ;
		}
		void setLength(double len) {
		   length = len;
		}
		void setBreadth(double bre) {
		   breadth = bre;
		}	
};

// main function for the program
int main() {
	int l, b;
	Box Box1;                // variable box declaration
	double area = 0.0;       // area variable
	cout << "Enter Length: " ;
	cin >> l ;
	cout << "Enter Breadth: " ;
	cin >> b ;
	Box1.setLength(l) ;      // calling methods
	Box1.setBreadth(b) ;  
	area = Box1.getArea();
	cout << "Area of Box : " << area <<endl; // printing area
	return 0 ;
}
