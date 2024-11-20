/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int sumOddDigits(int number) {
    int sum = 0;
    
    while (number != 0) {
        int digit = number % 10;  
        
        if (digit % 2 != 0) { 
            sum += digit;  
        }
        
        number /= 10;  
    }
    
    return sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = sumOddDigits(num);
    printf("Sum of odd digits: %d\n", result);
    
    return 0;
}