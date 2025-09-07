#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // Simple Calculator menu display
    printf("\n==== Simple Calculator ====\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");

    // Declaring of variables to be used in the simple calculator
    char operator = '\0';
    int first_number ;
    float second_number = 0.0f;
    float result = 0.0f;
    // Prompting the user to enter his/her data
    printf("Enter first_number: ");
    scanf("%d", &first_number);

    printf("Enter the operator(+ - * / %% ): ");
    scanf(" %c", &operator);

    printf("Enter the second_number: ");
    scanf("%f",&second_number);
    //Displaying of the user input for confirmation
    printf("\nDear user, you have entered: \n");
    printf("first_number = %d\n", first_number);
    printf("operator = %c\n", operator);
    printf("second_number = %.4f\n", second_number);
    // Performing of calculations according to opertaor chosen by user
    switch(operator)
    {
        case '+':
            result = first_number + second_number;
            break;
        case '-':
            result = first_number - second_number;
            break;
        case '*':
            result = (float)first_number * second_number;
            break;
        case '/':
            if (second_number == 0){
                printf("Math Error\n");
            }
            else{
                result = (float)first_number / second_number;
            }
            break;
        case '%':
            if (second_number == 0)
            {printf("Math Error\n");
        }
        else{
            result = (int)first_number % (int)second_number;
        }
        break;
        default:
            printf("kindly try other operators\n");

    }
    //Disply of result to user
    printf("Result = %.5f",result);

    

    return 0;
}
