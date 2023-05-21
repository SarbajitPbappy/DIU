#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
#include <fstream>

using namespace std;

const int MAX_PLATFORMS = 20;

class TrainStation {
public:
    unordered_map<string, string> platforms;
    TrainStation() {
        platforms = {
            {"7856A", "1"},
            {"7856B", "2"},
            {"7856C", "3"},
            {"7856D", "4"},
        };
    }

    void loadPredefinedPlatforms(const string& filename) {
        ifstream file(filename);
        if (file.is_open()) {
            string platformNumber;
            string trainNumber;
            while (file >> trainNumber >> platformNumber) {
                platforms[trainNumber] = platformNumber;
            }
            file.close();
        } else {
            cout << "Error: Unable to open predefined platforms file." << endl;
        }
    }

   void allocatePlatform(const string& trainNumber, const string& platformNumber) {
    if (platforms.find(trainNumber) != platforms.end()) {
        cout << "Error: Train " << trainNumber << " already allocated to a platform." << endl;
    } else if (platforms.count(platformNumber)) {
        cout << "Error: Platform " << platformNumber << " already occupied by Train " << platforms[platformNumber] << "." << endl;
    } else {
        platforms[trainNumber] = platformNumber;
        cout << "Platform " << platformNumber << " allocated for Train " << trainNumber << endl;
    }
}


    void deallocatePlatform(const string& trainNumber) {
        if (platforms.find(trainNumber) != platforms.end()) {
            string platformNumber = platforms[trainNumber];
            platforms.erase(trainNumber);
            cout << "Platform " << platformNumber << " deallocated for Train " << trainNumber << endl;
        } else {
            cout << "No platform allocated for Train " << trainNumber << endl;
        }
    }

    void displaySummary() {
        cout << "Platform Summary:" << endl;
        for (const auto& entry : platforms) {
            cout << "Train " << entry.first << " - Platform " << entry.second << endl;
        }
        cout << "Total occupied platforms: " << platforms.size() << endl;
        cout << "Total free platforms: " << MAX_PLATFORMS - platforms.size() << endl;
    }
};

void clearScreen() {
    system("cls");
}

void beautifyTerminal() {
    clearScreen();
    string line;
    ifstream asciiFile("terminal.txt");
    if (asciiFile.is_open()) {
        while (getline(asciiFile, line)) {
            cout << line << endl;
        }
        asciiFile.close();
    } else {
        cout << "================================" << endl;
        cout << "     Welcome to Train Station    " << endl;
        cout << "================================" << endl;
        cout << endl;
    }
}

bool authenticateUser(const string& password) {
    string enteredPassword;
    cout << "Enter Password: ";
    char c;
    while ((c = _getch()) != '\r') {
        if (c == '\b') {
            if (!enteredPassword.empty()) {
                enteredPassword.pop_back();
                cout << "\b \b";
            }
        } else {
            enteredPassword.push_back(c);
            cout << '*';
        }
    }
    cout << endl;

    return (enteredPassword == password);
}

void saveOperation(const string& operation, const string& filename) {
    ofstream file(filename, ios::app);
    if (file.is_open()) {
        file << operation << endl;
        file.close();
    } else {
        cout << "Error: Unable to open operation log file." << endl;
    }
}

int main() {
    TrainStation trainStation;
    string password = "72580";
    string operationLogFilename = "operations.txt";
    int choice;
    bool loggedIn = false;

    if (!authenticateUser(password)) {
        cout << "Incorrect password. Exiting program." << endl;
        return 0;
    }
    loggedIn = true;

    trainStation.loadPredefinedPlatforms("predefined_platforms.txt");

    while (loggedIn) {
        beautifyTerminal();

        cout << "Menu:" << endl;
        cout << "1. Allocate Platform for Train" << endl;
        cout << "2. Deallocate Platform for Train" << endl;
        cout << "3. Display Platform Summary" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string trainNumber;
                string platformNumber;
                cout << "Enter the train number: ";
                cin >> trainNumber;
                cout << "Enter the platform number: ";
                cin >> platformNumber;
                trainStation.allocatePlatform(trainNumber, platformNumber);
                saveOperation("Allocate Platform - Train: " + trainNumber + ", Platform: " + platformNumber, operationLogFilename);
                break;
            }
            case 2: {
                string trainNumber;
                cout << "Enter the train number: ";
                cin >> trainNumber;
                trainStation.deallocatePlatform(trainNumber);
                saveOperation("Deallocate Platform - Train: " + trainNumber, operationLogFilename);
                break;
            }
            case 3:
                trainStation.displaySummary();
                break;
            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
        cout << "Press any key to continue...";
        cin.ignore();
        cin.get();
        clearScreen();
    }

    return 0;
}
