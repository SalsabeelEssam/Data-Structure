#include<stdio.h>
#include <stdlib.h>

/*Write a C function that returns the
 data inside the 5th element from the end of linked list and in case 
 the linked list contains only one node return the data inside this node.*/

typedef struct node{
	int data;
	struct node *next;
}node;
node * header = NULL;

void insert_linkedList(int Data);
void print_list(void);
int find_sizeLInkedList(void);
void insert_atanyPosition(int Data, int post);
int Middle_linkedList(void);
int fifth_linkedList(void);
int main(void){
	
	insert_linkedList(20);
	insert_linkedList(30);
	insert_linkedList(65);
	insert_linkedList(420);
	insert_linkedList(55);
	insert_linkedList(520);
	insert_linkedList(320);
	insert_linkedList(650);
	insert_linkedList(47);
	insert_linkedList(58);
	insert_linkedList(39);
	print_list();
	insert_atanyPosition(90,4);
	printf("\n");
	print_list();
	printf("\n");
	//printf(" %d",Middle_linkedList());
	printf(" %d",fifth_linkedList());
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
int fifth_linkedList(void){
	if(header -> next == NULL){
		return (header -> data);
	}
	// need to check if the linked list i s small than 5 elementt 
	node * current = header;
	while( current -> next -> next -> next -> next -> next  != NULL){
		current = current -> next;
	}
	return (current -> data);
} 