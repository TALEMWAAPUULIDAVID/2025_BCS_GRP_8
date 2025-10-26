#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calculator.h"
// Declaring of Global variable
float result = 0.0f;
float ans = 0.0f;
char choice = '\0';
float number = 0.0f;
char operation = '\0';


// Function Methods

/*int sum (int x, int y){
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
}*/

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
    float first_number = 0.0f;
    float second_number = 0.0f;
    float result = 0.0f;

    // Prompting the user to enter first number
    while(1){
        printf("Enter first number: ");
        if(scanf("%f", &first_number)==1 ){ 
            while(getchar() != '\n');
            break;
        }
        
        
        else{
            printf("Invalid input, Please enter digits\n");
            while(getchar() != '\n');

        }
    }
    
    //Prompting user to enter second number
    while(1){
        printf("Enter the second number: ");
        if(scanf("%f",&second_number)==1){
        while(getchar() != '\n');
        break;
    }
        else{
            printf("Invalid input,Please enter digits\n");
            while(getchar() != '\n');
        }
    }


    
    // Prompting user to choose operator
    while(1){
        printf("Enter the operation(1-Addition(+),2-Subtraction(-),3-Multiplication(*),4-Division(/),5-Modulus(%%)): ");
        if(scanf(" %d", &operator)==1 && (operator >= 1 && operator <= 5)){
            while(getchar() != '\n');
            break;
        }
        else{
            printf("Invalid input,Please choose given numbers\n");
            while(getchar() != '\n');
        }
    }
    
    //Displaying of the user input for confirmation
    printf("\nDear user, you have entered: \n");

    printf("Enter first number : %.4f\n", first_number);

    printf("Enter second number : %.4f\n", second_number);

    printf("Enter operation(1-5) : %d\n", operator);

    // Performing of calculations according to opertaor chosen by user by switch case

    
    switch(operator)
    {
        
        case 1:                   // Addition
            result = sum(first_number, second_number);
            printf("Result = %.4f + %.4f = %.4f\n", first_number, second_number, result);
            break;
        case 2:              // Subtraction
            result = sub(first_number, second_number);
            printf("Result = %.4f - %.4f = %.4f\n", first_number, second_number, result);
            break;
        case 3:            // Multiplication
            result = mul(first_number, second_number);
            printf("Result = %.4f * %.4f = %.4f\n", first_number, second_number, result);
            break;
        case 4:              // Division
            if (second_number == 0.0f){
                printf("Division by zero is not allowed\n");
            }
            else{
                result = divide(first_number, second_number);

                printf("Result = %.4f / %.4f = %.4f\n", first_number, second_number, result);
            }
            break;
        case 5:              // Modulus
            if (second_number == 0)
            {printf("Error:Division by zero is not allowed\n");
        }
        else{
            result = mod(first_number, second_number);
            printf("Result = %.4f %% %.4f = %.4f\n", first_number, second_number, result);
        }
        break;
        default:
            printf("kindly try other operators\n");

        return result;

    }

    //Continue with previous result for calculation 

        
        while (1){
            printf("\nUse previous answer (ans = %.4f)? (y/n): ",result);
            if(scanf(" %c", &choice)==1 && (choice == 'y' || choice =='Y' )){
                if(choice == 'y' || choice == 'Y'){
                    ans = result;
                    while (1){
                        printf("Enter number: ");
                        if(scanf("%f", &number)==1){
                            while (getchar() != '\n');
                            break;
                        }
                        else{
                            printf("Invalid input,please enter digits\n");
                            while (getchar() != '\n');
                    }
                    
                    }
                    while (1) {
                        
                        printf("Select operation (+, -, *, /, %%): ");
                        if (scanf(" %c", &operation) == 1 &&(operation == '+' || operation == '-' || operation == '*' ||operation == '/' || operation == '%')) {
                            while (getchar() != '\n');
                            break;
            } 
                        else {
                            printf("Invalid operation. Please enter one of +, -, *, /, %%\n");
                            while (getchar() != '\n'); // clear input buffer
            }
        }
                                
                                //Displaying of the user input for confirmation
                    printf("\nDear user, you have entered: \n");

                    printf("Previous result : %.4f\n", ans);

                    printf("Enter number : %.4f\n", number);

                    printf("Enter operation: %c\n", operation);

                    switch(operation){
                case '+' :
                    result = sum(ans, number);
                    printf("Result = %.4f + %.4f = %.4f\n", ans, number, result);
                    break;
                case '-':
                    result = sub(ans, number);
                    printf("Result = %.4f - %.4f = %.4f\n", ans, number, result);
                    break;
                case '*':
                    result = mul(ans, number);
                    printf("Result = %.4f * %.4f = %.4f\n", ans, number, result);
                    break;
                case '/':
                    if (number == 0.0f){
                        printf("Division by zero is not allowed\n");
                    }
                    else{
                        result = divide(ans, number);

                        printf("Result = %.4f / %.4f = %.4f\n", ans, number, result);
                    }
                    break;
                case '%':
                    if (number == 0.0f)
                    {printf("Error:Division by zero is not allowed\n");
                }
                else{
                    result = mod(ans, number);
                    printf("Result = %.4f %% %.4f = %.4f\n", ans, number, result);
                }
                break;
                default:
                    printf("kindly try other operations\n");

                return result;

                }

            }
            }

            else if(choice == 'n' || choice =='N' ){
                printf("Thank you for choosing the simple calculator, We shall again");
                break;

            }

            else{
                printf("Invalid input, please enter 'y' or 'n'");
                while(getchar() != '\n');
            }
        }
    



    return 0;
}
