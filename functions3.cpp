#include<iostream>

using namespace std;

int factorial(int n)
{
	int ans=1;
	for(int i=n; i>0; i--)
	{
		ans = ans * i;
	}
	return ans;
}

int main()
{
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	cout<<n<<"! "<<"= "<<factorial(n);
	return 0;
}