#include <iostream>
#include <vector>

#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"

using namespace std;

int main() {
    MapGeneric * test = new MapTriple();
    vector<int> num {1, -2, 3, 4, -5};
    
    vector<int> ans = test->map(num);

    for (const int& i : ans) {
        cout << i << " ";
    }
    cout << endl;
}