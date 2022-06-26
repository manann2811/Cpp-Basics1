#include<iostream>

using namespace std;

class laptop
{
public:
	void run()
	{
		cout<<"void is running."<<endl;
	}

	void run(int a)
	{
		cout<<"int "<<a<<" is running."<<endl;
	}
};

int main()
{
	laptop l;
	l.run();
	l.run(5);
	return 0;
}