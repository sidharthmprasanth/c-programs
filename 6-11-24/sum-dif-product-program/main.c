/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2,sum,dif,product;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Sum: %d\n", num1 + num2);
    printf("Dif: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);
    return 0;
}