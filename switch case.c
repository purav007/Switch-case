#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter any 2 numbers.\n");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("1 for addition.\n");
    printf("2 for subtraction.\n");
    printf("3 for multiplication.\n");
    printf("4 for division.\n");

    printf("Enter your choice.");
    scanf("%d",&c);

    switch(c)
    {
    case 1:
        printf("The sum is %d",a+b);
        break;
    case 2:
        printf("The difference is %d",a-b);
        break;
    case 3:
        printf("The product is %d",a*b);
        break;
    case 4:
        printf("The quotient is %d",a/b);
        break;
    default:
        printf("Invalid choice");
    }

}

