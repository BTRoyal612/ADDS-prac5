#include <iostream>
#include <vector>

#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"

#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"

using namespace std;

int main() {
    FilterGeneric * test = new FilterForTwoDigitPositive();
    vector<int> num {1, -2, 32, 4, 55};
    
    vector<int> ans = test->filter(num);

    for (const int& i : ans) {
        cout << i << " ";
    }
    cout << endl;
}