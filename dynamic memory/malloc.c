#include<stdio.h>
#include<stdlib.h>

int main(){
  int n;
  printf("enter number of elemnts");
  scanf("%d",&n);
  int *ptr = (int*)malloc(n*sizeof(int));

   printf("enter elements : ");
  for(int i=0;i<n;i++){
    scanf("%d",ptr+i);
  }
    for(int i=0;i<n;i++){
    printf("%d ",*(ptr+i));
  }

}