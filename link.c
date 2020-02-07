#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node
{

	int x;
	char y[20];
	struct node *next;
	struct node *prev;
};

void Edelete(struct node **head_t)
{
struct node *t1,*t2;
t1=*head_t;
while(t1->next!=NULL)
{

t2=t1;
t1=t1->next;

}
free(t1);
t2->next=NULL;


}
void Bdelete(struct node **head_t)
{
	struct node *t1;
	t1=*head_t;
	*head_t=t1->next;
	free(t1);

}
void padd(struct node ** temp_h,int x)
{
char yy[20];
struct node *temp=(struct node *)malloc(sizeof(struct node));
printf("\nInteger");
scanf("%d",&temp->x);
printf("\nCharacter");
scanf("%s",temp->y);
temp->next=NULL;
	int i=0;
	struct node *t1=*temp_h;
		while(++i<x-1)
		{
		t1=t1->next;
		}

temp->next=t1->next;
t1->next=temp;

}

void badd(struct node ** temp_h)
{
char yy[20];
struct node *temp=(struct node *)malloc(sizeof(struct node));
printf("\nInteger");
scanf("%d",&temp->x);
printf("\nCharacter");
scanf("%s",temp->y);
temp->next=NULL;
temp->next=*temp_h;
*temp_h=temp;

}


void add(struct node ** temp_h)
{
char yy[20];
struct node *temp=(struct node *)malloc(sizeof(struct node));
printf("\nInteger");
scanf("%d",&temp->x);
printf("\nCharacter");
scanf("%s",temp->y);
temp->next=NULL;
	if(*temp_h==NULL)
	{
	*temp_h=temp;
	}

	else
	{
	       	struct node *t1;
		t1=*temp_h;
		while(t1->next!=NULL)
		{
		t1=t1->next;}

		t1->next=temp;
	}
}



void display(struct node * temp_h)
{
	int i=1;
	while(temp_h->next!=NULL)
	{	printf("%d\n",i++);
		printf("\nInt %d",temp_h->x);
		printf("\nChar %s",temp_h->y);
		temp_h=temp_h->next;
	}

		printf("%d\n",i++);
		printf("\nInt %d",temp_h->x);
		printf("\nChar %s",temp_h->y);

}
void main()
{
struct node *head=NULL;
 int choice, y;
 while(1)
 {
 printf("choice\n 1.add \n2.display\n 3.Begining Add\n 4. Add at position\n5.Begining Delete\n 6. End delete\n");
 scanf("%d",&choice);
 	switch(choice)
 	{
	 case 1:
		 printf("\nADDING ONE ELEMENT\n");
		 add(&head);
		 break;
	case 2:
		 printf("\nDisplay");
		 display(head);
		 break;
	 case 3:
		 printf("\nADDING ONE ELEMENT AT BEGINING\n");
		badd(&head);
		 break;
	 case 4:
		 printf("\nADDING ONE ELEMENT AT POSITION\n");
		 scanf("%d",&y);
		padd(&head,y);
		break;
	 case 5:
		Bdelete(&head);
		break;
	 case 6:
		Edelete(&head);
		break;
	default:
		 printf("wrong input");
 
	 }

 	}

}

