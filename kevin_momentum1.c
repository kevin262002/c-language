#include<stdio.h>

main(){
	
	char a;
	
	printf("Enter a Character : ");
	scanf("%c",&a);
	
	if (a>='a' && a<='z'){
		printf("It Is Alphabet");
	}
	else if(a>='0'){
		printf("It Is Digit");
	}
	else {
		printf("It Is Special Character");
	}
}
