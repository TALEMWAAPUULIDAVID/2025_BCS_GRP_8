#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calculator.h.H"
// Declaring of Global variable
int result = 0;


// Function Methods
int sum (int x, int y){
    result = x + y;
    return result;
}
int sub (int x , int y){
    result = x - y ;
    return result;
}
int mul (int x , int y){
    result = x * y ;
    return result;
}
int divide (int x , int y){
    result = x / y ;
    return result;
}
int mod (int x , int y){
    result = x % y ;
    return result;
}

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

    int operator = 0;
    int first_number = 0;
    int second_number = 0;
    int result = 0;

    // Prompting the user to enter his/her data

    printf("Enter first_number: ");
    scanf("%d", &first_number);

    

    printf("Enter the second_number: ");
    scanf("%d",&second_number);

    printf("Enter the operation(1-Addition(+),2-Subtraction(-),3-Multiplication(*),4-Division(/),5-Modulus(%%)): ");
    scanf(" %d", &operator);
    
    //Displaying of the user input for confirmation
    printf("\nDear user, you have entered: \n");

    printf("Enter first_number : %d\n", first_number);
    
    printf("Enter second_number : %d\n", second_number);

    printf("Enter operation(1-5) : %d\n", operator);

    // Performing of calculations according to opertaor chosen by user by switch case

    switch(operator)
    {
        case 1:
            result = sum(first_number, second_number);
            printf("Result = %d + %d= %d\n", first_number, second_number, result);
            break;
        case 2:
            result = sub(first_number, second_number);
            printf("Result = %d - %d= %d\n", first_number, second_number, result);
            break;
        case 3:
            result = mul(first_number, second_number);
            printf("Result = %d * %d= %d\n", first_number, second_number, result);
            break;
        case 4:
            if (second_number == 0){
                printf("Math Error\n");
            }
            else{
                result = divide(first_number, second_number);

                printf("Result = %d / %d= %d\n", first_number, second_number, result);
            }
            break;
        case 5:
            if (second_number == 0)
            {printf("Error:Division by zero is not allowed\n");
        }
        else{
            result = mod(first_number, second_number);
            printf("Result = %d %% %d= %d\n", first_number, second_number, result);
        }
        break;
        default:
            printf("kindly try other operators\n");

    }




    return 0;
}
