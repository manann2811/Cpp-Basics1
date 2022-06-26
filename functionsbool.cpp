#include<iostream>

using namespace std;

bool isprime(int n)
{
	if(n<=2)
	{
		return true;
	}
	for(int i=2; i*i<=n; i++)
	{
		if((n%i)==0)
			return false;
	}
	return true;
}

int main()
{
	int no;
	cout<<"Enter Number to be checked : ";
	cin>>no;
	if(isprime(no))
	{
		cout<<no<<" is a prime number."<<endl;
	}
	else
	{
		cout<<no<<" is not a prime number."<<endl;
	}
}