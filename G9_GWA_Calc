#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double ProcessGrade(string subject_with_credit_unit, double grade, double sum_of_grades) {
    cout << subject_with_credit_unit;
    cin >> grade;
    bool valid_grade = (fmod(grade, 0.25) == 0 && grade >= 1.0 && grade <= 3.0)
    || (fmod(grade, 1.0) == 0 && grade > 3.0 && grade <= 5.0);
    while (!valid_grade) {
        cout << "\033[31mInvalid Input\033[0m\n\n";
        cout << subject_with_credit_unit;
        cin >> grade;
        valid_grade = (fmod(grade, 0.25) == 0 && grade >= 1.0 && grade <= 3.0)
        || (fmod(grade, 1.0) == 0 && grade > 3.0 && grade <= 5.0);
    }
    if (subject_with_credit_unit == "Values Education (0.7 units): ")
        sum_of_grades += grade * 0.7;
    else
        sum_of_grades += grade;
    return sum_of_grades;
}

int main() {
    double Biology = 0, Chemistry = 0, CS = 0, English = 0, Filipino = 0, Math = 0, PEHM = 0;
    double Physics = 0, SS = 0, Statistics = 0, VE = 0, SumOfGrades = 0, GWA = 0;
    string SubjectWithCreditUnit;
    cout << "Grade 9 GWA Calculator\n\n";
    SumOfGrades = ProcessGrade("Biology (1 unit): ", Biology, SumOfGrades);
    SumOfGrades = ProcessGrade("Chemistry (1 unit): ", Chemistry, SumOfGrades);
    SumOfGrades = ProcessGrade("Computer Science (1 unit): ", CS, SumOfGrades);
    SumOfGrades = ProcessGrade("English (1 unit): ", English, SumOfGrades);
    SumOfGrades = ProcessGrade("Filipino (1 unit): ", Filipino, SumOfGrades);
    SumOfGrades = ProcessGrade("Math (1 unit): ", Math, SumOfGrades);
    SumOfGrades = ProcessGrade("PEHM (1 unit): ", PEHM, SumOfGrades);
    SumOfGrades = ProcessGrade("Physics (1 unit): ", Physics, SumOfGrades);
    SumOfGrades = ProcessGrade("Social Science (1 unit): ", SS, SumOfGrades);
    SumOfGrades = ProcessGrade("Statistics (1 unit): ", Statistics, SumOfGrades);
    SumOfGrades = ProcessGrade("Values Education (0.7 units): ", VE, SumOfGrades);
    GWA = SumOfGrades / 10.7;
    cout << "\nYour GWA is: " << fixed << setprecision(4) << GWA;
}
