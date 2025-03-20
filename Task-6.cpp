//Task 6: Palindrome Checker

// Write a program that checks whether a
//  given word or phrase is a palindrome. A
//  palindrome is a word or phrase that reads
//  the same forwards and backwards.
//  Prompt the user to input a word or
//  phrase and display whether it is a
//  palindrome or not.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    string text, reverseText;
    string done = "Done, thank you;)";

    cout << "Enter word for Palindrome Checker: ";
    getline(cin, text);
    reverseText = text;
    reverse(reverseText.begin(), reverseText.end());
    if(text == reverseText){
        cout << "Word is a Palindrome!" << '\n';
        cin >> done;
    } else {
        cout << "Not a Palindrome!" << '\n';
        cin >> done;
    }

    return 0;
}