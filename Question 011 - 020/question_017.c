#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and distinct: %.2f and %.2f\n", r1, r2);
    } 
    else if (d == 0) {
        r1 = -b / (2*a);
        printf("Roots are real and equal: %.2f and %.2f\n", r1, r1);
    } 
    else {
        printf("Roots are imaginary.\n");
    }

    return 0;
}
