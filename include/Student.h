//
// Created by mingy on 2016-03-29.
//
#include <string>
#include <iostream>
#include <vector>
using namespace std;
#ifndef FOR_CLION_STUDENT_H
#define FOR_CLION_STUDENT_H


class Student {
public:
    string name, ID;
    vector<double> credit;
    vector<double> score;
    double GPA;

    void newStudent(string iName, string iID, double iCredit = 0, double iScore = 0);

    void show();
};


#endif //FOR_CLION_STUDENT_H
