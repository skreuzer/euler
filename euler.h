#ifndef __EULER__
#define __EULER__

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

int check(int, int, int);
void error(const char *str);
int is_prime(int num);

#endif
