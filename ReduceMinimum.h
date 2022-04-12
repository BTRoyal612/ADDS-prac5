#ifndef REDUCEMINIMUM
#define REDUCEMINIMUM

#include <vector>

#include "ReduceGeneric.h"

class ReduceMinimum : public ReduceGeneric {
    private:
        virtual int binaryOperator(int x, int y);
};

#endif