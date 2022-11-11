#include <stdio.h>

int main(void)
{
char grade;
printf("Please enter you scores to see grade and remarks");
scanf("%c", grade);
switch (grade)
{
case "A":
printf("You are an excellent student");
break;
case "B":
printf("You are a good student");
break;
default:
printf("No Remarks for now");
return (0);
}
}
