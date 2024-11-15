/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
int maximum(int a, int b){
    if(a>b){
    return a;}
    else{
        return b;
    }
}
int main()
{ 
    int num1,num2;
    
    printf("enter two numbers");
    scanf("%d%d",&num1,&num2);
    printf("the maximum of%dis%d:%d\n",num1,num2,maximum(num1,num2));

    return 0;
}
