#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
	int l,b,r,a,ch;
	
	//int ch,r,l,b,a;
	while(1){

	cout<<"\n1.to find area of rectangle";
	cout<<"\n2.to find area of circle";
	cout<<"\n3.to check odd or even";
	cout<<"\n4.to find circumference of circle";
	cout<<"\n5.to find perimeter of rectangle";
	cout<<"\n6.to enter your choice";
	cin>>ch;
	switch(ch)
	{
		
	case 1:
		cout<<"\n enter a length :";
		cin>>l;
		cout<<"\n enter a bredth :";
		cin>>b;
		cout<<"\n area of rectangle= "<<l*b;
		cin>>a;
		break ;
	
	case 2:
		cout<<"\n enter a radius :";
		cin>>r;
		cout<<"\n area of circle= "<<3.14*r*r;
		cin>>a;
		break ;
	case 3:
		cout<<"\n enter a any number :";
		cin>>l;
		if(l%2==0)
		cout<<"\n number is a even ";
		else
		cout<<"\n number is a odd";
		break;
	case 4:
		cout<<"\n enter a radius of circle :";
		cin>>r;
		cout<<"\n circumference of circle= "<<2*3.14*r;
		break;
	case 5:
		cout<<"\n enter a length :";
		cin>>l;
		cout<<"\n enter a bredth :";
		cin>>b;
		cout<<"\n perimeter of rectangle= "<<2*(l+b);
		cin>>a;
	case 6:
		exit(1);
	default:
		cout<<"\n wrong choice";
		}
}
}