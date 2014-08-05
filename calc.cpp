#include<iostream>
using namespace std;
int main()
{
float a,b,c;
cout<<"\n Enter two values";
cin>>a>>b;
cout<<"\n MENU:";
cout<<"\n 1.Addition \n 2.Substraction \n 3.Multiplication \n 4.Division";
cout<<"\n Enter your choice";
cin>>d;
switch(d)
{
case 1:
 c=a+b;
cout<<"\n Sum is:"<<c;
break;

case 2:
 c=a-b;
cout<<"\n Sub is:"<<c;
break;


case 3:
 c=a*b;
cout<<"\n mulis:"<<c;
break;

case 4:
 c=a/b;
cout<<"\n div is:"<<c;
break;


}

return 0;
}
