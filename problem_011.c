#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

const char *num =
"0802229738150040007504050778521250779108\
4949994017811857608717409843694804566200\
8149317355791429937140675388300349133665\
5270952304601142692468560132567137023691\
2231167151676389419236542240402866331380\
2447326099034502447533537836842035171250\
3298812864236710263840675954706618386470\
6726206802621220956394396308409166499421\
2455580566739926971778789683148834896372\
2136230975007644204535140061339734313395\
7817532822753167159403800462161409535692\
1639054296353147555888240017542436298557\
8656004835718907054444374460215851541758\
1980816805944769287392138652177704895540\
0452088397359916079757321626267933279866\
8836688757622072034633674655123263935369\
0442167338253911249472180846293240627636\
2069364172302388346299698267598574043616\
2073352978319001743149714886811623570554\
0170547183515469169233486143520189196748";

#define SIZE 20
#define max(a, b)  ((a) > (b) ? (a) : (b))

uint64_t
check_largest(int values[4], uint64_t largest) {
    uint64_t product = values[0];
    uint64_t result = 0;

    for(int x = 1; x < 4; x++) {
        product *= values[x];
    }
    result = max(product, largest);
    return result;
}

uint64_t
check_location(int x, int y, int board[20][20], uint64_t largest) {
    int values[4];

    values[0] = board[x][y];

    largest = check_largest(values, largest);

    // check right
    if(x <= 16) {
        values[1] = board[x+1][y];
        values[2] = board[x+2][y];
        values[3] = board[x+3][y];
    }

    largest = check_largest(values, largest);

    // check down
    if(y <= 16) {
        values[1] = board[x][y+1];
        values[2] = board[x][y+2];
        values[3] = board[x][y+3];
    }

    largest = check_largest(values, largest);

    // check right diagonal
    if(((x + 3) < 20) && ((y + 3) < 20)) {
        values[1] = board[x+1][y+1];
        values[2] = board[x+2][y+2];
        values[3] = board[x+3][y+3];
    }

    largest = check_largest(values, largest);

    // check left diagonal
    if(((x - 3) > 0) && ((y + 3) < 20)) {
        values[1] = board[x-1][y+1];
        values[2] = board[x-2][y+2];
        values[3] = board[x-3][y+3];
    }

    largest = check_largest(values, largest);

    return largest;
}

int
main(int argc, char **argv) {
    int board[SIZE][SIZE];
    int x = 0, y = 0, loc = -1;
    uint64_t largest = 0, result;
    char buf[3];

    for(x = 0; x < SIZE; x++) {
        for(y = 0; y < SIZE; y++) {
            buf[0] = num[++loc];
            buf[1] = num[++loc];
            buf[2] = '\0';
            int q = atoi(buf);
            board[x][y] = q;
        }
    }

    for(x = 0; x < SIZE; x++) {
        for(y = 0; y < SIZE; y++) {
            largest = check_location(x, y, board, largest);
        }
    }
    printf("%llu\n", largest);
    return(0);
}
