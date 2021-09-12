#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
float a=2,b=6,c=9,x1,x2;
clrscr();
x1=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
x2=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
cout<<"x1="<<x1<<endl;
cout<<"x2="<<x2<<endl;
getch();
}
