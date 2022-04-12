#include "FilterGeneric.h"
#include <vector>

std::vector<int> FilterGeneric::helper(std::vector<int> list, std::vector<int> result, int index) {
    if (index == list.size()) return result;

    if (g(list.at(index))) result.push_back(list.at(index));

    return helper(list, result, ++index);
}

std::vector<int> FilterGeneric::filter(std::vector<int> list) {
    std::vector<int> result;
    return helper(list, result, 0);
}
