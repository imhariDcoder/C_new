#include<stdio.h>
int n = 8;       
int stack[8],top = -1;     
int isfull() {

   if(top == n)
      return 1;
   else
      return 0;
}
int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
int pop() {
   int data;
	
   if(isempty()) {
   		printf("Stack is empty.\n");
   }
    else {
    	data = stack[top];
      	top = top - 1;   
      	return data;
   }
}
int push(int data) {
	if(isfull()) {
		printf("stack is full ");
	}
	else {
		top++;
		stack[top] = data;
	}
}
int peek() {
   return stack[top];
}
int main() {
   push(5);
   push(3);
   push(6);
   pop();
   printf("Element at top : %d\n",peek());
   printf("Elements: \n"); 
   while(!isempty()) {
      int data = pop();
      printf("%d\n",data);
   }
}
