#include<bits/stdc++.h>
using namespace std;

class animals {
	private:
		string Animal = "Dog" ;
	public:
		void animal_name() {
			cout << "It's a " << Animal << '\n' ;
		}
		
};

class category : private animals {
	private:
		string Category = "Pet" ;
	public:
		void category_type(){
			cout << "It's used as a "<< Category << '\n' ;
			animals::animal_name() ;
		}
};

class breed : private category {
	private:
		string Breed = "German Shepherd";
	public:
		void breed_name(){
			cout<<"It's breed is " << Breed << '\n' ;
			category::category_type() ;
		}
};

int main()
{
	breed a ;
	a.breed_name() ;
}
