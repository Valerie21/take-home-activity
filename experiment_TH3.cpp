#include <iostream>
#include <conio.h>
#include<iomanip>
#include<cmath>
using namespace std;

int main ()
{
	int x,y;
	double z, v;
	
	cout<< "Please enter a value for x:";
	cin>>x;
	cout<< "Please enter a value for y:";
	cin>>y;
	z=2.5;
	
	//1
	switch (x)
	{
		case 1 : ;
		switch (y)
		{ 
		case 2 :
		case 3 :
		case 4 :
		break;
		}
		v=x*y*z;
		cout <<setw (10)<<setprecision(2)<<v;
		break;
	}
	
	//2
	switch (x)
	{
		case 1: ;
		switch (y)
		{
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			break;
		}
		v=x+(y/z);
		cout<<setw(10)<<setprecision(2)<<v;
		break;
	}
	
	//3
	switch (x)
	{
		case 2: ;
		switch (y)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			break;
		}
		v=abs((x-y)/z);
		cout<<setw(10)<<setprecision(2)<<v;
		break;
	}
	
	//4
	switch (x)
	{
	case 2: ;
	switch (y)
	{
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		break;
	}
	v=x-(sqrt(y+z));
	cout<<setw(10)<<setprecision(2)<<v;
	break;		
	}
	
	//5
	switch (x)
	{
		default:
		switch (y)
		{
			default:
			break;
		}
		v=x+y+z;
		cout<<setw(10)<<setprecision(2)<<v;
		break;
	}
	
	getch();
	return 0;
}
