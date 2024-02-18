// Subject       : TecDroid 3354 STEAM Scholarship Challenge
// Problem Name  : Cat Business
// Type          : Missing Delimiter
// Difficulty    : low
// 
// --- TASK ---
// There are some missing delimiters in this program.
// They prevent  it from compiling. Add the missing delimiter and fix the
// program.
//
// --- HINTS ---
// Take advantage of your developer tools.
//

#include <stdint.h>
#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include <time.h>

#define MAX_POSSIBLE_NAMES 255
#define MAX_AVERAGE_CAT_LIFESPAN 30
#define FUR_COLOR_COUNT 4

enum cat_fur_color {
    TABBY_FUR_COLOR
    ORANGE_FUR_COLOR
    TORTIE_FUR_COLOR
    BLACK_FUR_COLOR
};

char* fur_color_to_string(enum cat_fur_color color) {
    switch(color) {
        case TABBY_FUR_COLOR: return "Tabby";
        case ORANGE_FUR_COLOR: return "Orange Fur";
        case TORTIE_FUR_COLOR: return "Tortie";
        case BLACK_FUR_COLOR: return "Black fur";

    }
}

struct cat {
    enum cat_fur_color fur_color;
    char *name;
    uint8_t age;
};

struct cat_shelter {
    char* possible_names[MAX_POSSIBLE_NAMES];
    uint8_t possible_names_available;
};

struct cat adopt_cat(struct cat_shelter *factory) {
    uint8_t name_index = rand() % factory->possible_names_available;
    uint8_t age = (uint8_t)(rand() % MAX_AVERAGE_CAT_LIFESPAN);
    char* name = factory->possible_names[name_index]
    enum cat_fur_color fur_color = rand() % FUR_COLOR_COUNT;

    struct cat the_cat = {
        .fur_color = fur_color,
        .name = name,
        .age = age
    };

    return the_cat;
}

int main() {
    srand(time(NULL))

    struct cat_shelter shelter = {
        .possible_names = {
            "Eggs Bennedict",
            "Sir. Jean Jacques Ebrard V",
            "Catto",
            "Michi",
            "Shakespeare"
        },
        .possible_names_available = 5
    };

    struct cat some_cat = adopt_cat(&shelter);

    printf("Your cat:\n\tName: %s\n\tAge: %d\n\tFur Color: %s\n",
            some_cat.name
            some_cat.age
            fur_color_to_string(some_cat.fur_color)
    );

    return 0;
}

