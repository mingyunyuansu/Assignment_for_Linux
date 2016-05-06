#include "include/Crew.h"

void Crew :: allStudent(){
        for (int i = 0; i < students.size(); ++i) {
            students[i].show();
            cout << endl;
        }
    }

void Crew :: addStudent(string iName, string iID, double iCredit, double iGPA){
        Student aStudent;
        aStudent.newStudent(iName, iID, iCredit, iGPA);
        students.push_back(aStudent);
        ++number;
    }

int Crew :: search() {
        int flag, i;
        string Name, ID;
        cout << "Search by Name or ID? Name: 0, ID: 1" << endl;
        (cin >> flag).get();
        if (flag) {
            cout << "Enter ID: ";
            cin >> ID;
            for (i = 0; i < number; i++) {
                if (students[i].ID == ID) {
                    students[i].show();
                    return i;
                }
            }
            if (i == number) {
                cout << "No such student." << endl;
                return -1;
            }
        }
        else {
            cout << "Enter Name: ";
            getline(cin, Name);
            for (i = 0; i < number; i++) {
                if (students[i].name == Name) {
                    students[i].show();
                    return i;
                }
            }
            if (i == number) {
                cout << "No such student." << endl;
                return -1;
            }
        }
    }

void Crew :: editGrade(){
        cout << "Now you are editing the credit and GPA. ";
        int i = search();
        if (i < 0)
            return;
        else{
            double newCredit, newScore;
            cout << "Enter the new credit and score, eg. 4 3.5" << endl;
            cin >>newCredit >> newScore;
            students[i].credit.push_back(newCredit);
            students[i].score.push_back(newScore);
            double total_credit = 0;
            double total_score_credit = 0;
            for (int j = 0; j < students[i].credit.size(); ++j)
                total_credit += students[i].credit[j];
            for (int j = 0; j < students[i].score.size(); ++j)
                total_score_credit += students[i].score[j] * students[i].credit[j];
            students[i].GPA = total_score_credit / total_credit;
            cout << "The grade has been edited." <<endl;
            students[i].show();
        }
    }
