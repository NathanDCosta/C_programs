//write a c perogram using a structure to accept details of n studentsthat is roll no,nmae and 12 std percentage and print detailks who have scored more than 90 %
//write a cprgram using a  union to accept details of a product that can be sold in dfferentb units eithere by pieces ,weight or volume
//the program should allow the user to selectr the product type and input the corresponding quantuty and display the stored quantity

#include<stdio.h>

struct students {
	char name[20];
	int rollno;
	float percentage;

};

int main() {
	int n;
	printf("enter number of students : ");
	scanf("%d", &n);
	struct students s[n];
	for (int i = 0; i < n; i++) {

		printf("enter your name of student %d : ", i + 1);
		scanf("%s", s[i].name);
		printf("enter roll no  : ");
		scanf("%d", &s[i].rollno);
		printf("enter 12 std  % : ");
		scanf("%f", &s[i].percentage);
		printf("\n\n");

	}
	printf("\t \tstudents who scored more then 90% \n \n");
	for (int j = 0; j < n;j++) {
		if (s[j].percentage >= 90) {
			printf("name : %s \nroll no :  %d \nmarks : %f ", s[j].name, s[j].rollno, s[j].percentage);
			printf("\n \n");
		}

	}
}
