#include <stdio.h>

/* Testing input and output functions */

int main(void) 
{
    char name[20];
    printf("Enter a name: \n ");
    fgets(name, 20, stdin);
    
    printf("Your name is: %s", name);
    puts("My name is under this line");
    puts(name);
    return (0);
}
