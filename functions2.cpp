#include<iostream>

using namespace std;

int pow(int no, int po)
{
	int ans=1;
	for(int i=0; i<po; i++)
	{
		ans = ans * no;
	}
	return ans;
}

int main()
{
	int n, p;
	cout<<"Enter Number : ";
	cin>>n;
	cout<<"Enter Power : ";
	cin>>p;
	cout<<"Answer is : "<<pow(n, p)<<endl;
	return 0;
}