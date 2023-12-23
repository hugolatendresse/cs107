#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quadratic(int a, int b, int c, double* x1, double* x2);


int main(int argc, char *args[]) {
    if (argc <4) {
        printf("Please provide 3 arguments for a,b,c\n");
        return 1;
    }

    printf("The arguments are %s and %s and %s\n", args[1], args[2], args[3]);

    int a = atoi(args[1]);
    int b = atoi(args[2]);
    int c = atoi(args[3]);

    printf("The numerical parameters are %d and %d and %d\n", a, b, c);

    double root1, root2;
    quadratic(a, b, c, &root1, &root2);

    printf("The resulting roots are %f and %f\n", root1, root2);
    return 0;
}

void quadratic(int a, int b, int c, double* x1, double* x2) {
    *x1 = (-b - sqrt(b*b - 4*a*c)) / (2*a); 
    *x2 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
}
