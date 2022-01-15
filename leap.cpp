#include <iostream>
using namespace std;

int LeapYear(int Year) ;

int main()
{
	int Num;

	cout<<" Enter the Year : ";
	cin>>Num;

	int flag = LeapYear(Num);
	
	if(flag == 1)
	{
		cout<<" This is a LeapYear "<<endl;
	}
	else
	{
		cout<<" This not a LeapYear "<<endl;
	}
	return 0;
}

int LeapYear(int Year)
{
	if(Year%4 == 0)
	{
		if(Year%100 == 0)
		{
			if(Year%400 == 0)
			{
				return 1;
			}
		}
		return 1;
	}
	return 0;
}


