#pragma once
//#ifndef LAB2_1_ROUTEKEEPER_H
//#define LAB2_1_ROUTEKEEPER_H
#include "ROUTE.h"
class ROUTEKeeper{
public:
    ROUTEKeeper();
    ~ROUTEKeeper();
    void addROUTE(ROUTE route);
    void addROUTE();
    void dataProcessing();

private:
    ROUTE* routeKeeper;
    int tempKeep;
    int arraySize;
};
//#endif //LAB2_1_ROUTEKEEPER_H