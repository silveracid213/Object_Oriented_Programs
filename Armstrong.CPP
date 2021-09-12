#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
    int n,temp,sum=0,r;
    cout<<"enter a number"<<endl;
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,3);
        n=n/10;
    }
    if(temp==sum)
    {
        cout<<temp<<" is an armstrong number"<<endl;
    }
    else
    {
        cout<<temp<<" is not an armstrong number"<<endl;
    }
    getch();
}