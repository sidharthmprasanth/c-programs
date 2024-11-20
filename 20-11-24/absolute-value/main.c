/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int absolutevalue(int num) {
    if (num < 0) {
        return -num;  
    }
    return num; 
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

  printf("The absolute value is: %d\n", absolutevalue(number));

    return 0;
}

