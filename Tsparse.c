#include<stdio.h>

int main(){
    int r, c, spr[20][20], trans[20][20], i, j;
    printf("Enter number of rows:\n");
    scanf("%d",&r);
    printf("Enter number of columns:\n");
    scanf("%d",&c);

    if(r==c){
        printf("Enter Elements in matrix:\n");
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                scanf("%d", &spr[i][j]);
            }
        }
        printf("Your entered matrix is: \n");
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                printf("%d\t", spr[i][j]);
            }
            printf("\n");
        }
    
        printf("Transpose of entered matrix is: \n");
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
            trans[j][i]=spr[i][j];
            }
        }
        for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                printf("%d\t", trans[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Sorry entered rows and columns donot match!!!");
    }
    return 0;
}