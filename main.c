#include <stdio.h>
#include <stdlib.h>

int firstNumber;
char operation;
int secondNumber;


int performOperations(int firstNumber, char operation, int secondNumber){
    
    if(operation == '+'){
        printf("The answer is:- %d", firstNumber + secondNumber);
    }
    else if (operation == '-'){
        printf("The answer is:- %d", firstNumber - secondNumber);
    }
    else if (operation == '*'){
        printf("The answer is:- %d", firstNumber * secondNumber);
    }
    else if (operation == '/'){
        printf("The answer is:- %f", (float)firstNumber / (float)secondNumber);
    }
    else if(operation == 'x'){
        printf("Exiting.. ");
    }
    else{
        printf("Provide a valid operator..");
    }
}
void checkInput(int input){
    if(scanf("%d", input) != 1){
        printf("Please enter a Valid Response");
        exit(0);
    }
}

int main(){
    while (operation != 'x')
    {
        printf("\n\nEnter the first number.. ");
        scanf("%d", &firstNumber);
        checkInput(firstNumber);
        printf("\nwhat operation do you want to perform..\n{avaialable operations = addition(+), subtraction(-), multiplication(*), division(/), exit(x)}");
        scanf("\n%c", &operation);
        printf("\nEnter the second number... ");
        scanf("%d", &secondNumber);
        checkInput(secondNumber);
        performOperations(firstNumber, operation, secondNumber);
    }
}