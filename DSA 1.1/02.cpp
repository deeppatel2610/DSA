#include<iostream>
using namespace std;

int bin(int n)
{
	int ans=0,por=1,rea;
	
	while(n>0)
	{
		rea=n%10;
		ans+=(rea*por);
		
		n/=10;
		por*=2;
	}
	return ans;
}

int main()
{
	
	int n;
	cout << "enter n :";
	cin >> n;
	cout << bin(n);
	
	return 0;
}
