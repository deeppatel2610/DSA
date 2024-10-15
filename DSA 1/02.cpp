#include<iostream>
using namespace std;

int decimal(int n)
{
	int ans = 0;
	int rem = 1;
	
//	101 0 -> 0
//	10 1 0 -> 2
//  1 0	1 0 -> 0
//  1 0 1 0 -> 8
	
	while (n<0)
	{
		ans+=(rem*2);
		rem /= 10;
		
		rem = n%10;
		n /= 10;
	}
	return ans;
}

int main()
{
	int n;
	
	cout << "enter n : ";
	cin >> n;
	cout << decimal(n) << endl;
	return 0;
}
