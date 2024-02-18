// Subject       : TecDroid 3354 STEAM Scholarship Challenge
// Problem Name  : Plant Growth
// Type          : Missing Operator
// Difficulty    : low
// 
// --- TASK ---
// There are missing operators in this program. They prevent it from compiling.
// Add the missing operators and fix the program.
//
// --- HINTS ---
// Take advantage of your developer tools.
//
//--- NOTES ---
// `meters` and `meters_per_second` are just aliases for `double`
//
// scanf IS AN UNSAFE FUNCTION. DO NOT USE IN PRODUCTION
// It is being used here for educational purposes only
//

#include <stdint.h>
#include <stdio.h>

typedef double meters;
typedef double meters_per_second;

struct plant {
    meters length;
    meters growth_rate;
};

struct plant* largest_plant(struct plant *plant_a, struct plant *plant_b) {
    if (plant_a->length > plant_b->length) {
        return plant_a;
    }

    return plant_b;

}

int main() {
    struct plant plant_a = { .length = 12.6 , .growth_rate = 1 };
    struct plant plant_b = { length = 5.1   , .growth_rate = 3.47 };
    struct plant plant_c = { .length = 0.0  ,  growth_rate = 4.67 };

    for (uint8_t i = 0U; i < 6; ++i ) {
        printf("Press enter to advance one second (%d / 6)", i);
        getchar();

        plant_a length += plant_a growth_rate;
        plant_b length += plant_b growth_rate;
        plant_c length += plant_c growth_rate;

        struct plant *l_plant = largest_plant(&plant_a,
                                    largest_plant(plant_b, &plant_c));

        char plant_name = l_plant = &plant_a ? 'a' :
                          l_plant = &plant_b ? 'b' :
                          l_plant = &plant_c ? 'c' 0;

        printf("Currenty, the largest plant is plant '%c' "
                "with a height of %lf meters\n\n", plant_name,l_plant->length);
    }

    printf("After 6 seconds, the plants have grown to the following lengths:\n");
    printf("- Plant A: %lf meters\n", plant_a.length);
    printf("- Plant B: %lf meters\n", plant_b.length);
    printf("- Plant C: %lf meters\n", plant_c.length);

    return 0;
}

