#include <cstdlib>  //system:calls the host environment's command processor
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

class btech1 {
  string id;
  string name;
  string hostel;

public:
  void showcalender() {
    // Provide the path to image file
    const char *imagePath =
        "/Users/vibhutibhardwaj/Desktop/HelpDesk/calender.jpg";

    // Use system call to open the image with the default viewer
    string command = "open ";
    command += imagePath;
    system(command.c_str());  //for system to work the obj string to be converted to character array
  }
  void showhostelallocation(const string &filename, const string &searchId) {
    ifstream inputFile(filename);
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
      return;
    }

    string name, id, hostel;
    bool found = false;
    while (inputFile >> name >> id >> hostel) {
      if (id == searchId) {
        found = true;
        cout << "Student found:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Hostel: " << hostel << endl;
        break;
      }
    }

    inputFile.close();

    if (!found) {
      cout << "Student with ID " << searchId << " not found." << endl;
    }
  }

  void showhandout() {
    int inp;
    cout << "Enter the subject : \n1.CFP\n2.Linear Algebra\n3.Modern Physics"<< endl;
    cin >> inp;
    ifstream inputFile1, inputFile2, inputFile3;
    string line1, line2, line3;
    switch (inp) {
    case 1: // Open the file for reading
      inputFile1.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/cfp.txt");
      // Check if the file was opened successfully
      if (!inputFile1.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile1, line1)) {
        cout << line1 << endl;
      }
      // Close the file
      inputFile1.close();
      break;

    case 2: // Open the file for reading
      inputFile2.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/linear.txt");
      // Check if the file was opened successfully
      if (!inputFile2.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile2, line2)) {
        cout << line2 << endl;
      }
      // Close the file
      inputFile2.close();
      break;

    case 3: // Open the file for reading
      inputFile3.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/modern.txt");
      // Check if the file was opened successfully
      if (!inputFile3.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile3, line3)) {
        cout << line3 << endl;
      }
      // Close the file
      inputFile3.close();
      break;
    }
  }

  void showlocation() {
    // Provide the path to your image file
    const char *imagePath =
        "/Users/vibhutibhardwaj/Desktop/HelpDesk/campusmap.jpeg";

    // Use system call to open the image with the default viewer
    string command = "open ";
    command += imagePath;
    system(command.c_str());
  }

  void showtimetable() {
    // Open the file for reading
    ifstream inputFile("/Users/vibhutibhardwaj/Desktop/HelpDesk/ttbtech1.txt");
    // Check if the file was opened successfully
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
    }
    // Read and output each line from the file
    string line;
    while (getline(inputFile, line)) {
      cout << line << endl;
    }
    // Close the file
    inputFile.close();
  }
};

class btech2 {
  int id;
  string name;

public:
  void showcalender() {
    // Provide the path to your image file
    const char *imagePath =
        "/Users/vibhutibhardwaj/Desktop/HelpDesk/calender.jpg";

    // Use system call to open the image with the default viewer
    string command = "open ";
    command += imagePath;
    system(command.c_str());
  }
  void showhostelallocation2(const string &filename, const string &searchId) {
    ifstream inputFile(filename);
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
      return;
    }

    string name, id, hostel;
    bool found = false;
    while (inputFile >> name >> id >> hostel) {
      if (id == searchId) {
        found = true;
        cout << "Student found:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Hostel: " << hostel << endl;
        break;
      }
    }

    inputFile.close();

    if (!found) {
      cout << "Student with ID " << searchId << " not found." << endl;
    }
  }

  void showhandoutcs() {
    int inp;
    cout << "Enter the subject : \n1.DAA\n2.OOP\n3.System Programming\n"
         << endl;
    cin >> inp;
    ifstream inputFile1, inputFile2, inputFile3;
    string line1, line2, line3;
    switch (inp) {
    case 1: // Open the file for reading
      inputFile1.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/daa.txt");
      // Check if the file was opened successfully
      if (!inputFile1.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile1, line1)) {
        cout << line1 << endl;
      }
      // Close the file
      inputFile1.close();
      break;

    case 2: // Open the file for reading
      inputFile2.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/oop.txt");
      // Check if the file was opened successfully
      if (!inputFile2.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile2, line2)) {
        cout << line2 << endl;
      }
      // Close the file
      inputFile2.close();
      break;

    case 3: // Open the file for reading
      inputFile3.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/syspro.txt");
      // Check if the file was opened successfully
      if (!inputFile3.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile3, line3)) {
        cout << line3 << endl;
      }
      // Close the file
      inputFile3.close();
      break;
    }
  }

  void showhandoutit() {
    int inp;
    cout << "Enter the subject : \n1.DAA\n2.OOP\n3.System Programming\n"
         << endl;
    cin >> inp;
    ifstream inputFile1, inputFile2, inputFile3;
    string line1, line2, line3;
    switch (inp) {
    case 1: // Open the file for reading
      inputFile1.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/daa.txt");
      // Check if the file was opened successfully
      if (!inputFile1.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile1, line1)) {
        cout << line1 << endl;
      }
      // Close the file
      inputFile1.close();
      break;

    case 2: // Open the file for reading
      inputFile2.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/oop.txt");
      // Check if the file was opened successfully
      if (!inputFile2.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile2, line2)) {
        cout << line2 << endl;
      }
      // Close the file
      inputFile2.close();
      break;

    case 3: // Open the file for reading
      inputFile3.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/syspro.txt");
      // Check if the file was opened successfully
      if (!inputFile3.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile3, line3)) {
        cout << line3 << endl;
      }
      // Close the file
      inputFile3.close();
      break;
    }
  }

  void showhandoutec() {
    int inp;
    cout << "Enter the subject : \n1.Digital Electronics\n2.SSN\n3.OOP\n"
         << endl;
    cin >> inp;
    ifstream inputFile1, inputFile2, inputFile3;
    string line1, line2, line3;
    switch (inp) {
    case 1: // Open the file for reading
      inputFile1.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/dig.txt");
      // Check if the file was opened successfully
      if (!inputFile1.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile1, line1)) {
        cout << line1 << endl;
      }
      // Close the file
      inputFile1.close();
      break;

    case 2: // Open the file for reading
      inputFile2.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/ssn.txt");
      // Check if the file was opened successfully
      if (!inputFile2.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile2, line2)) {
        cout << line2 << endl;
      }
      // Close the file
      inputFile2.close();
      break;

    case 3: // Open the file for reading
      inputFile3.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/oop.txt");
      // Check if the file was opened successfully
      if (!inputFile3.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile3, line3)) {
        cout << line3 << endl;
      }
      // Close the file
      inputFile3.close();
      break;
    }
  }

  void showlocation() {
    // Provide the path to your image file
    const char *imagePath =
        "/Users/vibhutibhardwaj/Desktop/HelpDesk/campusmap.jpeg";

    // Use system call to open the image with the default viewer
    string command = "open ";
    command += imagePath;
    system(command.c_str());
  }

  void showtimetable() {
    int inp;
    cout << "Enter the branch : \n1.CS\n2.IT\n3.EC\n" << endl;
    cin >> inp;
    ifstream inputFile1, inputFile2, inputFile3;
    string line1, line2, line3;
    switch (inp) {
    case 1: // Open the file for reading
      inputFile1.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/ttbtech2cs.txt");
      // Check if the file was opened successfully
      if (!inputFile1.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile1, line1)) {
        cout << line1 << endl;
      }
      // Close the file
      inputFile1.close();
      break;

    case 2: // Open the file for reading
      inputFile2.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/ttbtech2it.txt");
      // Check if the file was opened successfully
      if (!inputFile2.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile2, line2)) {
        cout << line2 << endl;
      }
      // Close the file
      inputFile2.close();
      break;

    case 3: // Open the file for reading
      inputFile3.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/ttbtech2ec.txt");
      // Check if the file was opened successfully
      if (!inputFile3.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile3, line3)) {
        cout << line3 << endl;
      }
      // Close the file
      inputFile3.close();
      break;
    }
  }
};

class btech3 {
  int id;
  string name;

public:
  void showcalender() {
    // Provide the path to your image file
    const char *imagePath =
        "/Users/vibhutibhardwaj/Desktop/HelpDesk/calender.jpg";

    // Use system call to open the image with the default viewer
    string command = "open ";
    command += imagePath;
    system(command.c_str());
  }
  void showhostelallocation3(const string &filename, const string &searchId) {
    ifstream inputFile(filename);
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
      return;
    }

    string name, id, hostel;
    bool found = false;
    while (inputFile >> name >> id >> hostel) {
      if (id == searchId) {
        found = true;
        cout << "Student found:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Hostel: " << hostel << endl;
        break;
      }
    }

    inputFile.close();

    if (!found) {
      cout << "Student with ID " << searchId << " not found." << endl;
    }
  }
  void showhandoutcs() {
    int inp;
    cout << "Enter the subject : \n1.AI-ML\n2.Theory of "
            "Computation\n3.Statistical Methods\n"
         << endl;
    cin >> inp;
    ifstream inputFile1, inputFile2, inputFile3;
    string line1, line2, line3;
    switch (inp) {
    case 1: // Open the file for reading
      inputFile1.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/aiml.txt");
      // Check if the file was opened successfully
      if (!inputFile1.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile1, line1)) {
        cout << line1 << endl;
      }
      // Close the file
      inputFile1.close();
      break;

    case 2: // Open the file for reading
      inputFile2.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/toc.txt");
      // Check if the file was opened successfully
      if (!inputFile2.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile2, line2)) {
        cout << line2 << endl;
      }
      // Close the file
      inputFile2.close();
      break;

    case 3: // Open the file for reading
      inputFile3.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/sm.txt");
      // Check if the file was opened successfully
      if (!inputFile3.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile3, line3)) {
        cout << line3 << endl;
      }
      // Close the file
      inputFile3.close();
      break;
    }
  }

  void showhandoutit() {
    int inp;
    cout << "Enter the subject : \n1.AI-ML\n2.Theory of "
            "Computation\n3.Statistical Methods\n"
         << endl;
    cin >> inp;
    ifstream inputFile1, inputFile2, inputFile3;
    string line1, line2, line3;
    switch (inp) {
    case 1: // Open the file for reading
      inputFile1.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/aiml.txt");
      // Check if the file was opened successfully
      if (!inputFile1.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile1, line1)) {
        cout << line1 << endl;
      }
      // Close the file
      inputFile1.close();
      break;

    case 2: // Open the file for reading
      inputFile2.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/toc.txt");
      // Check if the file was opened successfully
      if (!inputFile2.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile2, line2)) {
        cout << line2 << endl;
      }
      // Close the file
      inputFile2.close();
      break;

    case 3: // Open the file for reading
      inputFile3.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/sm.txt");
      // Check if the file was opened successfully
      if (!inputFile3.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile3, line3)) {
        cout << line3 << endl;
      }
      // Close the file
      inputFile3.close();
      break;
    }
  }

  void showhandoutec() {
    int inp;
    cout << "Enter the subject : \n1.Communcation "
            "Systems\n2.Microelectronics\n3.Control Systems\n"
         << endl;
    cin >> inp;
    ifstream inputFile1, inputFile2, inputFile3;
    string line1, line2, line3;
    switch (inp) {
    case 1: // Open the file for reading
      inputFile1.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/commsys.txt");
      // Check if the file was opened successfully
      if (!inputFile1.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile1, line1)) {
        cout << line1 << endl;
      }
      // Close the file
      inputFile1.close();
      break;

    case 2: // Open the file for reading
      inputFile2.open(
          "/Users/vibhutibhardwaj/Desktop/HelpDesk/microelectronics.txt");
      // Check if the file was opened successfully
      if (!inputFile2.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile2, line2)) {
        cout << line2 << endl;
      }
      // Close the file
      inputFile2.close();
      break;

    case 3: // Open the file for reading
      inputFile3.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/contsys.txt");
      // Check if the file was opened successfully
      if (!inputFile3.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile3, line3)) {
        cout << line3 << endl;
      }
      // Close the file
      inputFile3.close();
      break;
    }
  }
  void showlocation() {
    // Provide the path to your image file
    const char *imagePath =
        "/Users/vibhutibhardwaj/Desktop/HelpDesk/campusmap.jpeg";

    // Use system call to open the image with the default viewer
    string command = "open ";
    command += imagePath;
    system(command.c_str());
  }

  void showtimetable() {
    int inp;
    cout << "Enter the branch : \n1.CS\n2.IT\n3.EC\n" << endl;
    cin >> inp;
    ifstream inputFile1, inputFile2, inputFile3;
    string line1, line2, line3;
    switch (inp) {
    case 1: // Open the file for reading
      inputFile1.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/ttbtech3cs.txt");
      // Check if the file was opened successfully
      if (!inputFile1.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile1, line1)) {
        cout << line1 << endl;
      }
      // Close the file
      inputFile1.close();
      break;

    case 2: // Open the file for reading
      inputFile2.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/ttbtech3it.txt");
      // Check if the file was opened successfully
      if (!inputFile2.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile2, line2)) {
        cout << line2 << endl;
      }
      // Close the file
      inputFile2.close();
      break;

    case 3: // Open the file for reading
      inputFile3.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/ttbtech3ec.txt");
      // Check if the file was opened successfully
      if (!inputFile3.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile3, line3)) {
        cout << line3 << endl;
      }
      // Close the file
      inputFile3.close();
      break;
    }
  }
};

class btech4 {
  int id;
  string name;

public:
  void showcalender() {
    // Provide the path to your image file
    const char *imagePath =
        "/Users/vibhutibhardwaj/Desktop/HelpDesk/calender.jpg";

    // Use system call to open the image with the default viewer
    string command = "open ";
    command += imagePath;
    system(command.c_str());
  }
  void showhostelallocation4(const string &filename, const string &searchId) {
    ifstream inputFile(filename);
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
      return;
    }

    string name, id, hostel;
    bool found = false;
    while (inputFile >> name >> id >> hostel) {
      if (id == searchId) {
        found = true;
        cout << "Student found:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Hostel: " << hostel << endl;
        break;
      }
    }

    inputFile.close();

    if (!found) {
      cout << "Student with ID " << searchId << " not found." << endl;
    }
  }
  void showhandoutcs() {
    int inp;
    cout << "Enter the subject : \n1.Soft Computing\n2.Computer "
            "Vision\n3.Compiler design\n"
         << endl;
    cin >> inp;
    ifstream inputFile1, inputFile2, inputFile3;
    string line1, line2, line3;
    switch (inp) {
    case 1: // Open the file for reading
      inputFile1.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/sc.txt");
      // Check if the file was opened successfully
      if (!inputFile1.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile1, line1)) {
        cout << line1 << endl;
      }
      // Close the file
      inputFile1.close();
      break;

    case 2: // Open the file for reading
      inputFile2.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/cv.txt");
      // Check if the file was opened successfully
      if (!inputFile2.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile2, line2)) {
        cout << line2 << endl;
      }
      // Close the file
      inputFile2.close();
      break;

    case 3: // Open the file for reading
      inputFile3.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/cd.txt");
      // Check if the file was opened successfully
      if (!inputFile3.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile3, line3)) {
        cout << line3 << endl;
      }
      // Close the file
      inputFile3.close();
      break;
    }
  }

  void showhandoutit() {
    int inp;
    cout << "Enter the subject : \n1.Soft Computing\n2.Computer "
            "Vision\n3.Compiler design\n"
         << endl;
    cin >> inp;
    ifstream inputFile1, inputFile2, inputFile3;
    string line1, line2, line3;
    switch (inp) {
    case 1: // Open the file for reading
      inputFile1.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/sc.txt");
      // Check if the file was opened successfully
      if (!inputFile1.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile1, line1)) {
        cout << line1 << endl;
      }
      // Close the file
      inputFile1.close();
      break;

    case 2: // Open the file for reading
      inputFile2.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/cv.txt");
      // Check if the file was opened successfully
      if (!inputFile2.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile2, line2)) {
        cout << line2 << endl;
      }
      // Close the file
      inputFile2.close();
      break;

    case 3: // Open the file for reading
      inputFile3.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/cd.txt");
      // Check if the file was opened successfully
      if (!inputFile3.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile3, line3)) {
        cout << line3 << endl;
      }
      // Close the file
      inputFile3.close();
      break;
    }
  }

  void showhandoutec() {
    int inp;
    cout << "Enter the subject : \n1.Nanoelectronics\n2.Error control and "
            "coding\n3.Industrial Electronics\n"
         << endl;
    cin >> inp;
    ifstream inputFile1, inputFile2, inputFile3;
    string line1, line2, line3;
    switch (inp) {
    case 1: // Open the file for reading
      inputFile1.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/nano.txt");
      // Check if the file was opened successfully
      if (!inputFile1.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile1, line1)) {
        cout << line1 << endl;
      }
      // Close the file
      inputFile1.close();
      break;

    case 2: // Open the file for reading
      inputFile2.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/error.txt");
      // Check if the file was opened successfully
      if (!inputFile2.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile2, line2)) {
        cout << line2 << endl;
      }
      // Close the file
      inputFile2.close();
      break;

    case 3: // Open the file for reading
      inputFile3.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/indus.txt");
      // Check if the file was opened successfully
      if (!inputFile3.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile3, line3)) {
        cout << line3 << endl;
      }
      // Close the file
      inputFile3.close();
      break;
    }
  }
  void showlocation() {
    // Provide the path to your image file
    const char *imagePath =
        "/Users/vibhutibhardwaj/Desktop/HelpDesk/campusmap.jpeg";

    // Use system call to open the image with the default viewer
    string command = "open ";
    command += imagePath;
    system(command.c_str());
  }

  void showtimetable() {
    int inp;
    cout << "Enter the branch : \n1.CS\n2.IT\n3.EC\n" << endl;
    cin >> inp;
    ifstream inputFile1, inputFile2, inputFile3;
    string line1, line2, line3;
    switch (inp) {
    case 1: // Open the file for reading
      inputFile1.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/ttbtech4cs.txt");
      // Check if the file was opened successfully
      if (!inputFile1.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile1, line1)) {
        cout << line1 << endl;
      }
      // Close the file
      inputFile1.close();
      break;

    case 2: // Open the file for reading
      inputFile2.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/ttbtech4it.txt");
      // Check if the file was opened successfully
      if (!inputFile2.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile2, line2)) {
        cout << line2 << endl;
      }
      // Close the file
      inputFile2.close();
      break;

    case 3: // Open the file for reading
      inputFile3.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/ttbtech4ec.txt");
      // Check if the file was opened successfully
      if (!inputFile3.is_open()) {
        cout << "Error: Unable to open the file." << endl;
      }
      // Read and output each line from the file
      while (getline(inputFile3, line3)) {
        cout << line3 << endl;
      }
      // Close the file
      inputFile3.close();
      break;
    }
  }
};

class parent1year {
public:
  void showfeestruct() {
    // Open the file for reading
    ifstream inputFile("/Users/vibhutibhardwaj/Desktop/HelpDesk/fee1.txt");
    // Check if the file was opened successfully
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
    }
    // Read and output each line from the file
    string line;
    while (getline(inputFile, line)) {
      cout << line << endl;
    }
    // Close the file
    inputFile.close();
  }

  void showmodesofpay() {
    // Open the file for reading
    ifstream inputFile("/Users/vibhutibhardwaj/Desktop/HelpDesk/mop.txt");
    // Check if the file was opened successfully
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
    }
    // Read and output each line from the file
    string line;
    while (getline(inputFile, line)) {
      cout << line << endl;
    }
    // Close the file
    inputFile.close();
  }
};

class parent2year {
public:
  void showfeestruct() {
    // Open the file for reading
    ifstream inputFile("/Users/vibhutibhardwaj/Desktop/HelpDesk/fee2.txt");
    // Check if the file was opened successfully
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
    }
    // Read and output each line from the file
    string line;
    while (getline(inputFile, line)) {
      cout << line << endl;
    }
    // Close the file
    inputFile.close();
  }

  void showmodesofpay() {
    // Open the file for reading
    ifstream inputFile("/Users/vibhutibhardwaj/Desktop/HelpDesk/mop.txt");
    // Check if the file was opened successfully
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
    }
    // Read and output each line from the file
    string line;
    while (getline(inputFile, line)) {
      cout << line << endl;
    }
    // Close the file
    inputFile.close();
  }
};

class parent3year {
public:
  void showfeestruct() {
    // Open the file for reading
    ifstream inputFile("/Users/vibhutibhardwaj/Desktop/HelpDesk/fee3.txt");
    // Check if the file was opened successfully
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
    }
    // Read and output each line from the file
    string line;
    while (getline(inputFile, line)) {
      cout << line << endl;
    }
    // Close the file
    inputFile.close();
  }

  void showmodesofpay() {
    // Open the file for reading
    ifstream inputFile("/Users/vibhutibhardwaj/Desktop/HelpDesk/mop.txt");
    // Check if the file was opened successfully
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
    }
    // Read and output each line from the file
    string line;
    while (getline(inputFile, line)) {
      cout << line << endl;
    }
    // Close the file
    inputFile.close();
  }
};

class parent4year {
public:
  void showfeestruct() {
    // Open the file for reading
    ifstream inputFile("/Users/vibhutibhardwaj/Desktop/HelpDesk/fee4.txt");
    // Check if the file was opened successfully
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
    }
    // Read and output each line from the file
    string line;
    while (getline(inputFile, line)) {
      cout << line << endl;
    }
    // Close the file
    inputFile.close();
  }

  void showmodesofpay() {
    // Open the file for reading
    ifstream inputFile("/Users/vibhutibhardwaj/Desktop/HelpDesk/mop.txt");
    // Check if the file was opened successfully
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
    }
    // Read and output each line from the file
    string line;
    while (getline(inputFile, line)) {
      cout << line << endl;
    }
    // Close the file
    inputFile.close();
  }
};

void campusmap() {
  // Provide the path to your image file
  const char *imagePath =
      "/Users/vibhutibhardwaj/Desktop/HelpDesk/campusmap.jpeg";

  // Use system call to open the image with the default viewer
  string command = "open ";
  command += imagePath;
  system(command.c_str());
}

class faculty {
  string name;
  string id;
  string dept;
  string tt;

public:
  void showtimetablefaculty(const string &filename, const string &searchId) {
    ifstream inputFile(filename);
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
      return;
    }

    string line;
    bool found = false;
    while (getline(inputFile, line)) {
      istringstream iss(line);          //converts each line/word so that it can be read as separate lines to extract id,dept,name since we stored them in the same line
      string Faculty_Name, Faculty_ID, Department;
      iss >> Faculty_Name >> Faculty_ID >> Department;

      if (Faculty_ID == searchId) {
        found = true;
        cout << "Faculty Member found:" << endl;
        cout << "Name: " << Faculty_Name << endl;
        cout << "ID: " << Faculty_ID << endl;
        cout << "Department: " << Department << endl;
        cout << "Timetable:" << endl;
        // cout<<line<<endl;
        for (int i = 0; i < 2; i++)
          getline(inputFile, line);
        // cout<<line<<endl;
        //  Reset the file stream to the beginning of the file
        while (line[0] != '#' && !inputFile.eof()) {
          cout << line << endl;
          getline(inputFile, line);
        }

        // inputFile.clear();
        // inputFile.seekg(0, ios::beg);

        if (line == "end") {
          inputFile.close();
          return;
        }

        break; // Exit the loop after printing the timetable for the found
               // faculty member
      }
    }

    inputFile.close();

    if (!found) {
      cout << "Faculty with ID " << searchId << " not found." << endl;
    }
  }

  void showcalender() {
    // Provide the path to your image file
    const char *imagePath =
        "/Users/vibhutibhardwaj/Desktop/HelpDesk/calender.jpg";

    // Use system call to open the image with the default viewer
    string command = "open ";
    command += imagePath;
    system(command.c_str());
  }
};

class information {

public:
  void showprospectus() {
    // Open the file for reading
    ifstream inputFile(
        "/Users/vibhutibhardwaj/Desktop/HelpDesk/prospectus.txt");
    // Check if the file was opened successfully
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
    }
    // Read and output each line from the file
    string line;
    while (getline(inputFile, line)) {
      cout << line << endl;
    }
    // Close the file
    inputFile.close();
  }

  void showupcomingevents() {
    // Open the file for reading
    ifstream inputFile("/Users/vibhutibhardwaj/Desktop/HelpDesk/events.txt");
    // Check if the file was opened successfully
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
    }
    // Read and output each line from the file
    string line;
    while (getline(inputFile, line)) {
      cout << line << endl;
    }
    // Close the file
    inputFile.close();
  }

  void showfivefold() {
    // Open the file for reading
    ifstream inputFile("/Users/vibhutibhardwaj/Desktop/HelpDesk/5fold.txt");
    // Check if the file was opened successfully
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
    }
    // Read and output each line from the file
    string line;
    while (getline(inputFile, line)) {
      cout << line << endl;
    }
    // Close the file
    inputFile.close();
  }

  void showscholarship() {
    // Open the file for reading
    ifstream inputFile(
        "/Users/vibhutibhardwaj/Desktop/HelpDesk/scholarship.txt");
    // Check if the file was opened successfully
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
    }
    // Read and output each line from the file
    string line;
    while (getline(inputFile, line)) {
      cout << line << endl;
    }
    // Close the file
    inputFile.close();
  }
  void showcontact() {
    // Open the file for reading
    ifstream inputFile("/Users/vibhutibhardwaj/Desktop/HelpDesk/contact.txt");
    // Check if the file was opened successfully
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
    }
    // Read and output each line from the file
    string line;
    while (getline(inputFile, line)) {
      cout << line << endl;
    }
    // Close the file
    inputFile.close();
  }
};

class admin {
  string id;
  string adminPassword;

public:
  bool verify(const string &filename, const string &searchId,
              const string &password) {
    ifstream inputFile(filename);
    if (!inputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
      return false;
    }

    string id, adminPassword;
    bool found = false;
    while (inputFile >> id >> adminPassword) {
      if (id == searchId && adminPassword == password) {
        inputFile.close();
        return true;
      }
    }

    inputFile.close();
    return false;
  }

  void addStudent(const string &filename, const string &name, const string &id,
                  const string &hostel) {
    ofstream outputFile(
        filename,
        ios::app |
            ios::ate); // Open file in append mode and position at the end
    if (!outputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
      return;
    }
    outputFile << name << " " << id << " " << hostel << endl;
    outputFile.close();
    cout << "Student added successfully." << endl;
  }

  void updateStudent(const string &filename, const string &searchId,
                     const string &newName, const string &newHostel) {
    ifstream inputFile(filename);
    ofstream tempFile("/Users/vibhutibhardwaj/Desktop/HelpDesk/temp.txt");
    if (!inputFile.is_open() || !tempFile.is_open()) {
      cout << "Error: Unable to open the file for reading/writing." << endl;
      return;
    }

    string name, id, hostel;
    bool found = false;
    while (inputFile >> name >> id >> hostel) {
      if (id == searchId) {
        found = true;
        tempFile << newName << " " << id << " " << newHostel << endl;
        cout << "Student record updated successfully." << endl;
      } else {
        tempFile << name << " " << id << " " << hostel << endl;
      }
    }

    inputFile.close();
    tempFile.close();

    remove(filename.c_str());                //.c_str helps to convert string object to a string/character array to implement remove/rename
    rename("/Users/vibhutibhardwaj/Desktop/HelpDesk/temp.txt",
           filename.c_str());

    if (!found) {
      cout << "Student with ID " << searchId << " not found." << endl;
    }
  }

  void addFaculty(const string &filename, const string &name, const string &id,
                  const string &dept, const string &tt) {
    ofstream outputFile(
        filename,
        ios::app |
            ios::ate); // Open file in append mode and position at the end
    if (!outputFile.is_open()) {
      cout << "Error: Unable to open the file." << endl;
      return;
    }
    outputFile << name << " " << id << " " << dept << endl;
    outputFile << "Timetable:" << endl;
    outputFile << tt << endl;
    outputFile << "#" << endl;
    outputFile.close();
    cout << "Faculty added successfully." << endl;
  }
};

int main() {
  btech1 b1;
  btech2 b2;
  btech3 b3;
  btech4 b4;
  parent1year p1;
  parent2year p2;
  parent3year p3;
  parent4year p4;
  faculty f1;
  information i1;
  ofstream outFile;
  admin a1;

  string searchId, filename, searchIdf, filenamef, complaint, password, newname,
      newhostel, newid, newdept, newtt, timetable;
  int input, input1, input2, input3, input4, input5, input6, input7, input8,
      input9, input10, input11, input12, input13, input14, input15, input16,
      input17, input18;
  vector<string> statements;
  string statement;

    cout << "\n\n\t\t\t\t\tWELCOME TO BANASTHALI VIDYAPITH" << endl;
    cout << "\t\t\t\t\tHow may I assist you today?" << endl;
  do {
    cout << "\nMenu\n1.Student\n2.Parent/Family\n3.Faculty\n4.More "
            "Information\n5.Complaints/Queries\n6.Admin\n7.Exit"
         << endl;
    cin >> input;
    switch (input) {
    case 1:
      do {
        cout << "\nChoose the course you're enrolled in:\n1.B.Tech. I "
                "year\n2.B.Tech. II Year\n3.B.Tech. III Year\n4.B.Tech. IV "
                "Year\n5.Back"
             << endl;
        cin >> input1;
        switch (input1) {
        case 1:
          do {
            cout << "\nChoose option you're interested to find out "
                    "about\n1Academic Calender\n2.Hostel Allocation\n3.Subject "
                    "Handout\n4.Location\n5.Time Table\n6.Back"
                 << endl;
            cin >> input2;
            switch (input2) {
            case 1: // show calender
              b1.showcalender();
              break;

            case 2: // Hostel Allocation
                    //  File path
              filename =
                  "/Users/vibhutibhardwaj/Desktop/HelpDesk/hostelbtech1.txt";
              // Student ID to search for
              cout << "\nEnter student ID to search: ";
              cin >> searchId;
              // Search for the student data in the file and display it
              b1.showhostelallocation(filename, searchId);
              break;

            case 3: // show handout
              b1.showhandout();
              break;

            case 4: // show location
              b1.showlocation();
              break;

            case 5: // show timetable;
              b1.showtimetable();
              break;
            }
          } while (input2 != 6);
          break;

        case 2:
          do {
            cout << "\nChoose option you're interested to find out "
                    "about\n1Academic Calender\n2.Hostel Allocation\n3.Subject "
                    "Handout\n4.Location\n5.Time Table\n6.Back"
                 << endl;
            cin >> input3;
            switch (input3) {
            case 1: // show calender
              b2.showcalender();
              break;

            case 2: // Hostel Allocation
                    //  File path
              filename =
                  "/Users/vibhutibhardwaj/Desktop/HelpDesk/hostelbtech1.txt";
              // Student ID to search for
              cout << "\nEnter student ID to search: ";
              cin >> searchId;
              // Search for the student data in the file and display it
              b2.showhostelallocation2(filename, searchId);
              break;

            case 3: // show handout
              do {
                cout << "\nChoose your branch \n1.CS \n2.IT \n3.EC\n4.Back"
                     << endl;
                cin >> input6;
                switch (input6) {
                case 1: // show handout cs
                  b2.showhandoutcs();
                  break;

                case 2: // show handout it
                  b2.showhandoutit();
                  break;

                case 3: // show handout ec
                  b2.showhandoutec();
                  break;
                }
              } while (input6 == 4);
              break;

            case 4: // show location
              b2.showlocation();
              break;

            case 5: // show timetable;
              b2.showtimetable();
              break;
            }
          } while (input3 != 6);
          break;

        case 3:
          do {
            cout << "\nChoose option you're interested to find out "
                    "about\n1Academic Calender\n2.Hostel Allocation\n3.Subject "
                    "Handout\n4.Location\n5.Time Table\n6.Back"
                 << endl;
            cin >> input4;
            switch (input4) {
            case 1: // show calender
              b3.showcalender();
              break;

            case 2:
              // Hostel Allocation
              //  File path
              filename =
                  "/Users/vibhutibhardwaj/Desktop/HelpDesk/hostelbtech1.txt";
              // Student ID to search for
              cout << "\nEnter student ID to search: ";
              cin >> searchId;
              // Search for the student data in the file and display it
              b3.showhostelallocation3(filename, searchId);
              break;

            case 3: // show handout
              do {
                cout << "\nChoose your branch \n1.CS \n2.IT \n3.EC\n4.Back"
                     << endl;
                cin >> input6;
                switch (input6) {
                case 1: // show handout cs
                  b3.showhandoutcs();
                  break;

                case 2: // show handout it
                  b3.showhandoutit();
                  break;

                case 3: // show handout ec
                  b3.showhandoutec();
                  break;
                }
              } while (input6 == 4);
              break;

            case 4: // show location
              b3.showlocation();
              break;

            case 5: // show timetable;
              b3.showtimetable();
              break;
            }
          } while (input4 != 6);
          break;

        case 4:
          do {
            cout << "\nChoose option you're interested to find out "
                    "about\n1Academic Calender\n2.Hostel Allocation\n3.Subject "
                    "Handout\n4.Location\n5.Time Table\n6.Back"
                 << endl;
            cin >> input5;
            switch (input5) {
            case 1: // show calender
              b4.showcalender();
              break;

            case 2:
              // Hostel Allocation
              //  File path
              filename =
                  "/Users/vibhutibhardwaj/Desktop/HelpDesk/hostelbtech1.txt";
              // Student ID to search for
              cout << "\nEnter student ID to search: ";
              cin >> searchId;
              // Search for the student data in the file and display it
              b4.showhostelallocation4(filename, searchId);
              break;

            case 3: // show handout
              do {
                cout << "\nChoose your branch \n1.CS \n2.IT \n3.EC\n4.Back"
                     << endl;
                cin >> input6;
                switch (input6) {
                case 1: // show handout cs
                  b4.showhandoutcs();
                  break;

                case 2: // show handout it
                  b4.showhandoutit();
                  break;

                case 3: // show handout ec
                  b4.showhandoutec();
                  break;
                }
              } while (input6 == 4);
              break;

            case 4: // show location
              b4.showlocation();
              break;

            case 5: // show timetable;
              b4.showtimetable();
              break;
            }
          } while (input5 != 6);
        }
      } while (input1 != 5);

      break;

    case 2:
      do {
        cout << "\nHow can I help you?\n1.Location\n2.Regarding fee\n3.Contact "
                "Office\n4.Back"
             << endl;
        cin >> (input7);
        switch (input7) {
        case 1:
          campusmap();
          break;

        case 2:
          do {
            cout << "\nChoose the year your ward is in:\n1.B.Tech. I "
                    "year\n2.B.Tech. II Year\n3.B.Tech. III Year\n4.B.Tech. IV "
                    "Year\n5.Back ";
            cin >> input8;
            switch (input8) {
            case 1:
              do {
                cout << "\nMenu\n1.Fee Structure \n2.Modes of Payment\n3.Back";
                cin >> input9;
                switch (input9) {
                case 1:
                  p1.showfeestruct();
                  break;
                case 2:
                  p1.showmodesofpay();
                  break;
                }
              } while (input9 != 3);
              break;

            case 2:
              do {
                cout << "\nMenu\n1.Fee Structure \n2.Modes of Payment\n3.Back";
                cin >> input10;
                switch (input10) {
                case 1:
                  p2.showfeestruct();
                  break;
                case 2:
                  p2.showmodesofpay();
                  break;
                }
              } while (input10 != 3);
              break;

            case 3:
              do {
                cout << "\nMenu\n1.Fee Structure \n2.Modes of Payment\n3.Back";
                cin >> input11;
                switch (input11) {
                case 1:
                  p3.showfeestruct();
                  break;
                case 2:
                  p3.showmodesofpay();
                  break;
                }
              } while (input11 != 3);
              break;

            case 4:
              do {
                cout << "\nMenu\n1.Fee Structure \n2.Modes of Payment\n3.Back";
                cin >> input12;
                switch (input12) {
                case 1:
                  p4.showfeestruct();
                  break;
                case 2:
                  p4.showmodesofpay();
                  break;
                }
              } while (input12 != 3);
              break;
            }
          } while (input8 != 5);
          break;

        case 3:
          i1.showcontact();
          break;
        }
      } while (input7 != 4);
      break;

    case 3:
      filenamef = "/Users/vibhutibhardwaj/Desktop/HelpDesk/ttfaculty.txt";
      // Student ID to search for
      cout << "\nEnter Faculty ID to search: ";
      cin >> searchIdf;
      do {
        cout << "\nMenu:\n1.Show timetable\n2.Show Academic "
                "Calender\n3.Location\n4.Back"
             << endl;
        cin >> input13;
        switch (input13) {
        case 1:
          // Student ID to search for

          f1.showtimetablefaculty(filenamef, searchIdf);
          break;
        case 2:
          f1.showcalender();
          break;

        case 3:
          campusmap();
          break;
        }
      } while (input13 != 4);
      break;

    case 4:
      do {
        cout << "\nMenu:\n1.Prospectus\n2.Upcoming Events\n3.Five-Fold "
                "Activities\n4.Scholarships\n5.Contact Office\n6.Back"
             << endl;
        cin >> input14;
        switch (input14) {
        case 1:
          i1.showprospectus();
          break;
          // ADD IN MF
        case 2:
          i1.showupcomingevents();
          break;
          // ADD IN MF
        case 3:
          i1.showfivefold();
          break;
          // ADD IN MF
        case 4:
          i1.showscholarship();
          break;
          // ADD IN MF
        case 5:
          i1.showcontact();
          break;
          // ADD IN MF
        }
      } while (input14 != 6);
      break;

    case 5: // Complaints
      // Open a file in write mode
      outFile.open("/Users/vibhutibhardwaj/Desktop/HelpDesk/complaint.txt");
      if (!outFile) {
        cout << "Error: Unable to open the file." << endl;
        return 1;
      }
      // string complaint;
      cout << "\nPlease enter your complaint (type end after reporting the "
              "complaint):\n";
      getline(cin, complaint);
      // Write the complaint to the file
      while (complaint != "end") {
        outFile << complaint << endl;
        // cout << "Please enter your complaint:\n";
        getline(cin, complaint);         //input from keyboard and storage in complaint string
      }
      // Close the file
      if (complaint == "end") {
        outFile.close();
        cout << "\nComplaints have been successfully recorded." << endl;
      }
      break;

    case 6: // admin
      filename = "/Users/vibhutibhardwaj/Desktop/HelpDesk/admin.txt";
      // Student ID to search for
      cout << "Enter admin ID : ";
      cin >> searchId;
      cout << "Enter admin password :  ";
      cin >> password;
      // Search for the student data in the file and display it
      if (a1.verify(filename, searchId, password)) {
        do {
          cout << "\nMenu\n1.Edit Student's records\n2.Edit Faculty "
                  "record\n3.Back"
               << endl;
          cin >> input15;
          switch (input15) {
          case 1:
            do {
              cout << "\nMenu\n1.Add new record\n2.Update record\n3.Back"
                   << endl;
              cin >> input16;
              switch (input16) {
              case 1:
                cout << "Enter Student's name:";
                cin >> newname;
                cout << "Enter New ID:";
                cin >> newid;
                cout << "Enter new hostel name:";
                cin >> newhostel;
                a1.addStudent(
                    "/Users/vibhutibhardwaj/Desktop/HelpDesk/hostelbtech1.txt",
                    newname, newid, newhostel);
                break;

              case 2:
                cout << "Enter  ID:";
                cin >> searchId;
                cout << "Enter Student's name:";
                cin >> newname;

                cout << "Enter new hostel name:";
                cin >> newhostel;
                a1.updateStudent(
                    "/Users/vibhutibhardwaj/Desktop/HelpDesk/hostelbtech1.txt",
                    searchId, newname, newhostel);
                break;
              }
            } while (input16 != 3);
            break;

          case 2:
            cout << "\nAdd a new Faculty record :" << endl;

            cout << "Enter  ID:";
            cin >> newid;
            cout << "Enter Faculty's name:";
            cin >> newname;
            cout << "Enter Department's name:";
            cin >> newdept;
            cout << "Enter timetable as of following format:" << endl;
            cout << "Timetable:" << endl;
            cout << "9:00-10:00 CS101 Monday" << endl;
            cout << "10:00-11:00 CS201 Tuesday" << endl;
            cout << "#" << endl;

            cout
                << "Enter timetable (enter '#' on a separate line to end):\n";
            cin.ignore(); // Ignore the newline character in the buffer

            while (true) {
              string line;
              getline(cin, line);
              if (line == "#") {
                break; // Exit the loop when encountering "###"
              }
              if (!timetable.empty()) {
                timetable += "\n"; // Add newline only if timetable is not empty
              }
              timetable += line;
            }

            a1.addFaculty(
                "/Users/vibhutibhardwaj/Desktop/HelpDesk/ttfaculty.txt",
                newname, newid, newdept, timetable);

            break;
          }
        } while (input15 != 3);

      } else {
        cout << "Invalid admin Id/Password" << endl;
      }

      break;

    case 7:
      exit(0);
    }
  } while (1);
  return 0;
}

