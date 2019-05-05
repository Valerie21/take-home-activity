#include<iostream>
#include <conio.h>
using namespace std;

int main ()
{
	string package;
	int hours, rate, excess, total;
	cout << "What package did you avail?";
	cin>> package;
	cout << "How many hours did you use?";
	cin >> hours;
	if (package=="a" || package=="A")
	{
		rate=995;
		excess=(hours-10)*20;
		if (hours<=10)
		excess=0;
	}
	else if (package=="b" || package=="B")
	{
	rate=1495;
	excess=(hours-20)*10;
	if (hours<=20)
	excess=0;
	}
	else if (package=="c" || package=="C")
	{
	rate=1995;
	excess=0;
	}

	
	total= rate+excess;
	
	cout<<"Your total amount due is P" << total;
	
	getch ();
	return 0;


	
}

