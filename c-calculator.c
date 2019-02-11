#include<stdio.h>

void main(){
	int c;
	float res, num1, num2;
	printf("Enter\n1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n");
	scanf("%d", &c);
	
	printf("Enter the first and second number:\n");
	scanf("%f %f", &num1, &num2);
	
	switch(c){
		case 1:
			res = num1 + num2;
			printf("%f + %f = %f", num1, num2, res);
			break;
		
		case 2:
			res = num1 - num2;
			printf("%f - %f = %f", num1, num2, res);
			break;
		
		case 3:
			res = num1 * num2;
			printf("%f * %f = %f", num1, num2, res);
			break;
		
		case 4:
			if(num2==0){
				printf("Zero Division error: denominator shouldn't be zero");
			}
			else{
				res = num1 / num2;
				printf("%f / %f = %f", num1, num2, res);
			}
			break;
		
		default:
			printf("Input error");
			break;
	}
}
