#include<stdio.h>
#include<process.h>
#include<stdlib.h>
void create();
void display();
void findsum();
void sinsert();
//void einsert();
void pinsert();
//void sdelete();
//void edelete();
//void pdelete();
void search();
void sort();
void countnode();
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
	printf("enter the choice \n press 1 for createing a node \n press2 for display\n press3 for sum of all node \n press4 for inserting  at  ending position\n press5 for inserting node at particular position\n press6 for deletion node from starting position\n press7 for deletion no de from ending position\n press8 for deleting node from particular position\n press9 for searching any particular node\n press10 for sorting \n press11 for couning nodes \n press12 for displaying node in reverse order \n press13 for exit from program\n ");
scanf("%d",&choice);
switch(choice)
{
case 1:
create();break;
case 2:
display();break;
case 3:
findsum();;break;
//case 4:
//4einsert();break;
case 5:
pinsert();break;
/*case 6:
sdelete();break;
case 7:
edelete();break;
case 8:
pdelete();break;
case 9:
search();break;
case 10:
sort();break;
case 11:
countnode();break;*/
case 12:
reverse();break;
case 13:
exit(0);
default:
	printf("invalid choice");
}
}//closing of do loop
while(choice>=1&&choice<=13);
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
	void sinsert()
	{
	struct node*new1;
	if(first==NULL)
	printf("there is no node");
	else
{

new1=(struct node*)malloc (sizeof(struct node));
printf("enter the value of node");
scanf("%d",&new1->info);
new1->link=NULL;
new1->link=first;
first=new1;
}
}



void findsum()
{
	int  sum=0;
	struct node*temp;
	if(first==NULL)
	printf("there is no any node");
	else
	{
		for(temp=first;temp!=NULL;temp=temp->link)
		{
			sum=sum+temp->info;
		}
		printf("sum of the nodes=%d",sum);
	}
}
void pinsert()
{
	int position,i,count=0;
	struct node *temp,*prev,*new1;
	if(first==NULL)
	{
		printf("no any node\n");
	}
	else
	
	for(temp=first;temp!=NULL;temp=temp->link)
	{
		count++;
	}
	new1=(struct node*)malloc(sizeof(struct node));
	printf("enter value of new node");
	scanf("%d",&new1->info);
	new1->link=NULL;
	printf("enter positive for insertion");
	scanf("%d",&position);
	if (position>1 && position<count)
	{
		for(i=1;i<=position;i++){
			
		    	prev=temp;
		    	temp=temp->link;
		    	i++;
		}
		prev->link=new1;
		new1->link=temp;
	}
	else
	printf("invalid choice");
}
//void reverse()
//{
//	struct node*temp;
//	int i,j,list[50];
//	if(first==NULL)
//	printf("there is no any node");
//	else
//	{
//		printf("all nodes in reverse order\n");
//		temp=last;
//		while(temp!=NULL)
//		{
//			printf("%d\n",temp->info);
//			temp=temp->link;
//		}
//		
//	}
//	
//	i=0;
//		for (temp=first;temp!=NULL;temp=temp->link)
//		{
//			list[i]=temp->info;
//			i++;
//		}
//				printf("values of node in reverse order");
//				for(i=0;i<n;i++)
//				{
//				
//				for(j=i-1;j>0;j--)
//				{
//					printf("%d\n",list[i]);
//				}
//			}
//		}
//		
//


