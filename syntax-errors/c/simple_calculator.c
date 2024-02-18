// Subject       : TecDroid 3354 STEAM Scholarship Challenge
// Problem Name  : Simple Calculator
// Type          : Missing Operator
// Difficulty    : very low
// 
// --- TASK ---
// There is a missing operator in this program. It prevents it from compiling.
// Add the missing operator and fix the program.
//
// --- HINTS ---
// Take advantage of your developer tools.
//
//--- NOTES ---
// scanf IS AN UNSAFE FUNCTION. DO NOT USE IN PRODUCTION
// It is being used here for educational purposes only
//

#include <stdio.h>

#define LINE_SIZE 1024

int main() {
    double num_a;
    double num_b;

    printf("Simple Calculator\n");
    printf("Give me a number: ");

    scanf("%lf", &num_a);

    printf("Give me a second number: ");
    scanf("%lf", &num_b);

    printf("%lf + %lf = %lf\n", num_a, num_b, num_a  num_b);
    printf("%lf - %lf = %lf\n", num_a, num_b, num_a  num_b);
    printf("%lf * %lf = %lf\n", num_a, num_b, num_a  num_b);
    printf("%lf / %lf = %lf\n", num_a, num_b, num_a  num_b);

}
