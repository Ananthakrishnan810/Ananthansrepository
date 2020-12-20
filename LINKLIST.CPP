#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int x;
	struct node *next;
};

struct node *start = NULL;
void insert_at_begin(int);
void insert_at_end(int);
void display();
void delete_at_begin();
void delete_at_end();
int count=0;
void  main()
{
	clrscr();
	int i,x;
	for(;;)
	{
		printf("1.Insert an element at the beginning of linked list.\n");
		printf("2.Insert an element at the end of the linked list.\n");
		printf("3.Display the linkedlist.\n");
		printf("4.Delete an element from the beginning.\n");
		printf("5.Delete an element from the end.\n");
		printf("6.Exit\n");
		scanf("%d",&i);
		if(i==1)
		{
			printf("Enter the value of element\n");
			scanf("%d",&x);
			insert_at_begin(x);
		}
		else if(i==2)
		{
			printf("Enter the value of element\n");
			scanf("%d",&x);
			insert_at_end(x);
		}
		else if(i==3)
		{
			display();
		}
		else if(i==4)
		{
			delete_at_begin();
		}
		else if(i==5)
		{
			delete_at_end();
		}
		else if(i==6)
		{
			exit(0);
		}
		else
		{
			printf("please enter valid option.\n");
		}
	}
}
void insert_at_begin(int t)
{
	struct node *a;
	a=(struct node*)malloc(sizeof(struct node));
	a->x=t;
	count++;
	if(start == NULL)
	{
		start=a;
		start->next=NULL;
		return;
	}
	a->next = start;
	start=a;
}
void insert_at_end(int t)
{
	struct node *a,*temp;
	a=(struct node*)malloc(sizeof(struct node));
	a->x=t;
	count++;
	if(start==NULL)
	{
		start=a;
		start->next=NULL;
		return;
	}
	temp=start;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=a;
	a->next=NULL;
}
void display()
{
	struct node *a;
	a=start;
	if(a==NULL)
	{
		printf("Linked list is empty.\n");
		return;
	}
	printf("There are %d elements in linked list.\n",count);
	while(a->next!=NULL)
	{
		printf("%d\n",a->x);
		a=a->next;
	}
	printf("%d\n",a->x);
}
void delete_at_begin()
{
	struct node *a;
	int n;
	if(start==NULL)
	{
		printf("Linked list is empty.\n");
		return;
	}
	n=start->x;
	a=start->next;
	free(start);
	start=a;
	count--;
	printf("%d deleted from the beginngin successfully.\n",n);
}
void delete_at_end()
{
	struct node *a,*u;
	int n;
	if(start==NULL)
	{
		printf("Linked list is empty.\n");
		return;
	}
	count--;
	if(start->next == NULL)
	{
		n=start->x;
		free(start);
		start=NULL;
		printf("%d deleted from end successfully.\n",n);
		return;
	}
	a=start;
	while(a->next!=NULL)
	{
		u=a;
		a=a->next;
	}
	n=a->x;
	u->next=NULL;
	free(a);
	printf("%d deleted from end successfully.\n",n);
}



Output:

1.Insert an element at the beginning of linked list.                            
2.Insert an element at the end of the linked list.                              
3.Display the linkedlist.                                                       
4.Delete an element from the beginning.                                         
5.Delete an element from the end.                                               
6.Exit                                                                          
2                                                                               
Enter the value of element                                                      
5                                                                               
1.Insert an element at the beginning of linked list.                            
2.Insert an element at the end of the linked list.                              
3.Display the linkedlist.                                                       
4.Delete an element from the beginning.                                         
5.Delete an element from the end.                                               
6.Exit                                                                          
5                                                                               
5 deleted from end successfully.                                                
1.Insert an element at the beginning of linked list.                            
2.Insert an element at the end of the linked list.                              
3.Display the linkedlist.                                                       
4.Delete an element from the beginning.                                         
5.Delete an element from the end.                                               
6.Exit                                                                          
6                                                                               
                                                                                

