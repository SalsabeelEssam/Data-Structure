#include <stdio.h>

#define Queue_Size 1024
int queue[Queue_Size];
int front = 0; 
int tear  = 0; 
///////////////////////////////////////
void inqueue (int data);
void dequeue(void);
int peek(void);
void Print_queue(void);
///////////////////////////////
int main(void){
	inqueue(1);
	inqueue(2);
	inqueue(3);
	inqueue(4);
	inqueue(5);
	inqueue(6);
	inqueue(7);
	inqueue(8);
	inqueue(9);
	Print_queue();
	printf("\n");
	printf("%d \n",peek());
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	Print_queue();
	printf("\n");
	printf("%d \n",peek());
}

void inqueue (int data){
	if(tear == (Queue_Size-1)){
		return;
	}else{
		queue[tear] = data;
		tear++;
	}
}

void dequeue(void){
	if(front == tear){
		return;
	}
	front++;
}
int peek(void){
	return queue[front];
}

void Print_queue(void){
	if(front == tear){
		return;
	}
	for(int i= front ; i<tear ; i++){
		printf("%d ", queue[i]);
	}
}