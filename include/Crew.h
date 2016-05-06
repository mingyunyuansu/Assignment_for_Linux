//
// Created by mingy on 2016-03-29.
//
#include <vector>
#include <iostream>
#include "Student.h"
using namespace std;

#ifndef FOR_CLION_CREW_H
#define FOR_CLION_CREW_H


class Crew {
private:
    int number = 0;
    vector <Student> students;
public:
    void allStudent();

    void addStudent(string iName, string iID, double iCredit = 0, double iGPA = 0);

     int search() ;

    void editGrade();
};


#endif //FOR_CLION_CREW_H
