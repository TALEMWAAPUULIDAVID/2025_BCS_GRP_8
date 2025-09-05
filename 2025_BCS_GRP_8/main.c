#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("\n====Simple Calculator====\n");
    printf("1.Addition(+)\n");
    printf("2.Subtraction(-)\n");
    printf("3.Multiplication(*)\n");
    printf("4.Division(/)\n");
    printf("5.Modulus(%)\n");

    
    char operator = '\0';
    double first_number = 0.0f;
    double second_number = 0.0f;
    double result = 0.0f;
    printf("Enter first number: ");
    scanf("%lf", &first_number);

    printf("Enter the operator(+ - * / % ): ");
    scanf(" %c", &operator);

    printf("Enter the second_number: ");
    scanf("%lf",&second_number);

    switch(operator)
    {
        case '+':
            result = first_number + second_number;
            break;
        case '-':
            result = first_number - second_number;
            break;
        case '*':
            result = first_number * second_number;
            break;
        case '/':
            if (second_number == 0){
                printf("Math Error\n");
                return 1;
            }
            else{
                result = first_number / second_number;
            }
            break;
        case '%':
            if (second_number == 0)
            {printf("Math Error\n");
            return 1;
        }
        else{
            result = (int)first_number % (int)second_number;
        }
        break;
        default:
            printf("kindly try other operators\n");

    }
    printf("Result: %.5lf",result);

    return 0;
}
