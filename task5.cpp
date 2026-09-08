#include <stdio.h>

int main()
{
    int num1, num2;
    char operation;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (operation)
    {
        case '+':
            printf("The sum of two numbers is %d\n", num1 + num2);
            break;

        case '-':
            printf("The difference of two numbers is %d\n", num1 - num2);
            break;

        case '*':
            printf("The product of two numbers is %d\n", num1 * num2);
            break;

        case '/':
            if (num2 == 0)
            {
                printf("Division by zero is not allowed.\n");
            }
            else
            {
                printf("The quotient of two numbers is %d\n", num1 / num2);
            }
            break;

        default:
            printf("Invalid operation.\n");
    }

    return 0;
}
