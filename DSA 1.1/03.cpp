#include<iostream>
using namespace std;

int fet(int n)
{
	int ans=1;
	
	for(int i=1;i<=n;i++)
	{
		ans*=i;
	}
	return ans;
}

int main()
{
	int n,r;
	
	cout << "enter N R :";
	cin >> n >> r;
	
	int N=fet(n);
	int R=fet(r);
	int nMr=fet(n-r);
	
	int ans = N/(R*nMr);
	
	cout << ans;
}
