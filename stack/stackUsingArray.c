#include<stdio.h>

int MAX = 100;
int stack[];
int top = -1;

void push()
{
	int num ;
	printf("Enter the element to be stored \n");
	scanf("%d",&num);
	if(top>MAX-1)		//overflow
	{
		printf("Stack is full");
		return ;
	}
	top++;
	stack[top] = num ;
	return ;
}


void pop()
{
	if(top == -1)
	{
		printf("No elements in stack\n");
	}
	else
	{
		printf("The popped element is %d\n",stack[top]);
		top--;
	}
}

void display()
{
	int i ;
	if(top == -1)
	{
		printf("Stack empty\n");
	}
	else
	{
		printf("The elements are\n");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}

void main()
{
	int n,i ,choice;
	
	
	while(1)
	{
		printf("1. Push \n");
		printf("2. Pop \n");
		printf("3. Display \n");
		printf("4. Exit \n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		printf("\n");
		switch(choice)
		{
			case 1 : push();
			break;
			case 2 : pop();
			break;
			case 3 : display();
			break;
			case 4 : exit();
			break ;
			default : printf("Enter Valid Input\n");
		}
	}
}
