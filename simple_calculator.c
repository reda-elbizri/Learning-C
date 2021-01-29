#include<stdio.h>
#include<stdio.h>

void main(){
    double num1, num2, result;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if(op == '+'){
        result = num1 + num2;
    }
    else if(op == '-'){
       result = num1 - num2; 
    }
    else if(op == '*'){
        result = num1 * num2;
    }
    else if(op == '/'){
        result = num1 / num2;
    }
    else{
        printf("Invalid operator");
    }

    printf("Result: %f", result);
}