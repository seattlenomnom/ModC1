/* sourcefile for modc1: modc1.c
 * Demo program for concepts found in the early champters of,
 * Dmitrovic, Slobodan, Modern C for Absolute Beginners 2nd ed.,
 * New York, New York, Apress, 2024.
*/

#include <stdio.h>

int main() {

    unsigned int x;

    x = 10;

    printf("Decimal: %d  Octal: %o  Hexidecimal: %x\n", x, x, x);

    printf("This is line %d\n", __LINE__);
    printf("This is file: %s\n", __FILE__);
    printf("The time is : %s\n", __TIME__);
    printf("The date is: %s\n", __DATE__);
    printf("The calling function is: %s\n", __func__);
    printf("The version of C: %ld\n", __STDC_VERSION__);

    return(0);
}
