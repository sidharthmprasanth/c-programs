/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int length,width,area;
    printf("enter the length of rectangle;");
    scanf("%d",&length);
    printf("enter the width of a rectangle;");
    scanf("%d",&width);
    area = length*width;
    printf("the area of rectangle %d\n",area);

    return 0;
}