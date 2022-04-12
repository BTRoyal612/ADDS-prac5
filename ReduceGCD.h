#ifndef REDUCEGCD
#define REDUCEGCD

#include <vector>

#include "ReduceGeneric.h"

class ReduceGCD : public ReduceGeneric {
    private:
        virtual int binaryOperator(int x, int y);
};

#endif