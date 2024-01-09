//c program to implememt stack using linked list//
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head = '\0';
void push(int value)
{
	struct node*newnode = malloc(sizeof(struct node));
	if(head=='\0')
	{
	  newnode->data=value;
	  newnode->next=head;
    }
    else
    {
    	struct node*newnode = malloc(sizeof(struct node));
    	struct node*temp = newnode;
    	head = newnode;
    	newnode->next = temp;
	}
}
void pop()
{
	struct node*temp;
	if(head=='\0')
	{
		printf("THE STACK IS EMPTY\n");
	}
	else
	{
		printf("THE POPPED ELEMENT:%d",head->data);
		temp=head;
		head=head->next;
		free(temp);
	}
}
void display()
{
	struct node*temp=head;
	while(temp!='\0')
	{
	  printf("THE STACK:%d\n",temp->data);
	  temp=temp->next;
	  
    }
    printf("NULL\n");
}
int main()
{
	int h,i;
	printf("ENTER THE SIZE OF THE ARRAY:\n");
	scanf("%d",&h);
	for(i=0;i<h;i++)
   	{
	  int s;
	  printf("STACK IMPLEMENTATION USING LINKED LIST\n");
	  printf("YOUR CHOICES\n");
	  printf("1.PUSH\n 2.POP\n 3.DISPLAY\n");
	  scanf("%d",&s);
	  if(s==1) 
	   {
		  int u;
		  printf("enter the element:\n");
		  scanf("%d",&u);
		  push(u);
	   }
	   else if(s==2)
	   {
		  pop();
	    }
	     else if(s==3)
	    {
	      display();
	    }
	     else
	    {
	   	  printf("INVALD CHOICE!");
	    }
	  }
}
 return 0;
}
