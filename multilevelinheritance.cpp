#include<iostream>
#include<string>

using namespace std;

class Laptop
{
public:
	Laptop()
	{
		cout<<"Base Class Called"<<endl;
	}
	string name;
	float price;
};

class gamingLaptop : public Laptop
{
public:
	gamingLaptop()
	{
		cout<<"Derived Class 1 Called"<<endl;
	}
};

class gamingSystem : public gamingLaptop
{
public:
	gamingSystem()
	{
		cout<<"Derived Class 2 Called"<<endl;
	}
};

int main()
{
	gamingSystem lap1;
	return 0;
}