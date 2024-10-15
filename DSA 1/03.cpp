#include<iostream>
using namespace std;

int temp(int n)
{	

	int ans=1;
	for(int i=1;i<=n; i++)
	{
		ans*=i;
	}
	
	return ans;
}

int main()
{
	int a,b;
	cout << "entre a b : ";
	cin >> a >> b;
	int ans=1;
	 
	 
	int n = temp(a);
	int k = temp(b);
		
	ans = n/(k*(n-k));
	
	cout << ans ;
	
	return 0;
}
