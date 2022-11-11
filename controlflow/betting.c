#include <stdio.h>

/* A program to be able to bet via age*/
int main(void)
{
int age;
printf("What is your age? ");
scanf("%d", &age);

if (age > 18)
printf("You are good to go to bet");
else if (age >= 0 && age < 18)
printf("Sorry you cannot Bet, go home");
else if (age < 0)
printf("Opps!!! You are not born yet");
else
printf("We know nothing about you");
return (0);
}
