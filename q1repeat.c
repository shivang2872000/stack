#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int arr[SIZE];
int top=-1;
void push()
{
  if (top>=SIZE){
    printf("the stack is full\n");
  }
  else{
    printf("Enter data to be pushed inside stack\n");
    scanf("%d",&arr[++top]);
  }
}
void pop(){
  if (top==-1){
    printf("Stack is empty\n");
  }
  else{
    top--;
  }
}
void peek(){
  if (top==-1){
    printf("Stack is empty\n");
  }
  else{
    printf("%d",arr[top]);
  }
}
void print(){
  if (top==-1){
      printf("Stack is empty\n");
    }
  else{
    while(top!=-1){
      printf("%d\n",arr[top--]);
    }
  }
}
int main(){
  printf("1-push\n");
  printf("2-pop\n");
  printf("3-peek\n");
  printf("4-print\n");
  printf("5-exit\n");
  int data;
  while(data!=5){
    printf("enter your choice\n");
    scanf("%d",&data);
    switch (data) {
      case 1:push();
      break;
      case 2:pop();
      break;
      case 3:peek();
      break;
      case 4:print();
      break;
    }
  }
  return 0;
}
