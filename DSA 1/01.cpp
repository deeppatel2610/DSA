#include<iostream>
using namespace std;

int binary(int n)
{
	int ans = 0;
	int rem=1;
	while(n>0)
	{
		
		rem = n % 10;
		n/=2;
		
		ans += (rem/10);
		rem*=10;
		// 10
		// 10/ 2 = 5 -> 0
		// 5/2 = 2 -> 1 
		// 2/2 = 1 -> 0
		// 1/2 => 0 -> 1
	}
	
	
	return ans;
}

int main()
{
	int n;
	cout << "entre n : ";
	cin >> n;

	cout << binary(n) << endl;	
	return 0;
}
