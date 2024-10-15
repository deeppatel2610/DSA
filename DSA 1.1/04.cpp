#include<iostream>
using namespace std;

int main()
{
	int x=1,y=9,z=1;
	
	// 1 
	// 2 9  
	// 3 8 10 
	// 4 7 11 14
	// 5 6 12 13 15
	
	for(int i=1;i<=5;i++)
	{
		z=i;
		for(int j=1;j<=i;j++)
		{
			cout << " " << z;
			if(j%2==0)
			{
				z+=x;
			}
			else 
			{
				z+=y;
			}
		}
		x+=2;
		y-=2;
		cout<<endl;
	}
}
