#include<iostream>

using namespace std;

float division(float dividend, float divisor)
{
	float ans = dividend / divisor;
	return ans;
}

int main()
{
	float dividend, divisor;
	cout<<"Enter Dividend : ";
	cin>>dividend;
	cout<<"Enter Divisor : ";
	cin>>divisor;
	cout<<dividend<<"/"<<divisor<<" = "<<division(dividend, divisor);
	return 0;
}