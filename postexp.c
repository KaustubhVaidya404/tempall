#include<stdio.h>
int stack[20];
int top = -1;

void push(int x){
    stack[++top]= x;
}
int pop(){
    return stack[top--];
}

int main(){
    char exp[20];
    char *point;
    int n1, n2, n3, num;
    printf("\tEnter the expression :: ");
    scanf("%s",exp);
    point = exp;
    while(*point != '\0'){
        if(isdigit(*point)){
            num = *point - 48;
            push(num);
        }
        else{
            n1 = pop();
            n2 = pop();
            switch(*point){
                case '+': n3 = n1 + n2; 
                break;
                case '-': n3 = n2 - n1;
                break;
                case '/': n3 = n2 / n1;
                break;
                case '*': n3 = n1 * n2;
                break;
            }
            push(n3);
        }
        point++;
    }
    printf("\tEvaluation of intered postflix expression is %s :: %d",exp,pop());
    return 0;
}
