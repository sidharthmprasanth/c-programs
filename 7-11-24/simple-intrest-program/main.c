/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float p,t,r,si;
    printf("enter the principle amount:\nentre the value of time\nenter the rate of intrest:\n");
    scanf("%f%f%f",&p,&t,&r);
    si=(p*t*r)/100;
    printf("simple intresrt is %f",si);
    
    
    return 0;
}