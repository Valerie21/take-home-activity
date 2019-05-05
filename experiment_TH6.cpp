#include<iostream>
#include<conio.h>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int n;
	
	do
	{
	int x,y;
	x=1;
	y=0;
	cout<<"Enter a number:";
	cin>>n;
	if (n<=0)
	cout<<"Thank you!";
	else
	{
		do
		{
			y=y+x;
			x=x+1;
		}
		while (x<=n);
		cout<<"The sum of all whole numbers from 1 to "<<n<<" is "<<y<<"."<<endl;
	}
	
	}
	while (n>0);
	
	
	
	getch();
	return 0;
}

