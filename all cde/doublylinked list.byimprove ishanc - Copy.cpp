#include<stdio.h>
#include<process.h>
#include<stdlib.h>
void create();
void display();
//void findsum();
void sinsert();
void einsert();
void pinsert();
//void sdelete();
//void edelete();
//void pdelete();
//void search();
//void sort();
//void countnode();
//void reverse();
struct node
{
	int info;
struct node*llink,*rlink;
};
struct node*first=NULL,*llink=NULL,*rlink=NULL;
int main()
{
	int choice;
do
{
printf("enter the choice \n press 1 for createing a node \n press2 for display\n press3 for inserting node at starting poistion\n press4 for inserting value of node at end poisition\n press5 for inserting the value of node at particular poisition\n press6 for exit from program\n ");
scanf("%d",&choice);
switch(choice)
{
case 1:
create();break;
case 2:
display();break;
case 3:
sinsert();break;
case 4:
einsert();break;
case 5:
pinsert();break;
case 6:
exit(0);
default:
	printf("invalid choice");
}
}//closing of do loop
while(choice>=1&&choice<=6);
}

void create()
{
	struct node*new1,*last;
	new1=(struct node*)malloc(sizeof(struct node));
	printf("enter the value of node");
	scanf("%d",&new1->info);
	new1->llink=NULL;
	new1->rlink=NULL;
	if(first==NULL)
    first=new1;
	else
	{		
	last->rlink=new1;
	new1->llink=last;
	}

	last=new1;
}

void display()
{
	struct node*temp;
	if(first==NULL)
	printf("there is no any node");
	else
	{
	printf("all nodes are\n");
	for(temp=first;temp!=NULL;temp=temp->rlink)
   {
     printf("%d\n",temp->info);
}
}
}
void sinsert()
{
	struct node*new1;
	if(first==NULL)
	printf("there is no any node");
	else
	{
		new1=(struct node*)malloc (sizeof(struct node));
		printf("enter the value of node");
		scanf("%d\n",new1->info);
		new1->llink=NULL;
		new1->rlink=NULL;
		new1->rlink=first;
		first->llink=new1;
		first=new1;
	}
}
void einsert()
{
	struct node*new1,*last;
	if(first==NULL)
	printf("there is no any node");
	else
	{
		new1=(struct node*)malloc (sizeof(struct node));
		printf("enter the value of node");
		scanf("%d\n",new1->info);
		new1->llink=NULL;
		new1->rlink=NULL;
		last->rlink=new1;
		new1->llink=last;
		last=new1;
	}
}

void pinsert()
{
	struct node *prev,*temp,*new1;
	int position,i=1,count=0;
	if(first=NULL)
	printf("there is no any node");
	else
	{
		printf("enter the poistion");
		scanf("%d",&position);
		temp=first;
		while(temp!=NULL)
		{
			count++;
			temp=temp->rlink;
		}
		if(position>1 && position<count)
		{
			new1=(struct node*)malloc(sizeof(struct node));
			printf("enter the value of node");
			scanf("%d",&new1->info);
			new1->llink=NULL;
			new1->rlink=NULL;
			temp=first;
			while(i!=position)
			{
				prev=temp;
				temp=temp->rlink;
				i++;
			}
			prev->rlink=new1;
			new1->llink=prev;
			new1->rlink=temp;
			temp->llink=new1;
		}
	}
}

