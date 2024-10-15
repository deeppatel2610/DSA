#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "enter n :";
	cin >> n;
	
	int ans=0,por=1,rea;
	
	while(n>0)
	{
		rea=n%2;
		n/=2;
		
		ans += (rea*por);
		por*=10;
	}
	
	cout << ans;
	
}
