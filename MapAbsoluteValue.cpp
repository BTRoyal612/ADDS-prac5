#include "MapAbsoluteValue.h"

int MapAbsoluteValue::f(int x) {
    if (x < 0) return -1*x;
    return x;
}