#include<stdio.h>
#include<stdlib.h>
 struct node{
 	int data;
 	struct node *prev;
 	struct node *next;
 };
 struct node*start;
 int countnode;
 void create()
 {
 int ch=1,num;
 struct node *newnode,*temp;
 start=NULL;
 while(ch)
 {
 	newnode=(struct node*)malloc(sizeof(struct node));	
 		printf("\nenter the data");
 	scanf("%d",&num);
 		newnode->data=num;
 		newnode->next=NULL;
 		newnode->prev=NULL;
 		if(start==NULL)
 		{
 			start=temp=newnode;
		 }
		 else
		 {
		 	temp->next=newnode;
		 	newnode->prev=temp;
		 	temp=newnode;
		 }
		 	printf("do you want to continuue press 1");
		 	scanf("%d",&ch);
		 
 		
 }
 }
 void insert_beg()
 {
 	 int num;
 	struct node *newnode,*temp;
 	printf("\nenter the data");
 	scanf("%d",&num);
 	newnode=(struct node*)malloc(sizeof(struct node));
 		newnode->data=num;
 		temp=start;
 		newnode->prev=NULL;
 		newnode->next=start;
 		temp->prev=newnode;
 		start=newnode;
 		printf("\nData succsefully inserted at begining");
 		
 }
 void insert_last()
 {
 	 int num;
 	struct node *newnode,*temp;
 	printf("\nenter the data");
 	scanf("%d",&num);
 	newnode=(struct node*)malloc(sizeof(struct node));
 		newnode->data=num;
 		newnode->prev=NULL;
 		newnode->next=NULL;
 		temp=start;
 		while(temp->next!=NULL)
 		{
 			temp=temp->next;
		 }
		 temp->next=newnode;
		 newnode->prev=temp;
		 printf("\nData succsefully inserted at last");
 }
 void display()
 {
 struct node *temp=start;	
 while(temp!=NULL)
 {
 	printf("\n%d",temp->data);
 	temp=temp->next;
 }
 }
 void insert_middle()
 {
 	int num,i=1,pos;
 	printf("\nEnter the position to insert the node");
 	scanf("%d",&pos);
 	if(pos==1)
 	insert_beg();
 	else if(pos==countnode)
 	insert_last();
 	//else if(pos>countnode)
 //	printf("\nInvalid position");
 	else
 	{
 	struct node *newnode,*temp;	
 	printf("\nenter the data");
 	scanf("%d",&num);
 	
 	newnode=(struct node*)malloc(sizeof(struct node));
 		newnode->data=num;
 		temp=start;
 		while(i<pos-1)
 		{
 			temp=temp->next;
 			i++;
		 }
		newnode->prev=temp;
		newnode->next=temp->next;
		temp->next=newnode;
		newnode->next->prev=newnode;
	
		 printf("\nData succsefully inserted at middle");
     }
 }
void count()
{
	struct node *temp=start;	
     while(temp!=NULL)
     {
     	countnode++;
     	temp=temp->next;
	 }
	 printf("\nThe total node in alist is %d",countnode);
}
 main()
 {
 	int ch;
 	do
	 {
 			printf("\n-----------------------------DOUBLY LINKED LIST-------------------------------------");
 		printf("\nenter your choice");
 			printf("\n1=create\n2=insert_beg\n3=insert_last\n4=insert_middle\n5=delete_beg\n6=delete_last\n7=delete_middle\n8=reverse\n9=display\n10=count\n11=exit\n");
 		scanf("%d",&ch);
 		if(ch==1)
 		create();
 		else if(ch==2)
 		insert_beg();
 		else if(ch==3)
 		insert_last();
 		else if(ch==4)
 		insert_middle();/*
 		else if(ch==5)
 		delete_beg();
 		else if (ch==6)
 		delete_last();
 		else if(ch==7)
 		delete_middle();
 		else if(ch==8)
 		reverse();*/
 		else if(ch==9)
 		display();
 		else if(ch==10)
 		count();
 		else if(ch==11)
 		break;
 		else
 		printf("\ninvalid input");
 		
	 }
	 while(ch!=11);
 }
