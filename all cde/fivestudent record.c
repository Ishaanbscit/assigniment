#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	float marks;
}s[100];
int main()
{   
    int i,n;
    printf("enter  no of students: ");
    scanf("%d",&n);
    
	//struct student s[5];
	printf("enter students record \n\n");
	
	for( int i=0;i<5;i++)
	{
		printf("enter sroll:");
		scanf("%d",&s[i].roll);
		printf("enter sname:");
		scanf("%d",&s[i].name);
		printf("enter smarks:");
		scanf("%f",&s[i].marks);
	}
	printf("student record\n \n");
		
	for(int i=0;i<5;i++)
	{
		printf("sroll:%d\n",s[i].roll);
		printf("sname:%d\n",s[i].name);
		printf("smarks:%f\n",s[i].marks);
	}
	return 0;
	
}