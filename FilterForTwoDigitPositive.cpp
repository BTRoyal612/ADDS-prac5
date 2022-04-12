#include "FilterForTwoDigitPositive.h"

bool FilterForTwoDigitPositive::g(int x) {
    return (x > 9 && x < 100);
}