//
// Created by mingy on 2016-03-28.
//

#include<iostream>
#include<stdlib.h>
#include "include/Date.h"
#include "include/Crew.h"

using namespace std;

int main() {
    Date date1;
    date1.setDate();
    date1.printDate();
    date1.plus1Day();
    date1.plus1Day();

    Crew crew1;
    crew1.addStudent("Robert Shi", "22920142203903");
    crew1.addStudent("Nevermore", "22920142203904", 4, 3.5);
    crew1.allStudent();
    crew1.editGrade();
    return 0;
}
