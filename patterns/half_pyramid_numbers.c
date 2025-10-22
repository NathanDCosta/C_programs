#include<stdio.h>
int main(){
    int n;
    char alphabet ='A';
    printf("enter rows : ");
    scanf("%d",&n);
    //half pyramid of *
    printf("\nHALF PYRAMID OF * : \n\n");
     for(int i=0;i<n;i++){

        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
     }
printf("\n\nHALF PYRAMID OF NUMBERS :  \n\n");
//half pyramid of numbers
     for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
     }

     printf("\n\nHALF PYRAMID OF ALPHABETS :  \n\n");
//half pyramid of alphabets
     for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            printf("%c ",alphabet);
        }
        alphabet++;
        printf("\n");
     }


}