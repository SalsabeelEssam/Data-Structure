#include<stdio.h>
#include <stdlib.h>

/*Write a C function that insert linked list node at any position.
The function takes the data of the node and the node position as inputs. 
For example if we have a linked list contains the following data nodes: 11 3 10 50 23 5 60*/

typedef struct node{
	int data;
	struct node *next;
}node;
node * header = NULL;

void insert_linkedList(int Data);
void print_list(void);
void insert_atanyPosition(int Data, int post);
int main(void){
	
	insert_linkedList(20);
	insert_linkedList(30);
	insert_linkedList(65);
	insert_linkedList(420);
	insert_linkedList(55);
	insert_linkedList(520);
	print_list();
	insert_atanyPosition(90,4);
	printf("\n");
	print_list();
	return 0;
}

void insert_linkedList(int Data){
   node* newnode = (node *)malloc(sizeof(node));
   newnode -> data = Data ;
   newnode -> next = NULL;
	if(header == NULL){
		header = newnode ;
		return;
	}
	node * current = header;
	while(current -> next != NULL){
		current = current -> next;
	}
   current -> next = newnode;
}

void print_list(void){
	node * current = header;
	while( current != NULL){
		printf("%d ", current -> data);
		current = current -> next;
	}
	
}

void insert_atanyPosition(int Data, int post){
   node* newnode = (node *)malloc(sizeof(node));
   newnode -> data = Data ;
  int i = 1;
   
	if (header == NULL){
		 newnode -> next = NULL;
		 header = newnode ;
		 return ;
	}

	node * current = header -> next;
	node * pre = header;
	
	while(current -> next != NULL){
		if(post == i){
			pre -> next = newnode ;
			newnode -> next = current;
			return ;
		}
		current = current -> next ;
		pre = pre -> next;
		i++;
	}
}