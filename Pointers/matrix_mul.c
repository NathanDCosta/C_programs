#include<stdio.h>
int main(){
int r1,c1,r2,c2;
 

    printf("enter number of rows and cols of matrix1 : ");
    scanf("%d  %d",&r1,&c1);
    printf("\nenter number of rows and cols of matrix2 : ");
     scanf("%d  %d",&r2,&c2);
     if(c1==r2){
     
        int mat1[r1][c1],mat2[r2][c2],mul[r1][c2];

        printf("\nenter elements of matrix 1 : ");
        
        for(int i=0;i<r1;i++){
            for ( int j = 0; j < c1; j++)
            {
                scanf("%d",(*(mat1+i)+j));

            }
        }

        printf("\nenter elements of matrix 2 : ");
        
        for(int i=0;i<r2;i++){
            for ( int j = 0; j < c2; j++)
            {
                scanf("%d",(*(mat2+i)+j));

            }
        }

           for(int i=0;i<r1;i++){
      
        for(int j=0;j<c2;j++){
             ( *(*(mul+i)+j)) =0;
            for(int k=0;k<r2;k++){
                ( *(*(mul+i)+j)) += (*(*(mat1+i)+k))*(*(*(mat2+k)+j));
            }
        }
    }
printf("\nnew matrix is \n");
          for(int i=0;i<r1;i++){
            for ( int j = 0; j < c2; j++)
            {
                printf("%d \t",(*(*(mul+i)+j)));

            }
            printf("\n");
        }
    }
    else{
        printf("col of mat1 must be equal to row of mat2");
        return 1;
    }

}