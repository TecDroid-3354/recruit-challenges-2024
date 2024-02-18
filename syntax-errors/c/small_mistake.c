// Subject       : TecDroid 3354 STEAM Scholarship Challenge
// Problem Name  : Small Mistake
// Type          : Missing Delimiter
// Difficulty    : very low
// 
// --- TASK ---
// There is a missing delimiter in this program. It prevents it from compiling.
// Add the missing delimiter and fix the program.
//
// --- HINTS ---
// Take advantage of your developer tools.
//

#include <stdint.h>
#include <stdio.h>

int32_t sum_two_numbers(int32_t num_a, int32_t num_b) {
    return num_a + num_b
}

int main() {
    printf(" 1 + 2 =  %d\n", sum_two_numbers(1, 2));
    printf(" 3 + 4 =  %d\n", sum_two_numbers(3, 4));
    printf("-2 + 1 = %d\n", sum_two_numbers(-2, 1));
    return 0;
}
