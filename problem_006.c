#include <stdio.h>
#include <math.h>

#include "euler.h"

#define PROBLEM 6
#define ANSWER 25164150

int
main(int argc, char **argv)
{
    double sum = 0, square = 0;
    for(double x = 0; x <= 100; x++) {
        sum += pow(x, 2.0);
        square += x;
    }
    square = pow(square, 2.0);
    double result = square - sum;
    return check(PROBLEM, ANSWER, result);
}
