#include<iostream>
#include<string>

using namespace std;

class laptop
{public:
	string name;
	float price;

	laptop()
	{
		name = " Mac";
		price = 100.0;
	}

	void show()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Price : "<<price<<endl;
	}
};

int main()
{
	laptop lap;
	lap.show();
	cout<<lap.name<<endl;  //string name is declared public.
	return 0;
}