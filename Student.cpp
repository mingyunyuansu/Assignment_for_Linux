#include"include/Student.h"

void Student :: newStudent(string iName, string iID, double iCredit, double iScore){
        name = iName;
        ID = iID;
        if (iCredit != 0 && iScore != 0) {
            credit.push_back(iCredit);
            score.push_back(iScore);
        }
        double total_credit = 0;
        double total_score_credit = 0;
        for (int i = 0; i < credit.size(); ++i)
            total_credit += credit[i];
        for (int i = 0; i < score.size(); ++i)
            total_score_credit += score[i] * credit[i];
        GPA = total_score_credit / total_credit;
    }
void Student :: show(){
        cout << "The student name: " << name << ", with ID: " << ID << "\nCredits: ";
        if (score.size() <= 0){
            cout << "0\n" << "Scores: 0\n" << "GPA: 0\n";
            return;
        }
        for (int i = 0; i < credit.size(); ++i)
            cout << credit[i] << "\t";
        cout << "\nScores: ";
        for (int i = 0; i < score.size(); ++i)
            cout << score[i] << "\t";
        cout << "\nGPA: " << GPA << endl;
    }
