#ifndef MAPGENERIC
#define MAPGENERIC

#include <vector>

class MapGeneric {
    public:
        std::vector<int> map(std::vector<int> list);
    private:
        std::vector<int> helper(std::vector<int> list, std::vector<int> result, int index);
        virtual int f(int x)=0;
};

#endif