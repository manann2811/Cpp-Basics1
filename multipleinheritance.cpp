#include<iostream>
#include<string>

using namespace std;

class gamingSystem
{
public:
	gamingSystem()
	{
		cout<<"Base Class 1 Called"<<endl;
	}
};

class Laptop
{
public:
	Laptop()
	{
		cout<<"Base Class 2 Called"<<endl;
	}
	string name;
	float price;
};

class gamingLaptop : public Laptop, public gamingSystem
{
public:
	gamingLaptop()
	{
		cout<<"Derived Class Called"<<endl;
	}
};

int main()
{
	gamingLaptop lap1;
	return 0;
}