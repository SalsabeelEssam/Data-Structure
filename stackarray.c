#include <stdio.h>

#define Stack_Size 1024
int stack[Stack_Size];
int sp = 1024; 

///////////////////////////////////////////////////////
typedef enum Errorstate{
	NOK,
	OK,
	STACK_EMPTY,
	STACK_OVER_FLOW
}error_state;
/////////////////////////////////////////////////
error_state push(int data);
 error_state pop(void);
int peek(void);
void print_stack(void);
//////////////////////////////////////////////////

int main(void){
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	push(7);
	push(8);
	push(9);
	print_stack();
	printf("\n");
	printf("%d \n",peek());
	printf("%d \n",peek());
	printf("%d \n",peek());
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	print_stack();
	printf("\n");
	printf("%d \n",peek());
}

error_state push(int data){
	error_state state = NOK;
	
	if(sp  < 0){
		state = STACK_OVER_FLOW;
		return state;
	}else{
		sp--;
		stack[sp] = data;
		state = OK;
		return state;
	}
	return state;
}
 error_state pop(void){
	error_state state = NOK;
	if(sp  == 1024){
		state = STACK_EMPTY;
		return state;
	}
	sp++;
}
int peek(void){
	return stack[sp];
}
void print_stack(void){
if(sp == 1024){
	printf("Stack Is Empty");
    return;
}
	for(int i=1023; i>=sp ; i-- ){
		printf("%d ",stack[i]);
	}
}