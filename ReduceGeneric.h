#ifndef REDUCEGENERIC
#define REDUCEGENERIC

#include <vector>

class ReduceGeneric {
    public:
        int reduce(std::vector<int> list);
    private:
        int helper(std::vector<int> list, int result, int index);
        virtual int binaryOperator(int x, int y)=0;
};

#endif