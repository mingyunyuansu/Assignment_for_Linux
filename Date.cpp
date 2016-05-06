#include "include/Date.h"

void Date :: setDate() {
        cout << "Please enter the date, eg. 2008 2 29: " << endl;
        cin >> year >> month >> day;
        if (year < 1) {
            cout << "Invalid year." << endl;
            exit(0);
        }
        else if (month < 1 || month > 12) {
            cout << "Invalid month." << endl;
            exit(0);
        }
        else if (month == 2) {
            if (day > 28) {
                if (!isLeapYear()) {
                    cout << "Invalid day." << endl;
                    exit(0);
                }
                else if (day > 29) {
                    cout << "Invalid day." << endl;
                    exit(0);
                }
            }
        }
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            if (day > 31) {
                cout << "Invalid day." << endl;
                exit(0);
            }
        }
        else {
            if (day > 30) {
                cout << "Invalid day." << endl;
                exit(0);
            }
        }
    }

void Date :: printDate() {
        cout << "The date is: " << year << "/" << month << "/" << day << endl;
    }

bool Date :: isLeapYear() {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            return true;
        else
            return false;
    }

void Date :: plus1Day() {
        ++day;
        if (month == 2) {
            if (day > 28) {
                if (!isLeapYear()) {
                    month++;
                    day %= 28;
                }
                else if (day > 29) {
                    month++;
                    day %= 29;
                }
            }
        }
        else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            if (day > 31) {
                day %= 31;
                month++;
            }
        }
        else {
            if (day > 30) {
                day %= 30;
                month++;
            }
        }
        if (month > 12) {
            year++;
            month %= 12;
        }
        cout << "After plus 1 day, the date is: " << year << "/" << month << "/" << day << endl;
    }

