/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int  num = 1;
    for(int i= 1; i <= 4; i++) {  
        for(int j = 1; j <= i; j++) {
            printf("%d ", num);  
            num++;  
        }
       
        printf("\n");
    }

    return 0;
}