/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

int main() {
    int n;

    // Ask the user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Outer loop for the number of rows
    for(int i = 1; i <= n; i++) {
        // Inner loop for printing stars
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}