// Task 8: Array Sorting

// Write a program that sorts an array of
//  integers in ascending or descending
//  order. Prompt the user to input the array
//  elements and choose the sorting order.
//  Display the sorted array.

#include <iostream>
#include <vector>
// Include the algorithm library for sort method
#include <algorithm>

using namespace std;

int main(){ 

    vector<int> sortArray;
    string done = "All done";
    int elementsNumber, i = 1;
    int element;
    int order;

    cout << "Array Sorting:" << '\n';
    cout << "Enter number of elements you want to add: ";
    cin >> elementsNumber;
    do
    {
        cout << "Enter element " << i << ":";
        cin >> element;
        sortArray.push_back(element);
        i++;
    } while (i <= elementsNumber);

    cout << "Sort Array in ascending:(1) or descending:(0), Enter 1 or 0: ";
    cin >> order;
    if(order == 0) {
        sort(sortArray.rbegin(), sortArray.rend());
        cout << "Descending Order: " << '\n'; 
        for(int num : sortArray){
            cout << num << '\n';
        }
    } else if (order == 1)
    {
        sort(sortArray.begin(), sortArray.end());
        cout << "Ascending Order: " << '\n'; 
        for(int num : sortArray){
            cout << num << '\n';
        }
    } else {
        cout << "Incorrect Input" << '\n';
    }

    cin >> done;
    

    return 0;
}