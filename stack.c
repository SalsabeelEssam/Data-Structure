#include<stdio.h>
#include <stdlib.h>
/* how to push snd pop a node in s stack*/

typedef struct node{
	int data;
	struct node *next;
}node;

node * sp = NULL;


void push(int Data);
void print_list(void);
void Pop(void);


int main(void){
	
	push(20);
	push(30);
	push(65);
	push(420);
	push(55);
	push(520);
	print_list();
	Pop();
	Pop();
	printf("\n");
	print_list();
	return 0;
}

void push(int Data){
   node* newnode = (node *)malloc(sizeof(node));
   
   if(newnode == NULL){
	   return ;
   }
   newnode -> data = Data ;
   newnode -> next = sp ;
   sp = newnode ;
  
}
void Pop(void){
	
	if(sp == NULL){
		// return error state 
		return ;
	}
	node* delete = NULL;
	delete = sp ;
	sp = sp -> next  ;
	free(delete);
	
	
}
void print_list(void){
	node * current = sp; 
	while( current != NULL){
		printf("%d ", current -> data);
		current = current -> next;
	}
	
}