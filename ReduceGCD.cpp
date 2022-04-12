#include "ReduceGCD.h"

int ReduceGCD::binaryOperator(int x, int y) {
    while (y != 0) {
        int remain = x % y;
        x = y;
        y = remain;
    }
    return x;
}