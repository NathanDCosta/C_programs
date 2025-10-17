#include<stdio.h>

int interest(int p,int r,int t){
	int interest = (p*r*t)/100;
	return interest;
}

int transfer(int *acc1,int *acc2,int funds){
  
	if(*acc1<funds){
	    
		printf("insuffiecent funds");
	}
	else{
	    *acc1=*acc1-funds;
    *acc2=*acc2 +funds;
    printf("Balance in account 1  after transfer is : %d \nBalance in account 2  after transfer is %d",*acc1,*acc2);
	}
}

int main(){
    printf("\t\t ONLINE BANKING\n\n");
	  int balance1,principal,rate,time,intbal,balance2,funds;
	  printf("Enter account balance : ");
    scanf("%d",&balance1);
	  printf("Enter principal amount : ");
    scanf("%d",&principal);
    printf("Enter rate of interest : ");
    scanf("%d",&rate);
    
	
	  printf("Enter time period (in years) : ");
    scanf("%d",&time);

    int inter =interest(principal,rate,time);
    intbal= inter +balance1;
    printf("\n \nInterest earned is %d \nAccount balance is %d \n\n",inter,intbal);
    printf("Enter account 2 balance : ");
    scanf("%d",&balance2);
    printf("Enter funds to transfer : ");
    scanf("%d",&funds);
    transfer(&balance1,&balance2,funds);
    return 0;
}
