#include<stdio.h>
#include <stdlib.h>
/* how to queue snd dequeue a node in  queue.*/

typedef struct node{
	int data;
	struct node *next;
}node;

node * front = NULL;


void queue(int Data);
void print_list(void);
void dequeue(void);


int main(void){
	
	queue(20);
	queue(30);
	queue(65);
	queue(420);
	queue(55);
	queue(520);
	print_list();
	dequeue();
	dequeue();
	printf("\n");
	print_list();
	return 0;
}

void queue(int Data){
   node* newnode = (node *)malloc(sizeof(node));
   
   if(newnode == NULL){
	   return ;
   }
   newnode -> data = Data ;
   newnode -> next = NULL;
   if(front == NULL){
	   front = newnode;
	   return;
   }
   node* current = front;
   // to optimatise while we have add anew ptr rare to the end of queue and then add from the last node
   while(current -> next != NULL){
	   current = current -> next; 
   }
    current -> next = newnode;
}
void dequeue(void){
	
	if(front == NULL){
		// return error state 
		return ;
	}
	node* delete = NULL;
	delete = front ;
	front = front -> next  ;
	free(delete);
	
	
}
void print_list(void){
	node * current = front; 
	while( current != NULL){
		printf("%d ", current -> data);
		current = current -> next;
	}
	
}