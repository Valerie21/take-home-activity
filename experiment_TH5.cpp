#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main ()
{
int first, second, third,n;
first=0;
second=1;
n=21;
for(int i=0; i<n; i++)
{
	if (i==0)
	{
	cout<<first<<","<<second<<",";
	}
	else
	{
		third=first+second;
		first=second;
		second=third;
		cout<<third<<",";
	}
}
	
	getch();
	return 0;
}
