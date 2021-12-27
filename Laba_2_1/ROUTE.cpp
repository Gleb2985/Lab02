#include "ROUTE.h"

ROUTE::ROUTE() {
    this->routeNumber = 0;
    std::cout << "ROUTE\n";
}

ROUTE::ROUTE(std::string _startpunct, std::string _endpunct, int _routeNumber) : startpunct(_startpunct),
endpunct(_endpunct), routeNumber(_routeNumber) {
    std::cout << "ROUTE with parameters\n";
}

ROUTE::ROUTE(const ROUTE& route) : startpunct(route.startpunct), endpunct(route.endpunct), routeNumber(route.routeNumber) {
    std::cout << "ROUTE copy constructor\n";
}

ROUTE::~ROUTE() {
    std::cout << "~ROUTE\n";
}

std::string ROUTE::getStartPunct() {
    return this->startpunct;
}

void ROUTE::setStartPunct(std::string value) {
    this->startpunct = value;
}

std::string ROUTE::getEndPunct() {
    return this->endpunct;
}

void ROUTE::setEndPunct(std::string value) {
    this->endpunct = value;
}

int ROUTE::getROUTENumber() {
    return this->routeNumber;
}

void ROUTE::setROUTENumber(int value) {
    this->routeNumber = value;
}

std::ostream& operator<<(std::ostream& ostream, const ROUTE& route) {
    ostream << "Start Punct: " << route.startpunct << "\nEnd Punct: " << route.endpunct
        << "\nRoute number: " << route.routeNumber << "\n";

    return ostream;
}

std::istream& operator>>(std::istream& istream, ROUTE& route) {
    std::string input;
    std::getline(istream, input);

    int wordCount = 0;
    std::string tempValue;

    for (char i : input) {
        if (i == ' ') {
            continue;
        }
        if (i == ',') {
            if (wordCount == 0) {
                route.startpunct = tempValue;
                wordCount++;
                tempValue.clear();
            }
            else if (wordCount == 1) {
                route.endpunct = tempValue;
                wordCount++;
                tempValue.clear();
            }
        }
        else {
            tempValue.push_back(i);
        }
    }
    if (wordCount == 2)
        route.routeNumber = std::stoi(tempValue);
    else
        throw std::invalid_argument("Error\n");

    return istream;
}