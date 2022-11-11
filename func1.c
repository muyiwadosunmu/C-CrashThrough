#include <stdio.h>


int addNumber(int num1, int num2) {
    int sumOfNumber = num1 + num2;
    return sumOfNumber;
}

int main(void) {
    int result = addNumber(9, 20);
    printf("The result is %d\n", result);
    return (0);
}
