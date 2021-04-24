#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
float wcf, t,v;
clrscr();
cout<<"enter the temperature :";
cin>>t;
cout<<"enter the value of velocit :";
cin>>v;
wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16);
cout<<"wind chill factor : "<<wcf<<endl;
getch();
return 0;
}