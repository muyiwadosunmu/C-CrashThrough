#include <stdio.h>
/* main returns a void */
int main(void)
{
    int x;
    x = 24;

    int y = 30;
    float z = 44.67;
    char a = 'D';
    char name[] = "Dosunmu Oluwamuyiwa";
    printf("Size of int : %ld",sizeof(int));
    printf("Size of float: %ld",sizeof(float));
    printf(" My name is %s and I have: %f", name, z);
    return(0);
}
