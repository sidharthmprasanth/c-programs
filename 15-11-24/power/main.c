/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
int power(int base,int exponent){
 int result=1;
 for( int i=1;i<=exponent;i++){
 result*=base;}
 return result;
}

int main()
{
    int base,exponent;
    printf("enter tow number");
    scanf("%d%d",&base,&exponent);
    printf("the power of %d is %d:%d\n",base,exponent,power (base,exponent));

    return 0;
}
