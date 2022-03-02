#include <stdio.h>
#include <stdlib.h>

int main() {
    float A = 0.0, B = 0.0, C = 0.0;
    printf("\nEnter the following variabels in this form [A*B*C]: ");
    // the entry is in one line and separated by *
    scanf("%f*%f*%f", &A, &B, &C);
    // quadratic equation
    printf("\nquadratic equation: %.2fx^2+%.2fx+%.2f", A, B, C);

    return 0;
}

/*
    Input:
    Enter the following variabels in this form [A*B*C]: 3.48*2.23*1.500
    Output:
    quadratic equation: 3.48x^2+2.23x+1.50
*/