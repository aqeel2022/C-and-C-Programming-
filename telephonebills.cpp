#include<iostream.h>
#include<conio.h>

int main()
{
	int calls;
	float bill;
	cout<<"Enter number of calls : ";
	cin>>calls;

	if(calls<=100)
		bill=200;
	else if (calls>100 && calls<=150)
  	{
     		calls=calls-100;
     		bill=200+(0.60*calls);
	}
	else if (calls>150 && calls<=200)
	{
		calls=calls-150;
		bill=200+(0.60*50)+(0.50*calls);
 	}
	else
	{
		calls=calls-200;
		bill=200+(0.60*50)+(0.50*50)+(0.40*calls);
	}

	cout<<" Your bill is Rs."<<bill;

	getch();
	return 0;
}
 