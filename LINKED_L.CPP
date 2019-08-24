#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
struct node *head = NULL;

void create();
void display();

void main()
{
 clrscr();
 create();
 display();
 getch();
}
void create()
{
 int choice;
 struct node *newNode,*currentNode;
 choice=0;
 do
 {
  newNode=(struct node*)malloc(sizeof(struct node));
  printf("\nEnter the data you want to insert:");
  scanf("%d",&newNode->data);
  newNode->next=NULL;
  if(head==NULL)
  {
   head=newNode;
   currentNode=newNode;
  }
  else
  {
    currentNode->next=newNode;
    currentNode=newNode;
  }
  printf("\nDO you  want  to add new node(1 for Yes 0 for No)");
  scanf("%d",&choice);
 }while(choice==1);

}

void display()
{
 struct node *temp;
 temp=head;
 printf("\nLinked list is\n");
 while(temp!=NULL)
 {
  printf("%d->",temp->data);
  temp=temp->next;
 }
printf("NULL");
}