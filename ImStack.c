#include<stdio.h>
#include<stdlib.h>
#define n 6

int stack[n], top, ch, x, i;
void push(void);
void pop(void);
void peek(void);

void main(){
    printf("\nImplementation of stack using array \nThis stack has a limit of 5 elements :-)");
    printf("\n\tEnter 1 for inserting element in stack \n\tEnter 2 for deleting element from stack \n\tEnter 3 to display elements from stack \n\tEnter 4 to exit the program");
    printf("\n(-:--------------------------------------------------:-)");

    do{
        printf("\nEnter your choice: \t");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\nIncorrect input\nPlease try again");
        }
    }while(ch!=4);
}

void push(){
    if(top==n-1){
        printf("\nStack is full");
    }
    else{
        printf("\nEnter number to be inserted: \t");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top<=-1){
        printf("\nStack is empty");
    }
    else{
        printf("\nElement to be pop is: %d",stack[top]);
        top--;
    }
}
void peek(){
    if(top<=-1){
        printf("\nStack is empty");
    }
    else{
        for(i=top;i>0;i--){
            printf("\n%d", stack[i]);
        }
    }
}
