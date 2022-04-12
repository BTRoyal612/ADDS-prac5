#ifndef FILTERFORTWODIGITPOSITVE
#define FILTERFORTWODIGITPOSITVE

#include <vector>

#include "FilterGeneric.h"

class FilterForTwoDigitPositive : public FilterGeneric {
    private:
        virtual bool g(int x);
};

#endif