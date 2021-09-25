#include<iostream.h>
#include<conio.h>
void main()
{
    int n,temp,a,rev=0;
    clrscr();
    cout<<"Enter the number"<<endl;
    cin>>n;
    temp=n;
    while(n>0)
    {
        a=n%10;
        rev=a+rev*10;
        n=n/10;
    }
    if(temp==rev)
    {
        cout<<temp<<" is a palindrome number"<<endl;
    }
    else
    {
        cout<<temp<<" is not a palindrome number"<<endl;
    }
    getch();
}