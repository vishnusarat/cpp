#include <stdio.h>

int main()
{
    char op;
    float num1, num2, result;
    printf("enter the operator : ");
    scanf("%c", &op);
    printf("Enter the numbers \n");
    scanf("%f %f", &num1,&num2);
    switch(op)
    {
        case '+': 
            result = num1 + num2;
            break;
        case '-': 
            result = num1 - num2;
            break;
        case '*': 
            result = num1 * num2;
            break;
        case '/': 
            result = num1 / num2;
            break;

        default: 
            printf("Invalid operator");
    }
    printf("\nthe result is %f", result);

    return 0;
}
