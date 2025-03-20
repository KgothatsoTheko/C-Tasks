//Task 1: String Reversal

//  Write a program that takes a string
//  as input and reverses it. Display
//  the reversed string on the
//  console. 

//std::reverse() method
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main (){

    //Variables
    string text;
    string done = "completed, thank you;)";

    //Input
    cout << "Enter word to be reversed: " << text;
    getline(cin, text);
    //reverse method
    reverse(text.begin(), text.end());

    //Output
    cout << "Reversed Word: " << text << '\n';
    cout << "Program " << done;
    cin >> done;


    return 0;
}
