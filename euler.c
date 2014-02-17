#include <stdio.h>
#include <stdlib.h>

#include "euler.h"

int
check(int problem, int answer, int result)
{
    char *text = "INCORRECT";
    char *color = KRED;
    int ret = 1;
    if(answer == result) {
        text = "CORRECT";
        color = KGRN;
        ret = 0;
    }
    printf("%sProblem %i %s - Expected: %i; Got %i\n",
        color, problem, text, answer, result);
    return ret;
}

void
error(const char *str)
{
    fprintf(stderr, "%s%s\n", KRED, str);
    exit(1);
}
