// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int r1,c1,r2,c2;
 

    printf("enter number of rows and cols of matrix1 : ");
    scanf("%d  %d",&r1,&c1);
    printf("\nenter number of rows and cols of matrix2 : ");
     scanf("%d  %d",&r2,&c2);
        int mat1[r1][c1],mat2[r2][c2];

        printf("\nenter elements of matrix 1");
        for(int i=0;i<r1;i++){
            for ( int j = 0; j < c1; j++)
            {
                scanf("%d",&mat1[i][j]);
            }
        }

    
    printf("\nenter elements of matrix 2");
    for(int i=0;i<r2;i++){
        for ( int j = 0; j < c2; j++)
        {
              scanf("%d",&mat2[i][j]);
        }
    }


    return 0;
}
