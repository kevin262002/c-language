#include<stdio.h>

main(){
	int gs;
	int bs;
	int hra;
	int da;
	int ta;
	
	printf("Enter Basic Salary : ");
	scanf("%d",&bs);
	
	hra=10*bs/100;
	da=5*bs/100;
	ta=8*bs/100;
	
	gs = bs+hra+da+ta;
	
	printf("\n Gross Salary : %d",gs);
	
	
	
}
