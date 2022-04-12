#include <iostream>
#include <vector>
#include <string>
#include <sstream>

#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"

#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"

#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"

using namespace std;

int main() {
    MapGeneric * m1 = new MapTriple();
    MapGeneric * m2 = new MapSquare();
    MapGeneric * m3 = new MapAbsoluteValue();

    FilterGeneric * f1 = new FilterOdd();
    FilterGeneric * f2 = new FilterNonPositive();
    FilterGeneric * f3 = new FilterForTwoDigitPositive();
    
    ReduceGeneric * r1 = new ReduceMinimum();
    ReduceGeneric * r2 = new ReduceGCD();

    vector<int> num;

    string str;
    getline(cin, str);

    stringstream ss(str);
    for (int i; ss >> i;) {
        num.push_back(i);
        if (ss.peek() == ',') ss.ignore();
    }

    vector<int> rmap = m1->map(m3->map(num));

    vector<int> rfilter = f1->filter(f3->filter(rmap));

    cout << r1->reduce(rfilter) << " " << r2->reduce(rfilter) << endl;
}