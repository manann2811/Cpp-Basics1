#include<iostream>

using namespace std;

void run()
{
	cout<<"Run is Running."<<endl;
}

void run(int a)
{
	cout<<"Run with int "<<a<<" is Running."<<endl;
}

void run(int a, int b)
{

}

//the upper code with int a and this code is same(b is defined ao only a is variable)so computer has two options so error occured.
/*void run(int a, int b=10)
{

}*/

void run(char a, int b)
{

}

void run(int a, char b)
{

}

void run(char a, char b)
{

}
int main()
{
	run();
	run(5);
	return 0;
}