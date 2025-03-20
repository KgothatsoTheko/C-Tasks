// Task 5: File Copy

// Write a program that copies the
//  contents of one file to another. Prompt
//  the user to input the names of the
//  source and destination files. Read the
//  contents of the source file and write
//  them to the destination file.

//use the fstream for file handeling
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string fileName, finalName, myText;
    string done = "All done";

    // Ask for  file names
    cout << "Enter the filename that you want to copy from (Format: .txt): ";
    cin >> fileName;
    cout << "Enter the new filename to copy to (Format: .txt): ";
    cin >> finalName;

    // Open the source file for reading
    ifstream MyReadFile(fileName);
    if (!MyReadFile) {
        cout << "Error: Could not open source file!" << '\n';
        return 1; // Exit the program
    }

    // Open the destination file for writing
    ofstream MyWriteFile(finalName, ios::out);
    if (!MyWriteFile) {
        cout << "Error: Could not create destination file!" << endl;
        return 1; // Exit the program
    }

    // Copy content line by line
    while (getline(MyReadFile, myText)) {
        MyWriteFile << myText << '\n';
        // Create and open a text file
  ofstream newFile(finalName);

  // Write to the file
  newFile << myText;

    }

    // Close the files
    MyReadFile.close();
    MyWriteFile.close();

    cout << "All done! Check the root path for the new file." << '\n';
    cin >> done;
    return 0;
}
