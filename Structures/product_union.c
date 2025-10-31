#include<stdio.h>

union product {
	int pieces,weight,volume;


};
int main() {
	int choice;
	union product p;
		printf("enter name of product : ");
	char name[20];
	scanf("%s", name);
	printf("enter choice : ");
	scanf("%d", &choice);
		

	switch (choice) {
	case 1:
	
		printf("enter number of pieces : ");
		scanf("%d", &p.pieces);
		printf("\n\n product entered : %s\nnumber of pieces %d", name,p.pieces);


		break;
	case 2:

		printf("enter weight in kg : ");
		scanf("%d", &p.weight);
		printf("\n\n product entered : %s\nweight of product %d", name, p.weight);
		break;
	case 3:

		printf("enter volume in liters : ");
		scanf("%d", &p.volume);
		printf("\n\n product entered : %s\nvolume of product %d", name, p.volume);
		break;
	default:
		printf("wrong choice ! : ");
		break;
	}

	

}
