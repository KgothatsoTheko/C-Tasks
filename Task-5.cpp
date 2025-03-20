// Task 5: File Copy

// Write a program that copies the
//  contents of one file to another. Prompt
//  the user to input the names of the
//  source and destination files. Read the
//  contents of the source file and write
//  them to the destination file.

//Run the Task-5.exe as administrator to create the new file

//use the fstream for file handeling
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string fileName, finalName, myText;

    cout << "Enter the filename that you want to copy from (Format: .txt): ";
    cin >> fileName;
    cout << "Enter the new filename to copy to (Format: .txt): ";
    cin >> finalName;

    //read file you want to copy
    ifstream MyReadFile(fileName);
    if (!MyReadFile) {
        cout << "Error: Could not open source file!" << endl;
        return 1;
    }

    // Open the destination file ONCE outside the loop
    ofstream newFile(finalName);
    if (!newFile) {
        cout << "Error: Could not create destination file!" << endl;
        return 1;
    }

    // Read and copy line by line
    while (getline(MyReadFile, myText)) {
        newFile << myText << '\n';  // Write each line properly
    }

    // Close files
    MyReadFile.close();
    newFile.close();

    cout << "All done! Check: " << finalName << endl;
    return 0;
}
