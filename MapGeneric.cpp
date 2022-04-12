#include "MapGeneric.h"
#include <vector>

std::vector<int> MapGeneric::helper(std::vector<int> list, std::vector<int> result, int index) {
    if (index == list.size()) return result;

    result.push_back(f(list.at(index)));

    return helper(list, result, ++index);
}

std::vector<int> MapGeneric::map(std::vector<int> list) {
    std::vector<int> result;
    return helper(list, result, 0);
}
