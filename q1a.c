#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int arr[SIZE];
int top=-1;
void push()
{
  if(top<SIZE){
    printf("enter the data to be pushed inside the stack\n");
    top++;
    scanf("%d",&arr[top]);
  }
  if (top>=SIZE){
    printf("stack overflow");
  }
}
void pop(){
  if(top==-1){
    printf("the stack is empty");
  }
  else{
    top--;
  }
}
void display(){
  if(top<0){
    printf("stack is empty");
  }
  else{
    int p=top;
    while(p!=-1){
      printf("%d\n",arr[p]);
      p--;
    }
  }
}
int main(){
 int count;
 while(count!=4){
   printf("1-push\n");
   printf("2-pop\n");
   printf("3-display\n");
   printf("4-exit\n");

   scanf("%d",&count);
   switch (count) {
     case 1:push();
     break;
     case 2:pop();
     break;
     case 3:display();
     break;
   }
 }
 return 0;
}
