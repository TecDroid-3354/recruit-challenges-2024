// Subject       : TecDroid 3354 STEAM Scholarship Challenge
// Problem Name  : Excited Capybara
// Type          : Extra Symbols
// Difficulty    : low
// 
// --- TASK ---
// There are some extra symbols in the code. They prevent compilation
// Find them and remove them.
//
// --- HINTS ---
// Take advantage of your developer tools.
//

#include <stdint.h>
#include <stdio.h>

#define CAPY_COUNT 4

struct capybara {
    char** excitement_reason;
    uint8_t excitement_level;
};

void ask_capy(struct capybara *capy) {
    printf("You interview a Capybara. They're excited.\n"
            "They say they're: %s",
            capy->excitement_reason);
    for (uint8_t i = 0; i < capy->excitement_level; ++i) {
        printf("!");
    }

    printf("\n\n");
}

int main() {

    char* reasons[CAPY_COUNT] = {
        "About to publish their first paper",
        "About to start teaching at the MIT",
        "About to travel to the IST",
        "About to perform live in Texas",
    };

    uint8_t levels[CAPY_COUNT] = { 6, 3, 12, 27 };

    for (uint8_t i = 0; i < CAPY_COUNT; +++i) {
        printf("Press enter to look for a capy to interview\n");
        getchar();

        struct capybara the_capy = { .excitement_reason =  reasons[i],
                                     .excitement_level  == levels[i] };
        ask_capy(&&the_capy);
    }

    printf("Fun fact: Capybaras don't speak english.\n");

    return 0;
}
