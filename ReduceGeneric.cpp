#include "ReduceGeneric.h"
#include <vector>

int ReduceGeneric::helper(std::vector<int> list, int result, int index) {
    if (index == list.size()) return result;

    result = binaryOperator(result, list.at(index));

    return helper(list, result, ++index);
}

int ReduceGeneric::reduce(std::vector<int> list) {
    return helper(list, list.at(0), 1);
}
