#pragma once
//#ifndef LAB2_1_ROUTE_H
//#define LAB2_1_ROUTE_H
#include <iostream>
#include <string>
class ROUTE
{
public:
    ROUTE();
    ROUTE(std::string _startpunct, std::string _endpunct, int _routeNumber);
    ROUTE(const ROUTE& route);
    ~ROUTE();
    std::string getStartPunct();
    void setStartPunct(std::string value);
    std::string getEndPunct();
    void setEndPunct(std::string value);
    int getROUTENumber();
    void setROUTENumber(int value);
    friend std::ostream& operator<<(std::ostream& ostream, const ROUTE& route);
    friend std::istream& operator>>(std::istream& istream, ROUTE& route);
private:
    std::string startpunct;
    std::string endpunct;
    int routeNumber;
};
//#endif //LAB2_1_ROUTE_H