#include <stdio.h>
#include <conio.h>

double calculate(double a,double b,int c)
{
    if(c==1)return a+b;
    if(c==2)return a-b;
    if(c==3)return a*b;
    if(c==4)return a/b;
}

int main()
{
    double operand1,operand2,answer;
    int operation,choice;
    while(true)
    {
        printf("Enter First Operand: ");
        scanf("%lf",&operand1);
        printf("Enter Second Operand: ");
        scanf("%lf",&operand2);
        printf("\nChoose operation! (Please enter only integral values)");
        printf("\n1 For Addition");
        printf("\n2 For Subtraction");
        printf("\n3 For Multiplication");
        printf("\n4 For Division\n");
        scanf("%d", &operation);
        if(operation<1 || operation > 4) {
                printf("Wrong Input, Try Again !!\n");
                printf("-------------------------\n");
                continue;
            }
        if(operation==4 && operand2==0) printf("\nError - Division by zero !!\n");
        else {
            answer = calculate(operand1,operand2,operation);  
            if(operation==1) printf("\n %lf + %lf = %lf\n",operand1,operand2,answer);
            if(operation==2) printf("\n %lf - %lf = %lf\n",operand1,operand2,answer);
            if(operation==3) printf("\n %lf * %lf = %lf\n",operand1,operand2,answer);
            if(operation==4) printf("\n %lf / %lf = %lf\n",operand1,operand2,answer);
        } 
        printf("Enter 0 to exit the calculator or 1 to continue.\n");
        scanf("%d",&choice);
        if(choice==0)break;
        else {printf("-------------------------\n");continue;}
    }
    return 0;
}