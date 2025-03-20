// Task 3: Fibonacci Series 

//  Implement a program that generates
//  the Fibonacci series up to a given
//  number of terms. Prompt the user to
//  enter the number of terms and display
//  the series

// use vector for dynamic array
#include <iostream>
#include <vector>

using namespace std;

//function to make Fibonacci series
vector<int> makeFibonacci(int lengthofTerms){
    vector<int> sequence;
    if(lengthofTerms <= 0) return sequence;
    
    sequence.push_back(0);
    if(lengthofTerms == 1) return sequence;

    sequence.push_back(1);
    for(int i = 2; i < lengthofTerms; i++){
        int next = sequence[i-1] + sequence[i-2];
        sequence.push_back(next);
    }
    
    return sequence;
}

int main(){
    int nextTerm = 7;
    vector<int> seq = makeFibonacci(nextTerm);

    cout << "Fibonacci: ";
    for(int term : seq){
        cout << term << " ";
    }
    cout << '\n';
    return 0;
}
