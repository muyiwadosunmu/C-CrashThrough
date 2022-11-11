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

int main(void) {
    numberSquare(4);
    numberSquare(5);
    numberSquare(6);
}
