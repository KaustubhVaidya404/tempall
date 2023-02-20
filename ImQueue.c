#include<stdio.h>
#include<stdlib.h>
#define n 5

void main(){
    printf("\nQueue implementation using array");
    int queue[n], ch, rear=0, front=0, x,i, count=1;
    printf("\nThis Queue has a limit of 5 elements");
    printf("\n\tEnter 1 to insert element in queue \n\tEnter 2 to delete an element from queue \n\tEnter 3 to display elements in queue \n\tEnter 4 to exit the program\n");
    printf("(-:-------------------------------------:-)");
    while(count){
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                if(rear==n){
                    printf("Queue is full");
                }
                else{
                    printf("\nEnter number to be inserted: ");
                    scanf("%d",&x);
                    queue[rear]=x;
                    rear++;
                }
                break;
            case 2:
                if(front==rear){
                    printf("\nQueue is empty");
                }
                else{
                    printf("\nElement to be deleted is: %d", queue[front]);
                    front++;
                }
                break;
            case 3:
                if(front==rear){
                    printf("\nQueue is empty");
                }
                else{
                    for(i=front; i<rear; i++){
                        printf("\n%d", queue[i]);
                    }
                }
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\nEnter value is incorrect \nPlease try again");
        }
    }
}