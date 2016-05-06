//
// Created by mingy on 2016-03-29.
//
#include <iostream>
#include <stdlib.h>

using namespace std;

#ifndef FOR_CLION_DATE_H
#define FOR_CLION_DATE_H

class Date {
private:
    int year, month, day;

public:
    void setDate();
    void printDate();
    bool isLeapYear();
    void plus1Day();
};

#endif //FOR_CLION_DATE_H
