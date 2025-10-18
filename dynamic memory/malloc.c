#include<stdio.h>
#include<stdlib.h>

int main(){
int *ptr = (int*)malloc(5*sizeof(int));
if(ptr==NULL){
    printf("memory allocation failed");
    return 1;
}
else{
    printf("enter elements : ");
for (int i = 0; i < 5; i++)
{
    scanf("%d",ptr+i);
}
for (int i = 0; i < 5; i++)
{
    printf("%d ",ptr[i]);
}

}
free(ptr);

}