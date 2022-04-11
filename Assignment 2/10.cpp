#include <bits/stdc++.h>
#include<math.h>
#define ll              long long int
#define ull             unsigned long long int
#define forp(i,a,b)     for(int i=(int)a;i<(int)b;i++)
#define forpe(i,a,b)    for(int i=(int)a;i<=(int)b;i++)
#define pb              push_back
#define M               1000000007
using namespace std;

class bankAccount{
	private:
		string first_name, last_name ;  
		double balance = 0 ; 
		
	public:
		//constructing a bank account
		bankAccount() {
			cout << "Enter the first name of the Account holder: " ;
			cin >> first_name ;
			cout << "Enter the last name of the Account holder: " ;
			cin >> last_name ;
			balance = 0 ;
		}
 		double getBalance() {
			return balance ; 
		}
		void deposit(double a) {
 			balance += a ; 
		}
		void withdraw(double a) {
 			if(balance - a >= 0) balance -= a ; 
 			else cout << "Insufficient Balance" << '\n' ;
		}
}; 


int main()
{
	bankAccount p1 ;
	int n = 0 ;
	while (n != 4) {
	    cout << "Enter what you want to do: \n1. To deposit\n2. To withdraw\n3. To balance\n4. Exit\n" ;
	    cout << "Enter your choice: " ;
	    cin >> n ;
	    double  x ;
	    if(n == 4) continue ;
	    else if(n == 3) cout << p1.getBalance() <<'\n' << '\n' ;
	    else if(n == 2) {
	    	cout << "Enter the amount you want to withdraw: " ;
	    	cin >> x ;
	    	p1.withdraw(x) ;
		}
	    else if(n == 1) {
	    	cout << "Enter the amount you want to deposit: " ;
	    	cin >> x ;
	    	p1.deposit(x) ;
		}
	    else cout << "Invalid Choice" ; 
	}
    return 0;
}
