#include <bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;

struct PhoneBook {
    string name;
    string phone;
    bool isFav;
};

vector<PhoneBook> contact;

void SaveContactsToFile(const string& contacts) {
    ofstream file("contacts.txt");
    if (!file) {
        cout << "Error opening file" << endl;
        return;
    }
    for (const auto& PhoneBook : contact) {
        file << PhoneBook.name << "," << PhoneBook.phone << "," << PhoneBook.isFav << endl;
    }
    file.close();
    cout << "Saving";
    for (int i = 0; i < 3; i++) {
        cout << ".";
        this_thread::sleep_for(chrono::milliseconds(500));
    }
}

void loadContacts(const string& contacts) {
    ifstream file("contacts.txt");
    if (!file) {
        cout << "Error opening file" << endl;
        return;
    }
    contact.clear();
    string line;
    while (getline(file, line)) {
        size_t pos1 = line.find(",");
        size_t pos2 = line.find(",", pos1 + 1);
        if (pos1 == string::npos || pos2 == string::npos) {
            cout << "Invalid data format in file" << endl;
            file.close();
            return;
        }
        string name = line.substr(0, pos1);
        string phone = line.substr(pos1 + 1, pos2 - pos1 - 1);
        string favString = line.substr(pos2 + 1);
        bool isFav;
        try {
            isFav = stoi(favString);
        } catch (const std::invalid_argument& e) {
            cout << "Invalid data format in file" << endl;
            file.close();
            return;
        }
        contact.push_back({name, phone, isFav});
    }
    file.close();
    cout << "Loading";
    for (int i = 0; i < 3; i++) {
        cout << ".";
        this_thread::sleep_for(chrono::milliseconds(500));
    }
}

void addContacts() {
    PhoneBook Cont;
    cout << "Enter name: ";
    cin.ignore();
    getline(cin, Cont.name);
    cout << "Enter phone number: ";
    getline(cin, Cont.phone);
    cout << "Enter 1 if you want to add this contact to favorites else enter 0: ";
    cin >> Cont.isFav;
    contact.push_back(Cont);
    SaveContactsToFile("contacts.txt");
    cout << "Contact added successfully" << endl;
    cin.ignore();
    system("pause");
}

void displayContacts() {
    cout << "Name\t\t\tPhone Number\t\tFavorite" << endl;
    for (const auto& PhoneBook : contact) {
        cout << left << setw(16) << PhoneBook.name << "\t";
        cout << left << setw(16) << PhoneBook.phone << "\t";
        cout << (PhoneBook.isFav ? "Yes" : "No") << endl;
    }
    cin.ignore();
    system("pause");
}


void Search() {
    string name;
    cout << "Enter name to search: ";
    cin.ignore();
    getline(cin, name);
    bool found = false;
    for (const auto& PhoneBook : contact) {
        if (PhoneBook.name == name) {
            cout << left << setw(16) << PhoneBook.name << "\t";
            cout << left << setw(16) << PhoneBook.phone << "\t";
            cout << (PhoneBook.isFav ? "Yes" : "No") << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Contact not found" << endl;
    }
    cin.ignore();
    system("pause");
}

void displayFav() {
    cout << "Favorite Contacts-->" << endl;
    bool found = false;
    for (const auto& PhoneBook : contact) {
        if (PhoneBook.isFav) {
            cout << left << setw(16) << PhoneBook.name << "\t";
            cout << left << setw(16) << PhoneBook.phone << "\t";
            cout << (PhoneBook.isFav ? "Yes" : "No") << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No favorite contacts" << endl;
    }
    cin.ignore();
    system("pause");
}

void deleteContact() {
    string name;
    cout << "Enter name to delete: ";
    cin.ignore();
    getline(cin, name);
    bool found = false;
    for (auto it = contact.begin(); it != contact.end(); it++) {
        if (it->name == name) {
            contact.erase(it);
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Contact not found" << endl;
    } else {
        cout << "Contact deleted successfully" << endl;
    }
    cin.ignore();
    system("pause");
}

bool password(const string& password) {
    const string pass = "72580";
    return password == pass;
}

string getKey() {
    string password;
    char c;
    while ((c = _getch()) != '\r') {
        if (c == '\b') {
            if (!password.empty()) {
                password.pop_back();
                cout << "\b \b";
            }
        } else {
            password.push_back(c);
            cout << '*';
        }
    }

    cout << endl;

    return password;
}

int main() {
    string key;
    bool isCorrect = false;
    while (!isCorrect) {
        system("cls");
        cout << "Enter password: ";
        key = getKey();
        isCorrect = password(key);
        if (!isCorrect) {
            cout << "Incorrect password" << endl;
        }
    }
    loadContacts("contacts.txt");
    cout << endl;
    int choice;
    bool clearScreen = true;
    while (true) {
        if (clearScreen) {
            system("cls");
        }
        cout << "1. Add contact" << endl;
        cout << "2. Display all contacts" << endl;
        cout << "3. Search contact" << endl;
        cout << "4. Display favorite contacts" << endl;
        cout << "5. Delete contact" << endl;
        cout << "6. Toggle clear screen" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addContacts();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                Search();
                break;
            case 4:
                displayFav();
                break;
            case 5:
                deleteContact();
                break;
            case 6:
                clearScreen = !clearScreen;
                break;
            case 7:
                SaveContactsToFile("contacts.txt");
                cout << "Exiting";
                for (int i = 0; i < 3; i++) {
                    cout << ".";
                    this_thread::sleep_for(chrono::milliseconds(500));
                }
                system("cls");
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
