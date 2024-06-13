#include<stdio.h>
#include<process.h>
#include<stdlib.h>
void create();
void display();
void reverse();
struct node
{
	int info;
struct node*link;
};
struct node*first=NULL,*last=NULL;
int main()
{
	int choice;
do
{
printf("enter the choice \n press 1 for createing a node \n press2 for display\n press3 for displaying node in reverse order \n press4 for exit from program\n ");
scanf("%d",&choice);
switch(choice)
{
case 1:
create();break;
case 2:
display();break;
case 3:
reverse;break;
case 4:
exit(0);
default:
	printf("invalid choice");
}
}
while(choice>=1&&choice<=4);
}
void create()
{
struct node *new1;
new1=(struct node*)malloc(sizeof(struct node));
printf("enter the value of node ");
scanf("%d",&new1->info);
new1->link=NULL;
if(first==NULL)
first=new1;
else
last->link=new1;
last=new1;
}
void display()
{
	struct node*temp;
	if(first==NULL)
	printf("there is no node");
	else
	{
		printf("all nodes are \n");
		for(temp=first;temp!=NULL;temp=temp->link)
		{
			printf("%d\n",temp->info);
		}
	}
}
void reverse()
{
	struct node*temp;
	int i,j,n,list[50];
	if(first==NULL)
	printf("there is no any node");
	else
	{
	i=0;
		for (temp=first;temp!=NULL;temp=temp->link)
		{
			list[i]=temp->info;
			i++;
		}
				printf("values of node in reverse order");
				for( i = 0; i<50/2; i++){
                temp = list[50];
                list[50] = list[50-i-1];
                list[50-i-1] = temp;
				//for(j=i-1;j>=0;j--)
				for(i=0;i<50;i++)
				{
					printf("%d\n",list[i]);
				}
			}
		}
	}
//int arr[n] = {9, 8, 7, 2, 4, 3};
//    int temp;
//    for(int i = 0; i<n/2; i++){
//        temp = arr[i];
//        arr[i] = arr[n-i-1];
//        arr[n-i-1] 
//= temp;
//    }
//    for(int i = 0; i < n; i++){
//        printf("%d,", arr[i]);
//    }
//}
//
//
