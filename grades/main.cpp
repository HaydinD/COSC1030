//
// Haydin Davis
// 3/18
// Grades Programming Project
// COSC 1030
//
#include <iostream>

using namespace std;

void calculateAverage(double sum, int count, double& average) {
    average = sum / count;
}

int main() {
    int numGrades;
    double grade=0;
    double sum = 0;
    double average;

    cout << "Enter the number of grades: ";
    cin >> numGrades;

    cout << "Enter the grades:" << endl;
    for (int i = 0; i < numGrades; i++) {
        cout << "Grade " << i + 1 << ": ";
        cin >> grade;
        sum += grade;
    }
    calculateAverage(sum, numGrades, average);

    cout << "Average: " << average << endl;

    char letterGrade;
    if (average >= 90) {
        letterGrade = 'A';
    } else if (average >= 80) {
        letterGrade = 'B';
    } else if (average >= 70) {
        letterGrade = 'C';
    } else if (average >= 60) {
        letterGrade = 'D';
    } else {
        letterGrade = 'F';
    }

    cout << "Letter Grade: " << letterGrade << endl;

    return 0;
}
