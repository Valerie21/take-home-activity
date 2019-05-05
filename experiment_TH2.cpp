#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
	double gallons, bill;
	char late;
	
	cout <<"Gallons taken recently and during the previous month:";
	cin>> gallons;
	cout << "Late payment? a. yes  b. no : ";
	cin >> late;
	
	bill=gallons*1.10+35;
	
	switch (late)
	{
	case 'a':
	case 'A':
		cout << "Your total bill is:"<< bill+20;
		break;
	case 'b':
	case 'B':
		cout << "Your total bill is:" << bill;
		break;
	}
	
	getch();
	return 0;
}
