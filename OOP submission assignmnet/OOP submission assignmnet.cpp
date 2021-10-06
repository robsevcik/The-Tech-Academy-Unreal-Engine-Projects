#include<iostream>
using namespace std;

class dog {
public:
	string Breed;
	string Color;
	string Height;
	string weight;
};
int main() {
	dog dogObj;
	dogObj.Breed = "Hound";
	dogObj.Color = "brown";
	dogObj.Height = "2 feet";
	dogObj.weight = "60 lbs";



}
class canine : public dog {
public:
	string x;
	string y;
	string z;


};
string canine()
{
	return string();
}

string canine(); {
	canine canineobj;
	canineobj.x = "sit";
	canineobj.y = "shake";
	canineobj.z = "laydown";

}


