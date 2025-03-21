//Task 7: Student Grade Calculator 

// Create a program that calculates the
//  average grade of a student. Prompt the
//  user to enter the number of subjects,
//  and then input the grades for each
//  subject. Calculate the average grade and
//  display it to the user.

#include <iostream>
#include <vector>

using namespace std;

int main(){

    int subjects, i = 1;
    double grade, sum = 0.0;
    vector<double> mark;
    string done = "Done, thank you;)";

    cout << "Student Grade Calculator" << '\n';
    cout << "Enter number of subjects: " << '\n';
    cin >> subjects;
    do
    {
        cout << "Enter mark of subject " << i << '\n';
        cin >> grade;
        mark.push_back(grade);
        sum += grade;
        i++;
        /* code */
    } while (i <= subjects);

    cout << "\nMarks Entered:\n";

    for(int marking : mark) {
        cout << "marks: " << marking << '\n';
    }

    // Calculate average
    double average = sum / subjects;
    cout << "\nAverage Grade: " << average << '\n';

    string comp = "comp, thank you;)";
    cin >> comp;
    


    return 0;
}