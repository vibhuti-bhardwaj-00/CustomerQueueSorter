 void printTimetable(ifstream& inputFile) 
{
    string line;
    bool timetableStarted = false;
    while (getline(inputFile, line)) 
    {
        if (timetableStarted && line == "###") 
        {
            break; // Stop printing if the end of timetable marker is found
        }
        if (timetableStarted) 
        {
            cout << line << endl;
        }
        if (!timetableStarted && line.find("Timetable:") != string::npos) 
        {
            timetableStarted = true;
        }
    }
}
public :
void showtimetablefaculty(const string& filenamef, const string& searchIdf) 
{
    ifstream inputFile(filenamef);
    if (!inputFile.is_open()) 
    {
        cout << "Error: Unable to open the file." << endl;
        return;
    }

    string line;
    bool found = false;
    while (getline(inputFile, line)) 
    {
        istringstream iss(line);
        string Faculty_Name, Faculty_ID, Department;
        iss >> Faculty_Name >> Faculty_ID >> Department;

        if (Faculty_ID == searchIdf) 
        {
            found = true;
            cout << "Faculty Member found:" << endl;
            cout << "Name: " << Faculty_Name << endl;
            cout << "ID: " << Faculty_ID << endl;
            cout << "Department: " << Department << endl;

            // Reset the file stream's position to the beginning of the file
            inputFile.clear(); // Clear any error flags
            inputFile.seekg(0, ios::beg); // Move to the beginning of the file

            // Print timetable here
            cout << "Timetable:" << endl;
            printTimetable(inputFile);
            
            break;
        }
    }

    inputFile.close();

    if (!found) 
    {
        cout << "Faculty with ID " << searchIdf << " not found." << endl;
    }
}
