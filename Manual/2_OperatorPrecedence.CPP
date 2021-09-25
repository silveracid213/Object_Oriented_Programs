#include<iostream.h>
#include<conio.h>
void main()
{
    int a=10,b=12,c=12,d=12,e;
    clrscr();
    e=(a+b)*(c-d);
    cout<<"The value of the expression e=(a+b)*(c-d) is: "<<e<<endl;
    e=a-b/c+d;
    cout<<"The value of the expression e=a-b/c+d is: "<<e<<endl;
    e=a+(b-c)/d;
    cout<<"The value of the expression e=a+(b-c)/d is: "<<e<<endl;
    e=(a*b)-3;
    cout<<"The value of the expression  e=(a*b)-3 is: "<<e<<endl;
    getch();
}