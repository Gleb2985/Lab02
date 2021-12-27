#include <algorithm>
#include "ROUTEKeeper.h"

ROUTEKeeper::ROUTEKeeper() {
    std::cout << "ROUTEKeeper\n";
    this->routeKeeper = new ROUTE[8];
    this->arraySize = 8;
    this->tempKeep = 0;
}

ROUTEKeeper::~ROUTEKeeper() {
    std::cout << "~ROUTEKeeper\n";
    delete[] this->routeKeeper;
}

int comparator(ROUTE a, ROUTE b) {
    return a.getStartPunct()[0] < b.getStartPunct()[0];
}

void ROUTEKeeper::addROUTE() {
    ROUTE route;
    std::cin.ignore(32767, '\n');
    std::cin >> route;
    addROUTE(route);
    std::sort(routeKeeper, routeKeeper + tempKeep, comparator);
}

void ROUTEKeeper::dataProcessing() {
    
        if (!tempKeep) {
            std::cout << "Haven't route\n";
            return;
        }
        std::cin.ignore(32676, '\n');
        std::cout << "Your Route numbers:\n";
        std::string routecrafts;
        for (int i = 0; i < tempKeep; i++) {
            std::cout << "\t" << routeKeeper[i].getROUTENumber() << "\n";
        }
        int number = 1;
        std::cout << "Enter an Route number:\n";
        int routecraft;
        std::cin >> routecraft;

        for (int i = 0; i < tempKeep; i++) {
            if (routeKeeper[i].getROUTENumber() == routecraft) {
                std::cout << "This Route number \"" << routeKeeper[i].getROUTENumber() << "\" :\n";
                std::cout << "\t" << number << ": Start Punct " << routeKeeper[i].getStartPunct()
                    << ", End Punct " << routeKeeper[i].getEndPunct() << "\n";
                number++;
            }
        }
        if (number == 1) {
            std::cout << "The Route numbers \"" << routecraft << "\" does not serve any route\n";
        }
}

void ROUTEKeeper::addROUTE(ROUTE route) {
    if (this->tempKeep == this->arraySize - 1) {
        this->routeKeeper[this->tempKeep] = route;
        ROUTE* newArray = new ROUTE[this->arraySize + 8];
        for (int i = 0; i < this->arraySize; i++)
            newArray[i] = this->routeKeeper[i];
        delete[] this->routeKeeper;
        this->routeKeeper = newArray;
        this->arraySize += 8;
        this->tempKeep++;
    }
    else {
        this->routeKeeper[this->tempKeep] = route;
        this->tempKeep++;
    }
}
