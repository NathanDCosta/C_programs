//swapping two numbers using call by value and call by reference 
#include<stdio.h>
#include<conio.h>
int swap(int x,int y);
int swap2(int *x,int *y);

int swap(int x,int y){

	int temp = x;
	x=y;
	y=temp;
	printf(" x=%d ,y=%d \n",x,y);
}
int swap2(int *x,int *y){

	int temp = *x;
	*x = *y;
	*y=temp;
	printf("x= %d ,y=%d \n",*x,*y);
}



int main(){
	int a,b,c,d;
	printf("enter 2 numbers to swap using call by value \n");
	scanf("%d %d",&a,&b);
	swap(a,b);
	printf("enter 2 numbers to swap using call by value \n");
	scanf("%d %d",&c,&d);
	swap2(&c,&d);
	getch();
	return 0;
}
