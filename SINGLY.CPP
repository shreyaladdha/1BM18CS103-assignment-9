#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

void find_middle(node *p)
{
	node *q = p;
	if(p)
	{
		if(p->next == NULL)
			{
				printf("\n Middle node is  %d", p->data);
			}
		else
		{
			while(p && p->next)
			{
				q = q->next;
				p = p->next->next;
			}
			printf("\n Middle node is : %d\n", q->data);
			}



		}
	}


int main()
{
	int a , i , n , cnt , r, choice;

	node *p,*q,*start , *temp , *new_start;


	p = (node*)malloc(sizeof(node));

	p->data = a;
	p->next = NULL;
	start = p;
	while(1)
	{
		printf("\tEnter your choice\n");
		printf("\tPress 1 to insert DATA\n");
		printf("\tPress 2 to Display the middle element\n ");
		printf("\tPress 3 to Exit\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1 :
			{
				printf("Enter the DATA to be inserted\n");
				scanf("%d", &a);
				q = (node*)malloc(sizeof(node));
				q->data = a;
				q->next = NULL;
				p->next = q;
				p = p->next;
				break;
			}
		
			case 2 :
			{
				find_middle(start);
			 	break;
			}
			
			case 3 : exit(0);

		}
	}
}
