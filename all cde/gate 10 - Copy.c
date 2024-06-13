#include<stdio.h>
#include<conio.h>
int main()
{
	char c[]="GATE2011";
	char *p=c;
	printf("%s",p+p[3]-p[1]);
}
