#include<iostream.h>
#include<conio.h>
void main()
{
    int year;
    cout<<"enter the year"<<endl;
    cin>>year;
    if(year%4==0 && year%100==0)
	{
		if(year%400==0)
    {
        cout<<year<<" is aleap year"<<endl;
    }
    else
    {
        cout<<year<<" is not a leap year"<<endl;
    }
	}
	getch();
}