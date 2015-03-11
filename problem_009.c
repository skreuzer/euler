#include <stdio.h>
#include <stdint.h>
#include "euler.h"

#define PROBLEM 9
#define ANSWER 31875000

int
main(int argc, char **argv)
{
    int a, b, c, a2, b2, c2;
    int product = 0;
    for(a = 1; a < 1000; a++) {
        for(b = 1; b < 1000; b++) {
            a2 = a * a;
            b2 = b * b;
            for(c = 1; c < 1000; c++) {
                c2 = c * c;
                if((a2 + b2 == c2) && (a + b + c == 1000)) {
                    product = a * b * c;
                }
            }
        }
    }
    return check(PROBLEM, ANSWER, product);
}
