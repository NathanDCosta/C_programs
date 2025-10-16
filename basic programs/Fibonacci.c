#include <stdio.h>

int main()
{
int n1=0,n2=1,next,num,i=0;
 printf("enter number of elements");
 scanf("%d",&num);
 for(i=0;i<num;i++){
 	 printf("%d",n1);
  	next=n1+n2;
  	n1=n2;
  	n2=next;
 }
}