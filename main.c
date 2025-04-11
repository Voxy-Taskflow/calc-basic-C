#include <stdio.h>

float firstNumber;
char operation;
float secondNumber;


int performOperations(float firstNumber, char operation, float secondNumber){
    
    if(operation == '+'){
        printf("The answer is:- %f", firstNumber + secondNumber);
    }
    else if (operation == '-'){
        printf("The answer is:- %f", firstNumber - secondNumber);
    }
    else if (operation == '*'){
        printf("The answer is:- %f", firstNumber * secondNumber);
    }
    else if (operation == '/'){
        printf("The answer is:- %f", firstNumber / secondNumber);
    }
    else{
        printf("Provide a valid operator..");
    }
}

int main(){
    while (operation != 'x')
    {
        printf("\n\nEnter the first number.. ");
        scanf("%f", &firstNumber);
        printf("\nwhat operation do you want to perform..\n{avaialable operations = addition(+), subtraction(-), multiplication(*), division(/), exit(x)}");
        scanf("\n%c", &operation);
        printf("\nEnter the second number... ");
        scanf("%f", &secondNumber);
        performOperations(firstNumber, operation, secondNumber);
    }
}