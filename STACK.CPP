#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int stk[10],n,x,i,ch,top;
void push(void);
void pop(void);
void display(void);
void main()
{
	clrscr();
	top=-1;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("1.....push...\n");
	printf("2.....pop.... \n");
	printf("3.....display....\n");
	printf("4.exit\n");
	do
	{
		printf("Enter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid option");
				break;
		}
	}while(n>0);
}
void push()
{
	printf("Enter the number to be push:");
	scanf("%d",&x);
	if(top>=n-1)
	{
		printf("The stack is full");
	}
	else
	{
		top++;
		stk[top]=x;
	}
}
void pop()
{
	printf("Enter the number to be pop:");
	scanf("%d",&x);
	if(top==-1)
	{
		printf("The stack is empty");
	}
	else
	{
		x=stk[top];
		top--;
	}
}
void display()
{
	if(top==-1)
	{
		printf("The stack is empty");
	}
	else
	{
		for(i=top;i>=0;--i)
		{
			printf("%d",stk[i]);
			printf("\n");
		}
	}
}


Output:

Enter the size:3                                                                
1.....push...                                                                   
2.....pop....                                                                   
3.....display....                                                               
4.exit                                                                          
Enter the choice:1                                                              
Enter the number to be push:1                                                   
Enter the choice:1                                                              
Enter the number to be push:2                                                   
Enter the choice:1                                                              
Enter the number to be push:3                                                   
Enter the choice:3                                                              
3                                                                               
2                                                                               
1                                                                               
Enter the choice:2                                                              
Enter the number to be pop:2                                                    
Enter the choice:3                                                              
2                                                                               
1                                                                               
Enter the choice:4                                                              
                                                                                
                                                                                
                                                                                
                                                                                

