#include<iostream>
using namespace std;

class dog {
public:
	string Breed;
	string Color;
	string Height;
	string weight;



	void myFunction() {
		cout << "The dog is sitting \n";
		cout << "The dog is shaking \n";
		cout << "The dog is laying down";

	}
};

int main() {
	dog dogObj;
	dogObj.Breed = "Hound";
	dogObj.Color = "brown";
	dogObj.Height = "2 feet";
	dogObj.weight = "60 lbs";
	
  myFunction();
  
}



