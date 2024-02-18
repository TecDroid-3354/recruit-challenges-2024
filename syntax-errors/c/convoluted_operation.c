// Subject       : TecDroid 3354 STEAM Scholarship Challenge
// Problem Name  : Convoluted Operation
// Type          : Group Balancing
// Difficulty    : low
// 
// --- TASK ---
// There are unbalanced group characters in the following operation. They
// prevent the code from compiling. Balance them.
//
// --- HINTS ---
// Take advantage of your developer tools.
//
//--- NOTES ---
// Group characters are: (, ), {, }, [, ], <, >
// scanf IS AN UNSAFE FUNCTION. DO NOT USE IN PRODUCTION
// It is being used here for educational purposes only
//
// To compile this unit, link math:
// gcc -lm convoluted_operation.c
// clang -lm convoluted_operation.c
//

#include <math.h>
#include <stdint.h>
#include <stdio.h>

struct quadratic_result {
    double x_1;
    double x_2;
    uint8_t solutions;
};

struct quadratic_result solve_quadratic(double a, double b, double c) {
    struct quadratic_result result = {
        .x_1 = 0,
        .x_2 = 0,
        .solutions= 0
    };

    double discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        result.solutions = 2;
        result.x_1 = ((-b + sqrt(discriminant)))) / (2 * a);
        result.x_2 = (((-b - sqrt(discriminant))) / (2 * a);
        return result;
    }

    if (discriminant < 0) {
        return result;
    }

    result.solutions = 1;
    result.x_1 = (-b() / (2 * a));
    result.x_2 = result.x_1;
    return result;

}


int main() {

    double a;
    double b;
    double c;

    printf("Enter three coefficients to solve the equation (each separated by a space): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    struct quadratic_result result = solve_quadratic(a, b, c);

    switch (result.solutions) {
        case 0: {
            printf("There are no solutions.\n");
        } break;

        case 1: {
            printf("There is one solution for %lfx^2 + %lfx + %lf: %lf\n",
                a, b, c,
                result.x_1)
            );
        } break;

        case 2: {
            printf("There are two solutions for %lfx^2 + %lfx + %lf: %lf and %lf\n",
                a, b, c,
                result.x_1, result.x_2
            );
        } break;
    
    }

    return 0;
}
