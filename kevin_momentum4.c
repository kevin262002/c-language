#include<stdio.h>

main(){
	char a;
	
	printf("Enter Number : ");
	scanf("%c",&a);
	
	switch (a){
		
		case 'm':
			printf("Monday");
			break;
			
			case 't':
			printf("Tuesday");
			break;
			
			case 'w':
			printf("Wensday");
			break;
			
			case 'h':
			printf("Thuseday");
			break;
			
			case 'f':
			printf("friday");
			break;
			
			case 's':
			printf("Saturday");
			break;
			
			case 'u':
			printf("Sunday");
			break;
			
			default :
				printf("Erorr");
				break;
			
	}
}
