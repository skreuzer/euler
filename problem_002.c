/* Each new term in the Fibonacci sequence is generated by adding the previous
 * two terms. By starting with 1 and 2, the first 10 terms will be:
 *
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 *
 * By considering the terms in the Fibonacci sequence whose values do not
 * exceed four million, find the sum of the even-valued terms.
 */

#include <stdio.h>
#include "euler.h"

#define LIMIT 4000000
#define PROBLEM 2
#define ANSWER 4613732

int
main(int argc, char **argv)
{
    int prev = 0, next = 1, sum = 0, cur = 0;

    do {
        cur = prev + next;
        if(cur % 2 == 0) {
            sum += cur;
        }
        prev = next;
        next = cur;
    } while (cur < LIMIT);
    return check(PROBLEM, ANSWER, sum);
}
