#include<bits/stdc++.h>
using namespace std;

class animals {
	public:
		string Animal = "Dog" ;
		void animal_name() {
			cout << "It's a " << Animal << '\n' ;
		}
};

class category : public animals {
	public:
		string Category = "Pet" ;
		void category_type(){
			cout << "It's used as a "<< Category << '\n' ;
		}
};

class breed : public category {
	public:
		string Breed = "German Shepherd";
		void breed_name(){
			cout<<"It's breed is " << Breed << '\n' ;
		}
};

int main()
{
	breed a ;
	cout << "Type of animal is: " << a.Animal << '\n' ;
	cout << "Category of animal: " << a.Category << '\n' ;
	cout << "Breed: "<< a.Breed << '\n' ;
	a.animal_name();
	a.category_type();
	a.breed_name();
	
}
