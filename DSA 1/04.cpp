#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "enter n : ";
	cin >> n;
	
	for(int i = 0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0 || (i==n || j==n) || j==0)
			{
				cout << "*";
			}
			else 
			{
				cout << " ";
			}
		}
		cout << endl;
	}
		
	return 0;
}
