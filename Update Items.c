#include<stdio.h>
#include <stdlib.h>
/* update item */

typedef struct node{
	int data;
	struct node *next;
}node;

node * header = NULL;


void insert_linkedList(int Data);
void print_list(void);
int find_sizeLInkedList(void);
void scearch_forItem(int Data, int post);
void update_forItem(int Dataold, int post, int Datanew);

int main(void){
	
	insert_linkedList(20);
	insert_linkedList(30);
	insert_linkedList(65);
	insert_linkedList(420);
	insert_linkedList(55);
	insert_linkedList(520);
	print_list();
	update_forItem(420 , 3, 900);
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


void update_forItem(int Dataold, int post, int Datanew){
	node * current = header;
	int i =0;
	while( current != NULL){
		if(current -> data == Dataold && i == post){
			current -> data = Datanew;
			printf("\n");
			return ;
		}
		i++;
		current = current -> next;
	}
	
	printf("%d the data not fount ERROR");
}

void scearch_forItem(int Data, int post){
	node * current = header;
	int i =0;
	while( current != NULL){
		if(current -> data == Data && i == post){
			printf("%d the data at the postion %d ", current -> data , i+1);
			return ;
		}
		i++;
		current = current -> next;
	}
	
	printf("%d the data not fount ERROR");
}

int find_sizeLInkedList(void){
	node * current = header;
	int count  = 0;
	while(current != NULL){
		current = current -> next ;
		count ++;
	}
	printf("\n");
	return count;
}