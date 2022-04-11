#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
class Shape {
	public:
	Shape() {
		cout << "Shape declared" << '\n' ;
	}
};
class Triangle : public Shape{
	public:
		int side ;
		void getInput() {
			cout << "Enter side length: " ;
			cin >> side ;
		}
		void display(){
			cout << "Area of the Triangle is " << sqrt(3.0/4.0) * pow(side, 2) << '\n' ;
		}
};
class Circle : public Shape{
	public:
		int radius ;
		void getInput() { 
			cout << "Enter radius: " ;
			cin >> radius ;
		}
		void display(){
			cout<<"Area of the Circle is: " << (3.14) * pow(radius, 2) << '\n' ;
		}
};
class Rectangle : public Shape{
	public:
		int length ;
		int breadth ;
		void getInput() {
			cout << "Enter length and breadth: " ;
			cin >> length ;
			cin >> breadth ;
		}
		void display(){
			cout << "Area of the rectangle is: " << length * breadth << '\n' ;
		}
};
int main(){
	Circle circle ;
	Rectangle rectangle ;
	Triangle triangle ;
	
	circle.getInput();
	rectangle.getInput();
	triangle.getInput();
	
	circle.display();
	rectangle.display();
	triangle.display();
}
