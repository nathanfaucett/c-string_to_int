#include <stdio.h>
#include <stdlib.h>

#include "../lib.h"


int main(void) {
    intsize x0 = string_to_intsize("-32");
    intsize x1 = string_to_intsize("-0");
    intsize x2 = string_to_intsize("0");
    intsize x3 = string_to_intsize("32");
    printf("%i\n", (int) x0);
    printf("%i\n", (int) x1);
    printf("%i\n", (int) x2);
    printf("%i\n", (int) x3);
    return 0;
}
