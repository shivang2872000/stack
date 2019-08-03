#include <stdio.h>
#include<stdbool.h>
int max = 9;
int top = -1;
int st[10];
void push(int data){
        if(top == max) printf("OverFlow");
        else st[++top] = data;
}
void pop(){
        if(top == -1) printf("Underflow");
        else --top;
}
int peek(){
        return st[top];
}
bool empty(){
        if(top == -1) return true;
        else return false;
}
int arr[10],test[10];
int main() {
    int i,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int j=0;
    int num=1;
    for(j=1;j<=n;j++)
    {
           if(arr[j]==num)
              {
                  test[num++]=arr[j];
                  continue;
              }
            while(empty() && peek() ==num)
            {
                test[num++]=peek();
                pop();
            }
            push(arr[j]);
    }
    while(!empty())
    {
        test[num++]=peek();
        pop();
    }
    int flag=0;
    for(k=1;k<=n;k++)
    {
        if(test[k]!=k){
                flag=1;
                break;

        }
    }
    if(flag==0)  printf("yes");
    else   printf("no");
    return 0;
}
