#include <stdio.h>
/*

void greeting(){
    printf("Hello to you my friend\n");
}
int main(void) {
    greeting();
    greeting();
    greeting();
    printf("All greeting function executed\n");



    return (0);
}*/
void numberSquare(int number) {
    int calculateSquare = number * number;
    printf("The square of %d is %d\n",number, calculateSquare);
}

void addNumber(int num1, int num2) {
    int sumOfNumber = num1 + num2;
    printf("The Sum of %d and %d is %d\n",num1, num2, sumOfNumber);
}

int main(void) {
    numberSquare(4);
    numberSquare(5);
    numberSquare(6);
    addNumber(2,2);
    addNumber(2,3);
    addNumber(2,4);
}
