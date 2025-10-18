#include<stdio.h>
#include<stdlib.h>

int main(){
  int n;
  printf("enter number of elemnts");
  scanf("%d",&n);
  int *ptr = (int*)calloc(n,sizeof(int));


   printf("enter elements : ");
  for(int i=0;i<n;i++){
    scanf("%d",ptr+i);
  }
      printf("enter number of elemnts for reallocation");
  scanf("%d",&n);
  ptr = realloc(ptr,n*sizeof(int));
    for(int i=0;i<n;i++){
    printf("%d ",*(ptr+i));
  }

}