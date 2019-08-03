#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node * next;
};
struct node * new;
new=(struct node *)malloc(sizeof(struct node));
int top=-1;
void push(){
  struct node * nextnode;
  nextnode=(struct node *)malloc(sizeof(struct node));
  printf("enter the data to be pushed in stack\n");
  scanf("%d",&new->data);
  new->next=nextnode;
  nextnode->null;
  top++;
}
void pop
