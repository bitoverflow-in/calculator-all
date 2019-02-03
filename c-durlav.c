#include<stdio.h>
#include<conio.h>
float addition(float x1, float y1);
float subtraction(float x2, float y2);
float divison(float x3, float y3);
float multiplication(float x4, float y4);
void main()
{
    float a,b,r;
    int n;
    printf("\nEnter first number(operand)--");
    scanf("%f",&a);
    printf("\n Enter second number(operand)--");
    scanf("%f",&b);
    printf("\n Enter 1 for Addition.");
    printf("\n Enter 2 for Subtraction.");
    printf("\n Enter 3 for Division.");
    printf("\n Enter 4 for Multiplication.\n");
    printf("\n Choose a number according to the operation you want to perform--");
    scanf("%d",&n);
    switch(n){
        case 1:r=addition(a,b);
        break;
        case 2:r=subtraction(a,b);
        break;
        case 3:r=divison(a,b);
        break;
        case 4:r=multiplication(a,b);
        break;
        default:printf("\n Wrong input.");
    }
    if(n==3 && b==0){
        printf("\n Can't divide by Zero.");
    }
    else{
     printf("\n The result of operation is %f",r);
    }

    getch();
}
float addition(float x1, float y1)
{
    return x1+y1;
};
float subtraction(float x2, float y2)
{
    return x2-y2;
};
float divison(float x3, float y3)
{
    return x3/y3;
};
float multiplication(float x4, float y4)
{
    return x4*y4;
};
