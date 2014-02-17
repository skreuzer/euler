/*
 * A palindromic number reads the same both ways. The largest palindrome
 * made from the product of two 2-digit numbers is 9009 = 91 X 99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */

#include <stdio.h>

int
is_palindrome(unsigned int num)
{
    unsigned int x = -1, y = 0, z[6];
    while(num) {
        z[++x] = num % 10;
        num /= 10;
    }
    while(x > y) {
        if(z[x--] != z[y++]) {
            return 0;
        }
    }
    return 1;
}

int
main(int argc, char **argv)
{
    int largest = 0;
    int z;
    for(int x = 100; x <= 999; x++) {
        for(int y = 100; y <= 999; y++) {
            z = x * y;
            if(is_palindrome(z) == 1) {
                if(largest < z)
                    largest = z;
            }
        }
    }
    printf("%i\n", largest);
    return 0;
}