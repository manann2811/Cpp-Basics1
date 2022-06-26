#include<iostream>
#include<string>

using namespace std;

class laptop
{
public:
	string name;
	float price;

	laptop()   //this is default constructor.                             
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Price : "<<price<<endl;
	}

	laptop(string lname, float lprice)   //this is parameterized constructor.
	{
		name = lname;
		price = lprice;
		cout<<"Name : "<<name<<endl;
		cout<<"Price : "<<price<<endl;
	}

	laptop(const laptop &p)     //this is copy constructor.
	{
		name = p.name;
		price = p.price+100.5;
		cout<<"Name : "<<name<<endl;
		cout<<"Price : "<<price<<endl;
	
	}
};

int main()
{
	laptop l;
	laptop m("Vaio", 35000.0);
	laptop k = m;
	return 0;
}