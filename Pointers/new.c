// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
struct metro{
  char name[50]  ;
  int cardnum;
  float balance;
};
int recharge(struct metro *card){
    float recharge;
    printf("YOUR CURRENT BALNCE IS %.1f\nENTER AMOUNT YOU WANT TO RECHARGE : ",card->balance);
    scanf("%.1f",&recharge);
    card->balance += recharge;
    printf("\nYOUR UPDATED CARD BALANCE IS %f",card->balance);
}
int checkbal(struct metro *card){
    printf("YOUR CURRENT BALANCE IS %.1f",card->balance);
}

int main() {
    int choice;
     struct metro card;
    printf("...........METRO CARD..........");
    printf("ENTER YOU NAME");
    gets(card.name);
   
    card.balance =0;
    
    recharge(&card);
     return 0;
}
    
   
